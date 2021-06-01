#=========================================================================
# SPIMinion
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class SPIHardbits( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, pack_size, hard_bits):

    # Port-based interface

    s.serve         = InPort ( 1 )
    s.hard_msg      = OutPort( 1 )
    s.from_master   = InPort ( pack_size )
    s.to_master     = OutPort( pack_size )
    s.detected_bits = OutPort( hard_bits )
    s.from_device   = InPort ( pack_size )
    s.to_device     = OutPort( pack_size )  
    
    s.set_metadata( VerilogPlaceholderPass.params,{ 'pack_size' : pack_size, 'hard_bits': hard_bits})

    


    # has_clk and has_reset are True by default
    # s.set_metadata( VerilogPlaceholderPass.has_clk, True )
    # s.set_metadata( VerilogPlaceholderPass.has_reset, True )

