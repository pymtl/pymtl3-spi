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

    s.recv_val = InPort()
    s.recv_rdy = OutPort()
    s.recv_msg = InPort(nbits-2)
    s.send_val = OutPort()
    s.send_rdy = InPort()
    s.send_msg = OutPort(nbits-2)

    s.mosiqueue = mc = NormalQueueRTL(nbits-2, num_entries)
    mc.deq.rdy //= s.send_val
    mc.deq.ret //= s.send_msg
    mc.deq.en //= lambda: s.send_val & s.send_rdy
    s.mc_enq_en = Wire(1)
    mc.enq.en //= s.mc_enq_en
    mc.enq.msg //= s.pull.msg.data


    s.misoqueue = cm = NormalQueueRTL(nbits-2, num_entries)
    cm.enq.en //= lambda: s.recv_val & cm.enq.rdy
    cm.enq.rdy //= s.recv_rdy
    cm.enq.msg //= s.recv_msg

    s.cm_deq_en = Wire(1)
    cm.deq.en //= s.cm_deq_en

    s.push.msg.data //= cm.deq.ret
    
    s.flow_bit = Wire(1)
    
    s.open_entries = Wire(1)

    @update
    def comb_block():
      s.open_entries @= mc.count < num_entries-1
      s.mc_enq_en @= mc.enq.rdy & s.pull.msg.val_wrt & s.pull.en
      s.flow_bit @= mc.enq.rdy & (~mc.enq.en | s.open_entries)
      s.cm_deq_en @= cm.deq.rdy & s.pull.msg.val_rd & s.push.en & s.pull.en
      s.push.msg.val @= s.cm_deq_en
      s.push.msg.spc @= s.flow_bit
      

  def line_trace( s ):
    mc = s.mosiqueue
    cm = s.misoqueue
    return f"mc_enq_en {mc.enq.en} mc_enq_rdy {mc.enq.rdy} mc_deq_en {mc.deq.en} cm_enq_en {cm.enq.en} cm_deq_en {cm.deq.en} cm_deq_rdy {cm.deq.rdy} mc_count {mc.count} cm_count {cm.count}"
