#=========================================================================
# SPIQueue
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class SPIQueue( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, pack_size, num_entries):

    # Port-based interface

    s.serve       = InPort ( 1 )
    s.seize       = InPort ( 1 )
    s.hard_msg    = InPort ( 1 )
    
    
    # to device
    s.send_val    = OutPort( 1 )
    s.send_rdy    = InPort ( 1 )
    s.send_msg    = OutPort( pack_size )
    
    # from device
    s.recv_val    = InPort ( 1 )
    s.recv_rdy    = OutPort( 1 )
    s.recv_msg    = InPort ( pack_size )
    
    # respect to master
    s.from_master = InPort ( pack_size )
    s.to_master   = OutPort( pack_size )

    s.set_metadata( VerilogPlaceholderPass.params,{ 'pack_size' : pack_size, 'num_entries' : num_entries })

    # has_clk and has_reset are True by default
    # s.set_metadata( VerilogPlaceholderPass.has_clk, True )
    # s.set_metadata( VerilogPlaceholderPass.has_reset, True )

