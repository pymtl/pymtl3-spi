from pymtl3 import *
from ..SPIMinion   import SPIMinion
from ..SPIHardbits import SPIHardbits
from ..SPILoopback import SPILoopback
from ..SPIQueue    import SPIQueue

class MinionManager( Component ):

  # Constructor

  def construct( s, pack_size, hard_bits, loopback, queue_entries): #add flow control parameter 
    
    s.spi_minion = SPIMinion(pack_size)

    # Port-based interface

    s.sclk        = InPort ( 1 )
    s.cs          = InPort ( 1 )
    s.mosi        = InPort ( 1 )
    s.miso        = OutPort( 1 )
    
    # to device
    s.send_val    = OutPort( 1 )
    s.send_rdy    = InPort ( 1 )
    s.send_msg    = OutPort( pack_size )
    
    # from device
    s.recv_val    = InPort ( 1 )
    s.recv_rdy    = OutPort( 1 )
    s.recv_msg    = InPort ( pack_size )

    # SPI interface
    s.spi_minion.sclk         //= s.sclk
    s.spi_minion.cs           //= s.cs
    s.spi_minion.mosi         //= s.mosi
    s.spi_minion.miso         //= s.miso

  
    if (hard_bits >= 1 and loopback == 1 and queue_entries >= 1):
      #hardbits
      s.hard_bits    = OutPort(hard_bits)         # need port for hardbits
      s.spi_hardbits = SPIHardbits(pack_size, hard_bits)
      
      s.spi_hardbits.serve          //= s.spi_minion.serve 
      s.spi_hardbits.from_master    //= s.spi_minion.to_device  
      s.spi_hardbits.to_master      //= s.spi_minion.from_device
      s.spi_hardbits.detected_bits  //= s.hard_bits
      
      #loopback
      s.spi_loopback = SPILoopback(pack_size)
      
      s.spi_loopback.serve          //= s.spi_minion.serve
      s.spi_loopback.loop_en        //= s.hard_bits[hard_bits - 1]
      s.spi_loopback.from_master    //= s.spi_hardbits.to_device
      s.spi_loopback.to_master      //= s.spi_hardbits.from_device

      #queue
      s.spi_queue = SPIQueue(pack_size, queue_entries)
      
      s.spi_queue.serve       //= s.spi_minion.serve 
      s.spi_queue.seize       //= s.spi_minion.seize   
      s.spi_queue.hard_msg    //= s.spi_hardbits.hard_msg

      s.spi_queue.from_master //= s.spi_loopback.to_device 
      s.spi_queue.to_master   //= s.spi_loopback.from_device
      
      s.spi_queue.send_val    //= s.send_val
      s.spi_queue.send_rdy    //= s.send_rdy
      s.spi_queue.send_msg    //= s.send_msg
      
      s.spi_queue.recv_val    //= s.recv_val
      s.spi_queue.recv_rdy    //= s.recv_rdy
      s.spi_queue.recv_msg    //= s.recv_msg

    elif (hard_bits >= 1 and loopback == 1 and queue_entries < 1):
      #hardbits
      s.hard_bits    = OutPort(hard_bits)                         
      s.spi_hardbits = SPIHardbits(pack_size, hard_bits)
      
      s.spi_hardbits.serve          //= s.spi_minion.serve 
      s.spi_hardbits.from_master    //= s.spi_minion.to_device  
      s.spi_hardbits.to_master      //= s.spi_minion.from_device
      s.spi_hardbits.detected_bits  //= s.hard_bits
      
      #loopback
      s.spi_loopback = SPILoopback(pack_size)
      
      s.spi_loopback.serve          //= s.spi_minion.serve
      s.spi_loopback.loop_en        //= s.hard_bits[hard_bits - 1]
      s.spi_loopback.from_master    //= s.spi_hardbits.to_device
      s.spi_loopback.to_master      //= s.spi_hardbits.from_device
      s.spi_loopback.to_device      //= s.send_msg
      s.spi_loopback.from_device    //= s.recv_msg 
      
      s.spi_minion.serve            //= s.send_val
      s.spi_minion.seize            //= s.recv_rdy

    elif (hard_bits >= 1 and loopback == 0 and queue_entries >= 1):
      #hardbits
      s.hard_bits    = OutPort(hard_bits)         # need port for hardbits
      s.spi_hardbits = SPIHardbits(pack_size, hard_bits)
      
      s.spi_hardbits.serve          //= s.spi_minion.serve 
      s.spi_hardbits.from_master    //= s.spi_minion.to_device  
      s.spi_hardbits.to_master      //= s.spi_minion.from_device
      s.spi_hardbits.detected_bits  //= s.hard_bits

      #queue
      s.spi_queue = SPIQueue(pack_size, queue_entries)
      
      s.spi_queue.serve       //= s.spi_minion.serve 
      s.spi_queue.seize       //= s.spi_minion.seize   
      s.spi_queue.hard_msg    //= s.spi_hardbits.hard_msg

      s.spi_queue.from_master //= s.spi_hardbits.to_device 
      s.spi_queue.to_master   //= s.spi_hardbits.from_device
      
      s.spi_queue.send_val    //= s.send_val
      s.spi_queue.send_rdy    //= s.send_rdy
      s.spi_queue.send_msg    //= s.send_msg
      
      s.spi_queue.recv_val    //= s.recv_val
      s.spi_queue.recv_rdy    //= s.recv_rdy
      s.spi_queue.recv_msg    //= s.recv_msg

    elif (hard_bits >= 1 and loopback == 0 and queue_entries < 1):
      #hardbits
      s.hard_bits    = OutPort(hard_bits)         # need port for hardbits
      s.spi_hardbits = SPIHardbits(pack_size, hard_bits)
      
      s.spi_hardbits.serve          //= s.spi_minion.serve 
      s.spi_hardbits.from_master    //= s.spi_minion.to_device  
      s.spi_hardbits.to_master      //= s.spi_minion.from_device
      s.spi_hardbits.detected_bits  //= s.hard_bits

      s.spi_minion.serve            //= s.send_val
      s.spi_minion.seize            //= s.recv_rdy
      
      s.spi_hardbits.to_device      //= s.send_msg
      s.spi_hardbits.from_device    //= s.recv_msg 

    elif queue_entries >= 1:  #no hardbits or loopback
      s.spi_queue = SPIQueue(pack_size, queue_entries)

      s.spi_queue.from_master //= s.spi_minion.to_device
      s.spi_queue.to_master   //= s.spi_minion.from_device  
      
      s.spi_minion.serve      //= s.spi_queue.serve
      s.spi_minion.seize      //= s.spi_queue.seize
      s.spi_queue.hard_msg    //= 0
      
      s.spi_queue.send_val    //= s.send_val
      s.spi_queue.send_rdy    //= s.send_rdy
      s.spi_queue.send_msg    //= s.send_msg
      
      s.spi_queue.recv_val    //= s.recv_val
      s.spi_queue.recv_rdy    //= s.recv_rdy
      s.spi_queue.recv_msg    //= s.recv_msg

    else: #just minion no other modules
      s.spi_minion.serve        //= s.send_val
      s.spi_minion.seize        //= s.recv_rdy
      
      s.spi_minion.to_device    //= s.send_msg
      s.spi_minion.from_device  //= s.recv_msg 
      
      



