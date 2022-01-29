'''
==========================================================================
SPIMasterPRTL.py
==========================================================================
'''

from pymtl3 import *
from .ShiftReg import ShiftReg
from .SclkCounter import SclkCounter

from ..interfaces import PushInIfc, PullOutIfc

class SPIMasterPRTL( Component ):

  def construct( s, nbits=8 ):

    logBitsN = mk_bits(clog2(nbits)+1)

    # Local parameters
    s.nbits = nbits

    # Interface
    # TODO: SPI interface
    s.cs   = OutPort( )
    s.sclk = OutPort()
    s.mosi = OutPort()
    s.miso = InPort()

    s.push = PushInIfc( s.nbits )
    s.pull = PullOutIfc ( s.nbits )

    s.sclk_in = InPort()

    # Components & Logic
    s.prev_sclk_in = Wire(1)
    s.sclk_posedge = Wire(1)
    s.sclk_negedge = Wire(1) 

    @update_ff
    def up_sclk():
      if s.reset: s.prev_sclk_in <<= 0
      else: s.prev_sclk_in <<= s.sclk_in
    
    s.sclk_negedge //= lambda: s.prev_sclk_in & ~s.sclk_in
    s.sclk_posedge //= lambda: ~s.prev_sclk_in & s.sclk_in
    s.sclk //= s.prev_sclk_in

    s.shreg_in = m = ShiftReg( s.nbits )
    m.in_       //= s.miso
    m.shift_en  //= lambda: ~s.cs & s.sclk_posedge
    m.load_en   //= 0
    m.load_data //= 0

    s.shreg_out = m = ShiftReg( s.nbits )
    m.in_       //= 0
    m.shift_en  //= lambda: ~s.cs & s.sclk_negedge
    m.load_en   //= s.push.en
    m.load_data //= s.push.msg

    s.sclk_counter = m = SclkCounter( logBitsN, 0, s.nbits+1)
    m.start        //= lambda: s.push.en | s.pull.en
    m.sclk_posedge //= s.sclk_posedge

    s.mosi     //= s.shreg_out.out[s.nbits-1]
    s.cs       //= lambda: ~((s.sclk_counter.out > logBitsN(0)) & (s.sclk_counter.out < logBitsN(nbits+1)) )
    s.pull.msg //= s.shreg_in.out

  def line_trace( s ):
    return ''
