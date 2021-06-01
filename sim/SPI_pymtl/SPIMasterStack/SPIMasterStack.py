#=========================================================================
# SPIMasterStack
#=========================================================================

from pymtl3 import *
from ..SPIStack  import SPIStack
from ..SPIMaster import SPIMaster

class SPIMasterStack( Component ):

  # Constructor

  def construct( s, pack_size):

    s.req_val     = InPort ( 1 )
    s.req_rdy     = OutPort( 1 )
    s.req_msg     = InPort ( pack_size )
    s.resp_val    = OutPort( 1 )
    s.resp_rdy    = InPort ( 1 )
    s.resp_msg    = OutPort( pack_size )

      
    # master port connections
    s.spi_master = SPIMaster(pack_size,4)
    
    s.spi_master.req_val  //= s.req_val
    s.spi_master.req_rdy  //= s.req_rdy
    s.spi_master.req_msg  //= s.req_msg
    s.spi_master.resp_val //= s.resp_val
    s.spi_master.resp_rdy //= s.resp_rdy
    s.spi_master.resp_msg //= s.resp_msg
    
#    # master to stack connections
#    s.spi_stack = SPIStack(pack_size,0)
#    
#    s.spi_master.cs       //= s.spi_stack.cs
#    s.spi_master.sclk     //= s.spi_stack.sclk
#    s.spi_master.mosi     //= s.spi_stack.mosi
#    s.spi_master.miso     //= s.spi_stack.miso
#    
#    #stack to device connections
#    s.spi_stack.send_msg  //= s.spi_stack.recv_msg

    # master to stack connections
    s.spi_stack = SPIStack(pack_size,4)
    
    s.spi_master.cs       //= s.spi_stack.cs
    s.spi_master.sclk     //= s.spi_stack.sclk
    s.spi_master.mosi     //= s.spi_stack.mosi
    s.spi_master.miso     //= s.spi_stack.miso
    
    #stack to device connections
    s.spi_stack.send_val  //= s.spi_stack.recv_val
    s.spi_stack.send_rdy  //= s.spi_stack.recv_rdy
    s.spi_stack.send_msg  //= s.spi_stack.recv_msg

