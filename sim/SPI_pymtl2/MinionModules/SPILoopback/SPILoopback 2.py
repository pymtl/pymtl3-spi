#=========================================================================
# SPIMinion
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class SPILoopback( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, pack_size):

    # Port-based interface

    s.serve       = InPort ( 1 )
    s.loop_en     = InPort ( 1 )
    s.from_master = InPort ( pack_size )
    s.to_master   = OutPort( pack_size )
    s.from_device = InPort ( pack_size )
    s.to_device   = OutPort( pack_size )
    
    s.set_metadata( VerilogPlaceholderPass.params,{ 'pack_size' : pack_size })

    # has_clk and has_reset are True by default
    # s.set_metadata( VerilogPlaceholderPass.has_clk, True )
    s.set_metadata( VerilogPlaceholderPass.has_reset, False )



