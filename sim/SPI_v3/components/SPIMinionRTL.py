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

class SPIMinionVRTL( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, nbits=8 ):

    s.set_metadata( VerilogTranslationPass.explicit_module_name, f'SPIMinionRTL_{nbits}nbits' )

    s.cs = InPort()
    s.miso = OutPort()
    s.mosi = InPort()
    s.sclk = InPort()
    s.pull_en = OutPort()
    s.pull__msg = InPort(nbits)
    s.push__en = OutPort()
    s.push__msg = OutPort(nbits)

# See if the course staff want to force testing a specific RTL language
# for their own testing.

import sys
if hasattr( sys, '_called_from_test' ):
  if sys._pymtl_rtl_override:
    rtl_language = sys._pymtl_rtl_override

# Import the appropriate version based on the rtl_language variable

if rtl_language == 'pymtl':
  from .SPIMinionPRTL import SPIMinionPRTL as SPIMinionRTL
elif rtl_language == 'verilog':
  SPIMinionRTL = SPIMinionVRTL
else:
  raise Exception("Invalid RTL language!")