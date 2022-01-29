'''
==========================================================================
SclkCounter.py
==========================================================================
N-bit counter for use with an external clock. 
Reguires external clock edges as input.
'''

from pymtl3 import *

class SclkCounter( Component ):

  def construct( s, nbits=4, reset_value=0, max_count=8 ):

    # Local Parameters
    s.nbits = nbits
    s.reset_value = reset_value

    # Interface

    s.start         = InPort()
    s.out           = OutPort( s.nbits )
    s.sclk_posedge  = InPort()


    # Components
    s.start_reg = Wire(1)
    s.count     = Wire( s.nbits )


    @update_ff
    def up_count():
      if s.reset | (s.count==max_count): 
        s.count <<= s.reset_value
        s.start_reg <<= 0
      else: 
        if s.start: s.start_reg <<= 1
        else: s.start_reg <<= s.start_reg
        if s.start_reg & s.sclk_posedge: s.count <<= s.count+1
        else: s.count <<= s.count

    s.out //= s.count

  def line_trace( s ):
    return f'start_reg {s.start_reg} count {s.count}'