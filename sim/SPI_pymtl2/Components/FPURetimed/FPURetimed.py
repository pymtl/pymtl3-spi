#=========================================================================
# FPU Retimed
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class FPURetimed( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s ):

    # Port-based interface
    
    s.req_rdy   = OutPort( 1 )
    s.req_val   = InPort ( 1 )
    s.req_msg   = InPort (128)
    
    s.resp_rdy  = InPort ( 1 )
    s.resp_val  = OutPort( 1 )
    s.resp_msg  = OutPort(128)


    # has_clk and has_reset are True by default
    # s.set_metadata( VerilogPlaceholderPass.has_clk, True )
    # s.set_metadata( VerilogPlaceholderPass.has_reset, True )
