'''
==========================================================================
Synchronizer.py
==========================================================================
 - RTL code for the Synchronizer module.
 - It samples the input signal using the device clock and also detects
     positive and negative edges.
 - Reference: https://www.fpga4fun.com/SPI2.html
'''

from pymtl3 import *


class Synchronizer( Component ):

  def construct( s ):

    # Interface

    s.sig_in     = InPort()

    s.sig_synced  = OutPort()
    s.sig_posedge = OutPort()
    s.sig_negedge = OutPort()

    # Components

    s.shreg = Wire( Bits3 )

    @update_ff
    def up_shreg():
      s.shreg <= concat( s.shreg[0:2], s.sig_in )

    s.sig_synced  //= s.shreg[1]
    s.sig_posedge //= lambda: ~s.shreg[2] & s.shreg[1]
    s.sig_negedge //= lambda: s.shreg[2]  & ~s.shreg[1]

  def line_trace( s ):
    return ''
