'''
==========================================================================
SclkCountdownPRTL.py
==========================================================================
N-bit countdown module for generating an Sclk signal. 

Author : Kyle Infantino
  Date : April 26, 2022
'''

from pymtl3 import *

class SclkCountdownPRTL( Component ):

  def construct( s, nbits=4  ):

    # Local Parameters
    s.nbits = nbits

    # Interface

    s.start         = InPort()
    s.start_value   = InPort( s.nbits ) 
    s.countdown     = OutPort( s.nbits )
    s.sclk_posedge       = OutPort()
    s.sclk_negedge       = OutPort()
    s.sclk          = OutPort()


    # Components
    s.count = Wire( s.nbits )
    s.next_sclk = Wire(1)

    @update_ff
    def up_count():
      if s.reset: s.count <<= 0
      elif s.start: s.count <<= s.start_value
      elif s.sclk_posedge: s.count <<= s.count - 1

    @update_ff
    def up_sclk():
      if s.reset:
        s.sclk <<= 1
        s.next_sclk <<= ~s.start
      else:
        s.sclk <<= s.next_sclk
        s.next_sclk <<= ~s.next_sclk if ((s.count > 1) | s.start | ((s.count == 1) & ~s.next_sclk )) else s.next_sclk

    s.sclk_posedge //= lambda: ~s.sclk & s.next_sclk
    s.sclk_negedge //= lambda: s.sclk & ~s.next_sclk

    s.countdown //= s.count

  def line_trace( s ):
    return f'start_reg {s.start_reg} count {s.count}'