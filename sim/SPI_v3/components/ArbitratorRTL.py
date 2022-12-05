#=========================================================================
# Choose PyMTL or Verilog version
#=========================================================================
# Set this variable to 'pymtl' if you are using PyMTL for your RTL design
# (i.e., your design is in IntMultBasePRTL) or set this variable to
# 'verilog' if you are using Verilog for your RTL design (i.e., your
# design is in IntMulBaseVRTL).

rtl_language = 'pymtl'

#-------------------------------------------------------------------------
# Do not edit below this line
#-------------------------------------------------------------------------

# PyMTL wrappers for the corresponding Verilog RTL models.

from os import path
from pymtl3 import *
from pymtl3.passes.backends.verilog import *
from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL

def mk_arb_msg(addr_nbits, data_nbits):
  @bitstruct
  class ArbitratorMsg:
    addr: mk_bits(addr_nbits)
    data: mk_bits(data_nbits)
  return ArbitratorMsg

class ArbitratorVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits, num_inputs ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'ArbitratorRTL_{nbits}nbits_{num_inputs}num_inputs' )

    s.nbits = nbits
    s.num_inputs = num_inputs
    s.addr_nbits = clog2(num_inputs)

    # interface
    s.recv = [ RecvIfcRTL(mk_bits(s.nbits)) for _ in range(s.num_inputs) ]
    s.send = SendIfcRTL(mk_arb_msg(s.addr_nbits, s.nbits))

    # s.recv_val = Wire(s.num_inputs)
    # s.recv_rdy = Wire(s.num_inputs)
    # s.recv_msg = Wire(s.num_inputs*s.nbits)

    # # s.send_val = Wire()
    # s.send_rdy = Wire()
    # s.send_msg = Wire(s.nbits+s.addr_nbits)

    s.recv_val_array = Wire(s.num_inputs)
    s.recv_rdy_array = Wire(s.num_inputs)
    s.recv_msg_array = Wire(s.num_inputs*s.nbits)

    for i in range(s.num_inputs):
      # s.recv_val_array[i] = s.recv[s.num_inputs-i-1].val
      # s.recv_rdy_array[i] = s.recv[s.num_inputs-i-1].rdy
      # s.recv_msg_array[i:(i+1)*s.nbits-1] = s.recv[s.num_inputs-i-1].msg
      s.recv_val_array[i] = 0
      s.recv_rdy_array[i] = 0
      s.recv_msg_array[i:(i+1)*s.nbits-1] = 0
    #   s.recv_val[i] = s.recv[i].val
    #   s.recv_rdy[i] = s.recv[i].rdy
    #   s.recv_msg[i:s.nbits*(i+1)-1] = s.recv[i].msg


    # s.send.msg.addr = s.send_msg[s.nbits:s.nbits+s.addr_nbits-1]
    # s.send.msg.data = s.send_msg[0:s.nbits-1]
    # s.send_val = s.send.val
    # s.send.val = s.send_val
    # s.send.rdy = s.send_rdy



    s.set_metadata( VerilogPlaceholderPass.port_map, {
      s.recv_val_array : "recv_val",
      s.recv_rdy_array : "recv_rdy",
      s.recv_msg_array : "recv_msg",

      s.send.val  : 'send_val',
      s.send.rdy  : 'send_rdy',
      s.send.msg :  'send_msg'
    })


# For to force testing a specific RTL language
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .ArbitratorPRTL import ArbitratorPRTL as ArbitratorRTL
elif rtl_language == 'verilog':
  ArbitratorRTL = ArbitratorVRTL
else:
  raise Exception("Invalid RTL language!")
