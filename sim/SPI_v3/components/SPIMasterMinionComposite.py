'''
==========================================================================
SPIMasterMinionComposite.py
==========================================================================
A composition module consisting of SPIMaster and SPIMinion modules.
For use with testing SPI communication with master and minion together

Author : Kyle Infantino
  Date : Jan 30, 2022

'''

from pymtl3 import *
from .SPIMasterPRTL import SPIMasterPRTL
from .SPIMinionPRTL import SPIMinionPRTL
from ..interfaces import PushInIfc, PullOutIfc
from ..interfaces import PushOutIfc, PullInIfc

class SPIMasterMinionComposite( Component ):

  def construct( s, nbits=32 ):

    s.nbits = nbits

    s.ma_push = PushInIfc ( s.nbits )
    s.ma_pull = PullOutIfc( s.nbits )
    s.sclk_in = InPort(1)
    

    s.mi_push = PushOutIfc( s.nbits )
    s.mi_pull = PullInIfc ( s.nbits )
      

    s.cs   = Wire(1)
    s.sclk = Wire(1)
    s.mosi = Wire(1)
    s.miso = Wire(1)

    s.master = ma = SPIMasterPRTL(s.nbits)
    ma.sclk_in //= s.sclk_in
    ma.cs   //= s.cs 
    ma.sclk //= s.sclk
    ma.miso //= s.miso
    ma.mosi //= s.mosi
    ma.push //= s.ma_push
    ma.pull //= s.ma_pull

    s.minion = mi = SPIMinionPRTL(s.nbits)
    mi.cs   //= s.cs 
    mi.sclk //= s.sclk
    mi.miso //= s.miso
    mi.mosi //= s.mosi
    mi.push //= s.mi_push
    mi.pull //= s.mi_pull


  def line_trace( s ):
      return f'sclk_in {s.sclk_in}, cs {s.cs}, sclk {s.sclk}, miso {s.miso}, mosi {s.mosi}, ma_shift_in_en {s.master.shreg_in.shift_en}'