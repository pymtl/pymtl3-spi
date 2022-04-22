#=========================================================================
# SPIMinion
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class SPIMinion( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, pack_size):

    # Port-based interface

    s.serve       = OutPort( 1  )
    s.seize       = OutPort( 1  )
    s.from_device = InPort ( pack_size )
    s.to_device   = OutPort( pack_size )
    s.sclk        = InPort ( 1  )
    s.cs          = InPort ( 1  )
    s.mosi        = InPort ( 1  )
    s.miso        = OutPort( 1  )
    
    s.set_metadata( VerilogPlaceholderPass.params,{ 'pack_size' : pack_size })

    # has_clk and has_reset are True by default
    # s.set_metadata( VerilogPlaceholderPass.has_clk, True )
    # s.set_metadata( VerilogPlaceholderPass.has_reset, True )

