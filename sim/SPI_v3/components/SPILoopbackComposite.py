'''
==========================================================================
SPILoopbackComposite.py
==========================================================================
A composition module consisting of SPIMinionAdapterComposite and Loopback modules.
For use with testing SPI communication

Author : Kyle Infantino
  Date : Jan 30, 2022

'''

from pymtl3 import *
from .SPIMinionAdapterCompositePRTL import SPIMinionAdapterCompositePRTL
from .Loopback import Loopback

class SPILoopbackComposite( Component ):

  def construct( s, nbits=32 ):

    s.nbits = nbits

    s.cs   = InPort ()
    s.sclk = InPort ()
    s.mosi = InPort ()
    s.miso = OutPort()

    s.composite = m = SPIMinionAdapterCompositePRTL(s.nbits, 1)
    m.cs //= s.cs
    m.sclk //= s.sclk
    m.mosi //= s.mosi
    m.miso //= s.miso

    s.loopback = m = Loopback(s.nbits-2)
    m.recv //= s.composite.send
    m.send //= s.composite.recv

  def line_trace( s ):
      return ' '