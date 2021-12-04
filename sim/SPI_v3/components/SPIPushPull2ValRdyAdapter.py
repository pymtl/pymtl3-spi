'''
==========================================================================
SPIPushPull2ValRdyAdapter.py
==========================================================================
An Adapter that converts push/pull interface from SPI to val/rdy interfaces. 

Author : Kyle Infantino
  Date : Nov 30, 2021

Message format

pull_msg
  nbits-1   nbits-2   nbits-2:0
------------------------------
| val_read | val_write | msg |
------------------------------

push_msg
  nbits-1   nbits-2   nbits-2:0
----------------------------
| val_msg | flow_bit | msg |
----------------------------
'''
from pymtl3 import *
from pymtl3.stdlib.queues.queues import NormalQueueRTL
from ..interfaces import PushInIfc, PullOutIfc

# @bitstruct
# class MisoMsg(nbits):
#   val: Bits32
#   space: Bits32
#   msg: 

# @bitstruct
# class MosiMsg(nbits):
#   val_wrt: Bits32
#   val_rd: Bits32
#   msg: 

class SPIPushPull2ValRdyAdapter( Component ):

  def construct( s, nbits=32, num_entries=2 ):
    s.nbits = nbits
    s.pull = PushInIfc( nbits ) #interfaces from perspective of SPIMinion
    s.push = PullOutIfc( nbits )

    s.recv_val = InPort()
    s.recv_rdy = OutPort()
    s.recv_msg = InPort(nbits-2)
    s.send_val = OutPort()
    s.send_rdy = InPort()
    s.send_msg = OutPort(nbits-2)

    s.mosiqueue = mc = NormalQueueRTL(nbits-2, num_entries) #TODO: change to have same cycle enq/deq
    mc.deq.rdy //= s.send_val
    mc.deq.ret //= s.send_msg
    mc.deq.en //= lambda: s.send_val & s.send_rdy
    s.mc_enq_en = Wire(1)
    mc.enq.en //= s.mc_enq_en
    mc.enq.msg //= s.pull.msg[0:nbits-2]


    s.misoqueue = cm = NormalQueueRTL(nbits-2, num_entries)
    cm.enq.en //= lambda: s.recv_val & cm.enq.rdy
    cm.enq.rdy //= s.recv_rdy
    cm.enq.msg //= s.recv_msg

    s.cm_deq_en = Wire(1)
    cm.deq.en //= s.cm_deq_en
    
    s.flow_bit = Wire(1)
    
    s.open_entries = Wire(1)

    @update
    def comb_block():
      s.open_entries @= mc.count < num_entries-1
      s.mc_enq_en @= mc.enq.rdy & s.pull.msg[nbits-2] & s.pull.en
      s.flow_bit @= mc.enq.rdy & (~mc.enq.en | s.open_entries)
      s.cm_deq_en @= cm.deq.rdy & s.pull.msg[nbits-1] & s.push.en & s.pull.en
      s.push.msg @= concat( s.cm_deq_en, s.flow_bit, cm.deq.ret )
      

  def line_trace( s ):
    mc = s.mosiqueue
    cm = s.misoqueue
    return f"mc_deq_en {mc.deq.en} mc_enq_en {mc.enq.en} mc_enq_rdy {mc.enq.rdy} mc_enq_msg {mc.enq.msg} cm_enq_en {cm.enq.en} cm_deq_en {cm.deq.en} cm_deq_rdy {cm.deq.rdy} mc_count {mc.count} cm_count {cm.count} val_write {s.pull.msg[s.nbits-2]} pull_en {s.pull.en} pull_msg {s.pull.msg}"
