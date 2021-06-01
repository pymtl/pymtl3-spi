"""
=========================================================================
SPI interface
=========================================================================
CS, SCLK, MOSI, MISO interface

Author : Kenneth Mao

"""
from pymtl3 import *


class MinionInterface( Interface ):
  
  def construct(s):
    
    s.cs    = InPort ( 1 )
    s.sclk  = InPort ( 1 )
    s.mosi  = InPort ( 1 )
    s.miso  = OutPort( 1 )


class MasterInterface( Interface ):
  
  def construct(s):

    s.cs    = OutPort( 1 ) 
    s.sclk  = OutPort( 1 )
    s.mosi  = OutPort( 1 )
    s.miso  = InPort ( 1 )


