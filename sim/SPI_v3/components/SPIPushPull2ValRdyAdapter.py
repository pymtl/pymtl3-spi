'''
==========================================================================
SPIPushPull2ValRdyAdapter.py
==========================================================================
An Adapter that converts push/pull interface from SPI to val/rdy interfaces. 

Author : Kyle Infantino
  Date : Nov 30, 2021

'''
from pymtl3 import *
from pymtl3.stdlib.queues.queues import NormalQueueRTL
from ..interfaces import PushInIfc, PullOutIfc
from pymtl3.stdlib.ifcs.send_recv_ifcs import RecvIfcRTL, SendIfcRTL

def mk_miso_msg(nbits):
  @bitstruct
  class MisoMsg:
    val: Bits1
    spc: Bits1
    data: mk_bits(nbits-2)
  return MisoMsg

def mk_mosi_msg(nbits):
  @bitstruct
  class MosiMsg:
    val_wrt: Bits1
    val_rd: Bits1
    data: mk_bits(nbits-2)
  return MosiMsg

class SPIPushPull2ValRdyAdapter( Component ):

  def construct( s, nbits=32, num_entries=2 ):
    s.nbits = nbits
    s.pull = PushInIfc( mk_mosi_msg(nbits) ) #interfaces from perspective of SPIMinion
    s.push = PullOutIfc( mk_miso_msg(nbits) )

    s.recv = RecvIfcRTL(nbits-2)
    s.send = SendIfcRTL(nbits-2)

    s.mc_enq_en = Wire(1) 
    s.cm_deq_en = Wire(1) 
    s.open_entries = Wire(1)

    s.mc_q = NormalQueueRTL(nbits-2, num_entries) # mc = master->chip (mosi) 
    s.mc_q.deq.rdy //= s.send.en
    s.mc_q.deq.ret //= s.send.msg
    s.mc_q.deq.en //= lambda: s.send.en & s.send.rdy
    s.mc_q.enq.en //= s.mc_enq_en
    s.mc_q.enq.msg //= s.pull.msg.data

    s.cm_q = NormalQueueRTL(nbits-2, num_entries) # cm = chip->master (miso) 
    s.cm_q.enq.en //= lambda: s.recv.en & s.cm_q.enq.rdy
    s.cm_q.enq.rdy //= s.recv.rdy
    s.cm_q.enq.msg //= s.recv.msg
    s.cm_q.deq.en //= s.cm_deq_en
    s.cm_q.deq.ret //= s.push.msg.data
 
    @update
    def comb_block():
      s.open_entries @= s.mc_q.count < num_entries-1
      s.mc_enq_en @= s.mc_q.enq.rdy & s.pull.msg.val_wrt & s.pull.en
      s.push.msg.spc @= s.mc_q.enq.rdy & (~s.mc_q.enq.en | s.open_entries)

      s.cm_deq_en @= s.cm_q.deq.rdy & s.pull.msg.val_rd & s.push.en & s.pull.en
      s.push.msg.val @= s.cm_deq_en
      
      

  def line_trace( s ):
    return f"mc_enq_en {s.mc_q.enq.en} mc_enq_rdy {s.mc_q.enq.rdy} mc_deq_en {s.mc_q.deq.en} cm_enq_en {s.cm_q.enq.en} cm_deq_en {s.cm_q.deq.en} cm_deq_rdy {s.cm_q.deq.rdy} mc_count {s.mc_q.count} cm_count {s.cm_q.count}"
