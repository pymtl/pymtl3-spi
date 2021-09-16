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
    s.cs   = InPort ()
    s.sclk = InPort ()
    s.mosi = InPort ()
    s.miso = OutPort()

    s.push     = OutPort()
    s.push_msg = OutPort( s.nbits )
    s.pull     = OutPort()
    s.pull_msg = InPort ( s.nbits )

    # Components & Logic

    s.cs_sync = Synchronizer()
    s.cs_sync.sig_in //= s.cs

    s.sclk_sync = Synchronizer()
    s.sclk_sync.sig_in //= s.sclk

    s.mosi_sync = Synchronizer()
    s.mosi_sync.sig_in //= s.mosi

    s.shreg_in = ShiftReg( s.nbits )
    s.shreg_in.in_    //= s.mosi_sync.sig_synced
    s.shreg_shift_en  //= s.sclk_sync.sig_posedge & ~s.cs_sync.sig_synced
    s.shreg_load_en   //= 0
    s.shreg_load_data //= 0


    s.shreg_out = ShiftReg( s.nbits )
    s.shreg_out.in_       //= 0
    s.shreg_out.shift_en  //= lambda: s.sclk_sync.sig_negedge & ~s.cs_sync.sig_synced
    s.shreg_out.load_data //= s.pull_msg
    s.shreg_out.load_en   //= s.cs_sync.sig_negedge

    # TODO: register pull/push signal for one cycle?
    s.miso     //= s.shreg.out[s.nbits-1]
    s.pull     //= s.cs_sync.sig_negedge
    s.push     //= s.cs_sync.sig_posedge
    s.push_msg //= s.shreg_in.out


  def line_trace( s ):
    return ''
