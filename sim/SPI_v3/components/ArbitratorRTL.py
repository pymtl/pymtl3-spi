#=========================================================================
# Choose PyMTL or Verilog version
#=========================================================================
# Set this variable to 'pymtl' if you are using PyMTL for your RTL design
# (i.e., your design is in IntMultBasePRTL) or set this variable to
# 'verilog' if you are using Verilog for your RTL design (i.e., your
# design is in IntMulBaseVRTL).

rtl_language = 'verilog'

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
    addr_nbits = clog2(num_inputs)

    s.recv = [ RecvIfcRTL(mk_bits(s.nbits)) for _ in range(s.num_inputs) ]
    s.send = SendIfcRTL(mk_arb_msg(addr_nbits, s.nbits))

    s.recv_val_concat = Wire(s.num_inputs)
    s.recv_rdy_concat = Wire(s.num_inputs)
    s.recv_msg_concat = Wire(s.num_inputs)

    s.recv_val_concat = concat(s.recv[1].val, s.recv[0].val)
    s.recv_rdy_concat = concat(s.recv[1].rdy, s.recv[0].rdy)
    s.recv_msg_concat = concat(s.recv[1].msg, s.recv[0].msg)
    i = 1
    while i < (num_inputs - 1):
        s.recv_val_concat = concat(s.recv[i+1].val, s.recv_val_concat)
        s.recv_rdy_concat = concat(s.recv[i+1].rdy, s.recv_rdy_concat)
        s.recv_msg_concat = concat(s.recv[i+1].msg, s.recv_msg_concat)
        i += 1

    # s.set_metadata( VerilogPlaceholderPass.port_map, {
    #   s.recv.rdy  : 'req_rdy',
    #   s.recv.val  : 'req_val',
    #   s.recv.msg  : 'req_msg',
    #   s.send.rdy : 'resp_rdy',
    #   s.send.val : 'resp_val',
    #   s.send.msg : 'resp_msg',
    # })

    # for i in range(num_inputs):
    #     s.set_metadata( VerilogPlaceholderPass.port_map, {
    #     s.recv[i].rdy  : f'req_rdy[{i}]',
    #     s.recv[i].val  : f'req_val[{i}]',
    #     s.recv[i].msg  : f'req_msg[{i}]',
    #     s.send.rdy : 'resp_rdy',
    #     s.send.val : 'resp_val',
    #     s.send.msg : 'resp_msg',
    #     })

    # s.set_metadata( VerilogPlaceholderPass.port_map, {
    # s.recv[0].rdy  : 'req_rdy[0]',
    # s.recv[0].val  : 'req_val[0]',
    # s.recv[0].msg  : 'req_msg[0]',
    # s.recv[1].rdy  : 'req_rdy[1]',
    # s.recv[1].val  : 'req_val[1]',
    # s.recv[1].msg  : 'req_msg[1]',
    # s.send.rdy : 'resp_rdy',
    # s.send.val : 'resp_val',
    # s.send.msg : 'resp_msg',
    # })

    s.set_metadata( VerilogPlaceholderPass.port_map, {
    s.recv_val_concat  : 'req_val',
    s.recv_rdy_concat  : 'req_rdy',
    s.recv_msg_concat  : 'req_msg',
    s.send.rdy : 'resp_rdy',
    s.send.val : 'resp_val',
    s.send.msg : 'resp_msg',
    })

# For to force testing a specific RTL language
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .Arbitrator import Arbitrator as ArbitratorRTL
elif rtl_language == 'verilog':
  ArbitratorRTL = ArbitratorVRTL
else:
  raise Exception("Invalid RTL language!")
