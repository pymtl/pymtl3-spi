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
from ..interfaces.SPIIfc import SPIMinionIfc

class SPILoopBackCompositeVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits=32 ):

    #Local parameters

    s.nbits = nbits  # size of SPI packet including 2 bit flow control

    #Interface

    s.spi_min = SPIMinionIfc()
    s.minion_parity = OutPort()
    s.adapter_parity = OutPort()
    
    # s.recv = RecvIfcRTL( mk_bits(nbits-2))
    # s.send = SendIfcRTL( mk_bits(nbits-2))

    # s.set_metadata( VerilogPlaceholderPass.port_map, {
    #   s.cs    : 'cs',
    #   s.sclk  : 'sclk',
    #   s.mosi  : 'mosi',
    #   s.miso  : 'miso',

    #   s.recv.val  : 'recv_val',
    #   s.recv.rdy  : 'recv_rdy',
    #   s.recv.msg  : 'recv_msg',

    #   s.send.val  : 'send_val',
    #   s.send.rdy  : 'send_rdy',
    #   s.send.msg  : 'send_msg',
    # })

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPILoopBackCompositePRTL import SPILoopBackCompositePRTL as SPILoopBackCompositeRTL
elif rtl_language == 'verilog':
  SPILoopBackCompositeRTL = SPILoopBackCompositeVRTL
else:
  raise Exception("Invalid RTL language!")