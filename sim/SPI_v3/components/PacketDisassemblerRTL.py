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
from pymtl3.stdlib.stream.ifcs import MinionIfcRTL

class PacketDisassemblerVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits_in, nbits_out ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'PacketDisassemblerRTL_{nbits_in}nbits_in_{nbits_out}nbits_out' )

    # s.spi_min = SPIMinionIfc()
    # s.push = PushOutIfc( nbits )
    # s.pull = PullInIfc ( nbits )

    # s.set_metadata( VerilogPlaceholderPass.port_map, {
    #   s.spi_min.cs    : 'cs',
    #   s.spi_min.sclk  : 'sclk',
    #   s.spi_min.mosi  : 'mosi',
    #   s.spi_min.miso  : 'miso',

    #   s.push.en  : 'push_en',
    #   s.push.msg : 'push_msg',

    #   s.pull.en  : 'pull_en',
    #   s.pull.msg : 'pull_msg',
    # })

# For to force testing a specific RTL language
import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .PacketDisassemblerPRTL import PacketDisassemblerPRTL as PacketDisassemblerRTL
elif rtl_language == 'verilog':
  PacketDisassemblerRTL = PacketDisassemblerVRTL
else:
  raise Exception("Invalid RTL language!")