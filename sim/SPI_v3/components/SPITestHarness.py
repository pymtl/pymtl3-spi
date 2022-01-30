'''
==========================================================================
TapeOutTestHarness.py
==========================================================================
Test harness for sending messages over SPI.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from math import ceil
import copy

#=========================================================================
# TestHarness
#=========================================================================

class TapeOutTestHarness( object ):

  #-----------------------------------------------------------------------
  # constructor
  #-----------------------------------------------------------------------
 
  def __init__( s, DESIGN, component_bits, cmdline_opts ):
 
    s.dut = DESIGN
    s.dut = config_model_with_cmdline_opts( s.dut, cmdline_opts, [] )
    s.dut.apply(DefaultPassGroup())

    s.dut.cs @= 1
    s.dut.sclk @= 0
    s.dut.mosi @= 0
    s.dut.miso @= 0

    s.dut.sim_reset() # Reset the simulator

    s.spi_bits = s.dut.spi_bits
    s.component_bits = component_bits
    s.spi_msg_bits = s.spi_bits - s.component_bits - 2


  def t_mult_msg(component_num, req_len, resp_len, request_list, expected_resp_list ):#send messages
    comp_bits = mk_bits(component_num)

    #create req messages
    all_reqs = []
    for req in request_list:
      req_msgs = [] 
      i = 0
      while i < req_len//s.spi_msg_bits: # 2 valid bits that we do not want to account for when splitting message
        req_msgs.append(req[i*s.spi_msg_bits: (i+1)*s.spi_msg_bits])
        i += 1

      if req_len % (s.spi_msg_bits) != 0: # if there are leftover bits i.e. we will have to pad with zeros to get to width of SPI channel
        req_msgs.append( zext( req[i*s.spi_msg_bits:], s.spi_msg_bits ) )

      req_msgs.reverse() # reverse because we want the most significant packet to be first in the list
      all_reqs.append(req_msgs) # append this list to the all_requests list

    all_expected_resps = []
    for resp in expected_resp_list:
      exp_resp = zext(exp_resp, s.spi_msg_bits*(ceil(resp_len/s.spi_msg_bits))) # zext to get correct length for exp_resp
      all_expected_resps.append(exp_resp)

    #send req / read resp
    actual_responses = []
    resp_msgs = []

    def _assemble_msg():
      # assemble response
      if len(resp_msgs) == 1:
        act_resp = resp_msgs[0]
      else:
        act_resp = concat(resp_msgs[0], resp_msgs[1] )
        i = 2
        while i < len(resp_msgs):
          act_resp = concat(act_resp, resp_msgs[i])
          i+=1
      resp_msgs.clear()
      actual_responses.append(act_resp) # append response to single request to overall responses list

    def _process_resp(resp):
      if resp[s.spi_bits-1]==1:
        resp_msgs.append(resp[0:s.spi_msg_bits])
        if len(resp_msgs) == ceil(resp_len/s.spi_msg_bits):
          _assemble_msg()

    resp_spi = _t_spi(concat(Bits1(0), Bits1(1), comp_bits, zext(Bits1(0),s.spi_msg_bits)))
    _process_resp(resp_spi)
    while(resp_spi[s.spi_bits-2] == 0 ):#poll until space available. We wait for the space bit (the second most significant bit) to be 1
      resp_spi = t_spi(concat(Bits1(0), Bits1(1), comp_bits, zext(Bits1(0),s.spi_msg_bits)))
      _process_resp(resp_spi)

    for req in all_reqs:
      for msg in req: #sending reqs
        resp_spi = _t_spi(concat(Bits1(1),Bits1(1),comp_bits,msg))
        _process_resp(resp_spi)

        while(resp_spi[s.spi_bits-2] == 0 ): #poll until space available. We wait for the space bit (the second most significant bit) to be 1
          resp_spi = _t_spi(concat(Bits1(0), Bits1(1), comp_bits, zext(Bits1(0), s.spi_msg_bits)))
          _process_resp(resp_spi)


    while len(actual_responses) < len(all_expected_resps): # get responses to each request
      resp_spi = _t_spi( concat(Bits1(0), Bits1(1), comp_bits, zext(Bits1(0),s.spi_msg_bits)))
      _process_resp(resp_spi)



    for i in range(len(all_expected_resps)):
      assert all_expected_resps[i] == actual_responses[i]

  def _t_spi( pkt ): #send spi packets
    start_transaction()
    resp_spi = Bits1(0)
    for i in range(dut.spi_bits):
      resp_bit = _send_bit( pkt[dut.spi_bits - i - 1] )
      if i == 0:
        resp_spi = resp_bit
      else:
        resp_spi = concat( resp_spi, resp_bit )
    _end_transaction()
    return copy.deepcopy(resp_spi)

  def _start_transaction( ): #send bits
    # Starts a transaction by keeping cs HIGH for 4 cycles then pulling cs LOW 
    for i in range(4): # cs = 1
      # Write input values to input ports
      s.dut.sclk        @= 0
      s.dut.cs          @= 1
      s.dut.mosi        @= 1 # mosi is a dont care here bc CS is high
      s.dut.sim_eval_combinational()
      # Tick simulator one cycle
      s.dut.sim_tick()
    for i in range(3): # cs = 0, three cycles because the synchronizer takes 2 cycles for negedge to appear
      s.dut.sclk        @= 0
      s.dut.cs          @= 0
      s.dut.mosi        @= 1 # mosi is a dont care here bc CS is high
      s.dut.sim_eval_combinational()
      s.dut.sim_tick()

  def _end_transaction( ):
    s.dut.sclk        @= 0
    s.dut.cs          @= 1
    s.dut.mosi        @= 1 # mosi is a dont care here bc CS is high
    s.dut.sim_eval_combinational()
    s.dut.sim_tick()

  def _send_bit(mosi): #send bits
    # This function sends bits over SPI once the transaction has been started (CS is already low)
    for i in range(4): # sclk = 0
      # Write input values to input ports
      s.dut.sclk        @= 0
      s.dut.cs          @= 0
      s.dut.mosi        @= mosi
      s.dut.sim_eval_combinational()
      # Tick simulator one cycle
      s.dut.sim_tick()

    for i in range(4): # sclk = 1
      s.dut.sclk        @= 1
      s.dut.cs          @= 0
      s.dut.mosi        @= mosi
      s.dut.sim_eval_combinational()
      s.dut.sim_tick()

    # only return MISO after 8th cycle so it has time to reflect correct value
    return copy.deepcopy(dut.miso) 