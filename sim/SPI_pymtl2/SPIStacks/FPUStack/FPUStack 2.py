#=========================================================================
# FPU Stack
#=========================================================================

from pymtl3                                   import *
from SPI_pymtl2.MinionModules.MinionManager   import MinionManager
from SPI_pymtl2.Components.FPURetimed         import FPURetimed
from SPI_pymtl2.Interface                     import SPIInterface

class FPUStack( Component ):

  # Constructor

  def construct( s, hard_bits, loopback, queue_size):

    # stack instantiation
    s.spi_stack = MinionManager(128,hard_bits, loopback, queue_size)  

    # interface
    s.minion_inter = SPIInterface.MinionInterface()
    
    s.minion_inter.cs    //= s.spi_stack.cs
    s.minion_inter.sclk  //= s.spi_stack.sclk
    s.minion_inter.mosi  //= s.spi_stack.mosi
    s.minion_inter.miso  //= s.spi_stack.miso
      
    #FPU Instnatiation     
    s.fpu_retimed = FPURetimed()    
    
    #stack to device connections
    s.spi_stack.send_val  //= s.fpu_retimed.req_val
    s.spi_stack.send_rdy  //= s.fpu_retimed.req_rdy
    s.spi_stack.send_msg  //= s.fpu_retimed.req_msg

    s.spi_stack.recv_val  //= s.fpu_retimed.resp_val
    s.spi_stack.recv_rdy  //= s.fpu_retimed.resp_rdy
    s.spi_stack.recv_msg  //= s.fpu_retimed.resp_msg
