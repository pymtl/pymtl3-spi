'''
==========================================================================
SPIMinion.py
==========================================================================
'''

from pymtl3 import *
from .Synchronizer import Synchronizer
from .ShiftReg import ShiftReg

from ..interfaces import PushOutIfc, PullInIfc

class SPIMinion( Component ):

  def construct( s, nbits=8 ):

    # Local parameters
    s.nbits = nbits

    # Interface
    # TODO: SPI interface
    s.cs   = InPort ()
    s.sclk = InPort ()
    s.mosi = InPort ()
    s.miso = OutPort()

    s.push = PushOutIfc( s.nbits )
    s.pull = PullInIfc ( s.nbits )

    # Components & Logic

    # TODO: rename Synchronizer
    s.cs_sync = Synchronizer()
    s.cs_sync.in_ //= s.cs

    s.sclk_sync = Synchronizer()
    s.sclk_sync.in_ //= s.sclk

    s.mosi_sync = Synchronizer()
    s.mosi_sync.in_ //= s.mosi

    # Add Comments
    s.shreg_in = m = ShiftReg( s.nbits )
    m.in_       //= s.mosi_sync.out
    m.shift_en  //= lambda: ~s.cs_sync.out & s.sclk_sync.posedge_
    m.load_en   //= 0
    m.load_data //= 0

    s.shreg_out = m = ShiftReg( s.nbits )
    m.in_       //= 0
    m.shift_en  //= lambda: ~s.cs_sync.out & s.sclk_sync.negedge_
    m.load_en   //= s.pull.en
    m.load_data //= s.pull.msg

    # TODO: register pull/push signal for one cycle?
    # TODO: force pull/push to 0 during reset?
    s.miso     //= s.shreg_out.out[s.nbits-1]
    s.pull.en  //= s.cs_sync.negedge_
    s.push.en  //= s.cs_sync.posedge_
    s.push.msg //= s.shreg_in.out

  def line_trace( s ):

    pull_msg = f'{s.pull}'
    push_msg = f'{s.push}'

    high = '@'
    low  = '.'
    cs   = high if s.cs   else low
    sclk = high if s.sclk else low

    in_bit  = f'{s.shreg_in.in_}' if s.shreg_in.shift_en else ' '

    return f'{cs} {sclk}   {s.mosi} {pull_msg} ({in_bit}) {s.miso} {push_msg}'
