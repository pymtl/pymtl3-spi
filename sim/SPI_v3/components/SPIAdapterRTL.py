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
from ..interfaces import PushInIfc, PullOutIfc
from pymtl3.stdlib.stream.ifcs import RecvIfcRTL, SendIfcRTL

def mk_miso_msg(nbits):
  @bitstruct
  class MisoMsg:
    val: Bits1
    spc: Bits1
    data: mk_bits(nbits-2)
  return MisoMsg

def mk_mosi_msg(nbits):
  @bitstruct
  class MosiMsg:
    val_wrt: Bits1
    val_rd: Bits1
    data: mk_bits(nbits-2)
  return MosiMsg


class SPIAdapterVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits=8, num_entries=1 ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'SPIAdapterRTL__{nbits}nbits__{num_entries}num_entries' )

    s.push = PushInIfc( mk_mosi_msg(nbits) ) #interfaces from perspective of SPIMinion
    s.pull = PullOutIfc( mk_miso_msg(nbits) )

    s.recv = RecvIfcRTL( mk_bits(nbits-2))
    s.send = SendIfcRTL( mk_bits(nbits-2))

    s.set_metadata( VerilogPlaceholderPass.port_map, {
        s.pull.en          : 'pull_en',
        s.pull.msg.val     : 'pull_msg_val',
        s.pull.msg.spc     : 'pull_msg_spc',
        s.pull.msg.data    : 'pull_msg_data',
        s.push.en          : 'push_en',
        s.push.msg.val_wrt : 'push_msg_val_wrt',
        s.push.msg.val_rd  : 'push_msg_val_rd',
        s.push.msg.data    : 'push_msg_data',
        s.recv.msg         : 'recv_msg',
        s.recv.rdy         : 'recv_rdy',
        s.recv.val         : 'recv_val',
        s.send.msg         : 'send_msg',
        s.send.rdy         : 'send_rdy',
        s.send.val         : 'send_val'  
    })


# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPIAdapterPRTL import SPIAdapterPRTL as SPIAdapterRTL
elif rtl_language == 'verilog':
  SPIAdapterRTL = SPIAdapterVRTL
else:
  raise Exception("Invalid RTL language!")