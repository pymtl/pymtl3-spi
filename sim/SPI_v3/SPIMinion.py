'''
==========================================================================
SPIMinion.py
==========================================================================
'''

from pymtl3 import *
from .Synchronizer import Synchronizer
from .ShiftReg import ShiftReg

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

    # TODO: rename? push_en pull_en
    s.push     = OutPort()
    s.push_msg = OutPort( s.nbits )
    s.pull     = OutPort()
    s.pull_msg = InPort ( s.nbits )

    # Components & Logic

    # TODO: rename Synchronizer
    s.cs_sync = Synchronizer()
    s.cs_sync.sig_in //= s.cs

    s.sclk_sync = Synchronizer()
    s.sclk_sync.sig_in //= s.sclk

    s.mosi_sync = Synchronizer()
    s.mosi_sync.sig_in //= s.mosi

    # TODO: sig_posedge -> posedge_ sig_synced -> out
    # Add Comments
    s.shreg_in = ShiftReg( s.nbits )
    s.shreg_in.in_       //= s.mosi_sync.sig_synced
    s.shreg_in.shift_en  //= lambda: ~s.cs_sync.sig_synced & s.sclk_sync.sig_posedge
    s.shreg_in.load_en   //= 0
    s.shreg_in.load_data //= 0

    s.shreg_out = ShiftReg( s.nbits )
    s.shreg_out.in_       //= 0
    s.shreg_out.shift_en  //= lambda: ~s.cs_sync.sig_synced & s.sclk_sync.sig_negedge
    s.shreg_out.load_en   //= s.pull
    s.shreg_out.load_data //= s.pull_msg

    # TODO: register pull/push signal for one cycle?
    # TODO: force pull/push to 0 during reset?
    s.miso     //= s.shreg_out.out[s.nbits-1]
    s.pull     //= s.cs_sync.sig_negedge
    s.push     //= s.cs_sync.sig_posedge
    s.push_msg //= s.shreg_in.out

  def line_trace( s ):
    if not hasattr( s, 'msg_trace_len' ):
      s.msg_trace_len = len( f'{s.push_msg}' )

    pull_msg = f'{s.pull_msg}' if s.pull else ' '*s.msg_trace_len
    push_msg = f'{s.push_msg}' if s.push else ' '*s.msg_trace_len

    high = '@'
    low  = '.'
    cs   = high if s.cs   else low
    sclk = high if s.sclk else low

    in_bit  = f'{s.shreg_in.in_}' if s.shreg_in.shift_en else ' '

    return f'{cs} {sclk}   {s.mosi} {pull_msg} ({in_bit}) {s.miso} {push_msg}'
