#=========================================================================
# LoopbackStack
#=========================================================================

from pymtl3 import *
from SPI_pymtl2.MinionModules.MinionManager   import MinionManager

class LoopbackStack( Component ):

  # Constructor

  def construct( s, pack_size, queue_size):

    s.cs      = InPort ( 1 )
    s.sclk    = InPort ( 1 )
    s.mosi    = InPort ( 1 )
    s.miso    = OutPort( 1 )
    # master to stack connections
    
    s.spi_stack = MinionManager(pack_size,0, 0, queue_size)
    
    s.cs    //= s.spi_stack.cs
    s.sclk  //= s.spi_stack.sclk
    s.mosi  //= s.spi_stack.mosi
    s.miso  //= s.spi_stack.miso
    
    
    #stack to device connections
    s.spi_stack.send_val  //= s.spi_stack.recv_val
    s.spi_stack.send_rdy  //= s.spi_stack.recv_rdy
    s.spi_stack.send_msg  //= s.spi_stack.recv_msg

