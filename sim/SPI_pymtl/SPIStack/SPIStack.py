from pymtl3 import *
from ..SPIMinion import SPIMinion
from ..SPIQueue import SPIQueue

class SPIStack( Component ):

  # Constructor

  def construct( s, pack_size, queue_entries):
    
    s.spi_minion = SPIMinion(pack_size)

    # Port-based interface

    s.sclk        = InPort ( 1  )
    s.cs          = InPort ( 1  )
    s.mosi        = InPort ( 1  )
    s.miso        = OutPort( 1  )
    
    # to device
    s.send_val    = OutPort( 1 )
    s.send_rdy    = InPort ( 1 )
    s.send_msg    = OutPort( pack_size )
    
    # from device
    s.recv_val    = InPort ( 1 )
    s.recv_rdy    = OutPort( 1 )
    s.recv_msg    = InPort ( pack_size )


    s.spi_minion.sclk         //= s.sclk
    s.spi_minion.cs           //= s.cs
    s.spi_minion.mosi         //= s.mosi
    s.spi_minion.miso         //= s.miso
    
    if queue_entries > 1:
      s.spi_queue = SPIQueue(pack_size, queue_entries)
      
      s.spi_minion.serve      //= s.spi_queue.serve
      s.spi_minion.seize      //= s.spi_queue.seize
      s.spi_queue.hard_msg    //= 0
      
      s.spi_queue.send_val    //= s.send_val
      s.spi_queue.send_rdy    //= s.send_rdy
      s.spi_queue.send_msg    //= s.send_msg
      
      s.spi_queue.recv_val    //= s.recv_val
      s.spi_queue.recv_rdy    //= s.recv_rdy
      s.spi_queue.recv_msg    //= s.recv_msg
      
      s.spi_queue.from_master //= s.spi_minion.to_device
      s.spi_queue.to_master   //= s.spi_minion.from_device     
      
      
    else:
      s.spi_minion.serve        //= s.send_val
      s.spi_minion.seize        //= s.recv_rdy
      
      s.spi_minion.to_device    //= s.send_msg
      s.spi_minion.from_device  //= s.recv_msg 
      
      



