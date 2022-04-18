'''
==========================================================================
SPIPhysicalTestHarness.py
==========================================================================
Test harness for sending messages over SPI. For use with SPIMinionAdapterComposite module.
This module is designed for post-silicon testing using the SPI Driver found here: https://spidriver.com
Documentation for the corresponding spidriver library can be found here: https://spidriver.readthedocs.io/en/latest/index.html

Author : Kyle Infantino and Dilan Lakhani
  Date : Jan 30, 2022
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from math import ceil
import copy

from spidriver import SPIDriver

#=========================================================================
# TestHarness
#=========================================================================

class SPIPhysicalTestHarness( object ):

  #-----------------------------------------------------------------------
  # constructor
  #-----------------------------------------------------------------------
 
  #-----------------------------------------------------------------------
  # DESIGN: instantiation of RTL design
  # num_components: number of components that can be addressed
  # spi_bits: must be factor of 8
  #           number of bits in an spi packet. Each packet consists of 2 
  #           flow control bits, (optional) component address bits, and the data
  # port: path to SPIDriver port on device (ex. "/dev/ttyUSB0")
  #-----------------------------------------------------------------------
  def __init__( s, DESIGN, num_components, spi_bits, port, cmdline_opts, trace=True ):

    s.driver = SPIDriver(port) # change for your port
    s.driver.setmode(3) # set to SPI mode 3
    s.driver.unsel() # raise CS line

    s.spi_bits = spi_bits
    s.component_bits = 0 if num_components < 2 else clog2(num_components)
    s.spi_msg_bits = s.spi_bits - s.component_bits - 2 # 2 valid bits that we do not want to account for when splitting message

  #-----------------------------------------------------------------------
  # req/resp_len: number of bits of req/resp message
  # request_list: array of messages to send to DUT
  # expected_resp_list: array of expected message to receive from DUT. If print_msgs is True, list can be filled with don't cares
  # components_addr: index of component messages are being sent to
  # return_msgs: False indicates actual responses will be compared to the expected responses. 
  #             True indicates the actual responses will be returned instead. Returns format [actual response addresses], [actual response messages]
  #             The length of expected_resp_list must be equal to the number of messages to be printed
  #-----------------------------------------------------------------------
  def t_mult_msg(s, req_len, request_list, resp_len, expected_resp_list, component_addr=0, return_msgs=False ):#send messages

    if req_len > 0:
      req_BitsN = mk_bits(req_len)
    
    if resp_len > 0:
      resp_BitsN = mk_bits(resp_len)

    if s.component_bits > 0:
      comp_addr = mk_bits(s.component_bits)(component_addr)

    #create req messages
    all_reqs = []
    for req in request_list:
      req_msgs = [] 
      i = 0
      req = req_BitsN(req)
      while i < req_len//s.spi_msg_bits: 
        req_msgs.append(req[i*s.spi_msg_bits: (i+1)*s.spi_msg_bits])
        i += 1

      if req_len % (s.spi_msg_bits) != 0: # if there are leftover bits i.e. we will have to pad with zeros to get to width of SPI channel
        req_msgs.append( zext( req[i*s.spi_msg_bits:], s.spi_msg_bits ) )

      req_msgs.reverse() # reverse because we want the most significant packet to be first in the list
      all_reqs.append(req_msgs) # append this list to the all_requests list

    all_expected_resps = []
    for resp in expected_resp_list:
      # zext to get correct length for the expected message (actual result will be a multiple of spi_msg_bits)
      exp_resp = zext(resp_BitsN(resp), s.spi_msg_bits*(ceil(resp_len/s.spi_msg_bits))) 
      all_expected_resps.append(exp_resp)

    #send req / read resp
    actual_responses = []
    actual_resp_addr = []
    resp_msgs = []

    def _assemble_msg( addr ):
      # assemble full response from spi packets
      if len(resp_msgs) == 1:
        act_resp = resp_msgs[0]
      else:
        act_resp = concat(resp_msgs[0], resp_msgs[1] )
        i = 2
        while i < len(resp_msgs):
          act_resp = concat(act_resp, resp_msgs[i])
          i+=1
      resp_msgs.clear() #clear received SPI packets
      actual_resp_addr.append(addr) #append components address to array
      actual_responses.append(act_resp) # append assembled response to list of all responses

    def _process_resp(resp):
      if resp[s.spi_bits-1]==1: #check if valid response
        resp_msgs.append(resp[0:s.spi_msg_bits]) #save message if response val bit set
        if len(resp_msgs) == ceil(resp_len/s.spi_msg_bits): #check if number of packets received is enough to assemble a whole response message
          if s.component_bits > 0: #check if any component bits
            resp_addr = resp[ s.spi_msg_bits:s.spi_msg_bits + s.component_bits ]  #get component address
          else: #no component bits
            resp_addr = 0 #set response address equal to 0
          _assemble_msg( resp_addr ) #assemble message if enough spi response packets to make response message

    #send spi message to get status bits from MinionAdapter TODO: remove condition
    if s.component_bits > 0:
      resp_spi = s._t_spi(concat(Bits1(0), Bits1(0), comp_addr, zext(Bits1(0),s.spi_msg_bits)))
    else:
      resp_spi = s._t_spi(concat(Bits1(0), Bits1(0), zext(Bits1(0),s.spi_msg_bits)))

    while(resp_spi[s.spi_bits-2] == 0 ):#poll until space available. We wait for the space bit (the second most significant bit) to be 1
      if s.component_bits > 0:
        resp_spi = s._t_spi(concat(Bits1(0), Bits1(0), comp_addr, zext(Bits1(0),s.spi_msg_bits)))
      else:
        resp_spi = s._t_spi(concat(Bits1(0), Bits1(0), zext(Bits1(0),s.spi_msg_bits)))

    #space is now available in MinionAdapter queue for more messages
    for req in all_reqs:
      for msg in req: #sending reqs
        if s.component_bits > 0:
          resp_spi = s._t_spi(concat(Bits1(1),Bits1(1),comp_addr,msg))
        else:
          resp_spi = s._t_spi(concat(Bits1(1),Bits1(1),msg))
        _process_resp(resp_spi)

        while(resp_spi[s.spi_bits-2] == 0 ): #wait until space is available again
          if s.component_bits > 0:
            resp_spi = s._t_spi(concat(Bits1(0), Bits1(1), comp_addr, zext(Bits1(0), s.spi_msg_bits)))
          else:
            resp_spi = s._t_spi(concat(Bits1(0), Bits1(1), zext(Bits1(0), s.spi_msg_bits)))
          _process_resp(resp_spi)

    # get responses to each request
    while len(actual_responses) < len(all_expected_resps): #wait until all exepected responses received 
      if s.component_bits > 0:
        resp_spi = s._t_spi( concat(Bits1(0), Bits1(1), comp_addr, zext(Bits1(0),s.spi_msg_bits)))
      else:
        resp_spi = s._t_spi( concat(Bits1(0), Bits1(1), zext(Bits1(0),s.spi_msg_bits)))
      _process_resp(resp_spi)


    # all responses received - check results
    if return_msgs:
      return actual_resp_addr, actual_responses
    for i in range(len(all_expected_resps)):
      print("Component Addr: " + str(actual_resp_addr[i]) + " Actual: " + str(actual_responses[i]) + " | Expected: " + str(all_expected_resps[i]))
      assert all_expected_resps[i] == actual_responses[i]

  #helper functions
  def _t_spi( s, pkt ): #send spi packets
    s.driver.sel()
    rec_msg = s.driver.writeread(s.spi_bits//8)
    s.driver.unsel()
    return rec_msg