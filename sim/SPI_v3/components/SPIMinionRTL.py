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
from ..interfaces import PushOutIfc, PullInIfc

class SPIMinionVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits=8 ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'SPIMinionRTL_{nbits}nbits' )

    s.cs   = InPort ()
    s.sclk = InPort ()
    s.mosi = InPort ()
    s.miso = OutPort()
    s.push = PushOutIfc( nbits )
    s.pull = PullInIfc ( nbits )

    s.set_metadata( VerilogPlaceholderPass.port_map, {
      s.cs    : 'cs',
      s.sclk  : 'sclk',
      s.mosi  : 'mosi',
      s.miso  : 'miso',

      s.push.en  : 'push_en',
      s.push.msg : 'push_msg',

      s.pull.en  : 'pull_en',
      s.pull.msg : 'pull_msg',
    })

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPIMinionPRTL import SPIMinionPRTL as SPIMinionRTL
elif rtl_language == 'verilog':
  SPIMinionRTL = SPIMinionVRTL
else:
  raise Exception("Invalid RTL language!")