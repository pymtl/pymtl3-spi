'''
==========================================================================
SPIMasterRTL_test.py
==========================================================================
Unit test for SPIMasterRTL.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..components.SPIMasterRTL import SPIMasterRTL

def t( dut, sclk_in, push_en, push_msg, pull_en, pull_msg, cs, sclk, mosi, miso ):

  # Write input value to input port
  dut.sclk_in     @= sclk_in
  dut.push.en     @= push_en
  dut.push.msg    @= push_msg
  dut.pull.en     @= pull_en
  dut.miso        @= miso

  dut.sim_eval_combinational()

  if pull_msg != '?':
    assert dut.pull.msg == pull_msg

  if cs != '?':
    assert dut.cs == cs

  if sclk != '?':
    assert dut.sclk == sclk

  if mosi != '?':
    assert dut.mosi == mosi

  # Tick simulator one cycle
  dut.sim_tick()

def test_basic( cmdline_opts ):

  dut = SPIMasterRTL(4)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.push.en      @= 0
  dut.push.msg     @= 0
  dut.pull.en      @= 0
  dut.miso         @= 0
  dut.sclk_in      @= 0
  dut.sim_reset()

# Test vectors
  #        sclk_in, push_en, push_msg, pull_en, pull_msg, cs, sclk, mosi, miso
  #toggle sclk
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
      
#   #push message
  t(  dut,   0,        0,       0xA,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   0,        0,       0xA,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        1,       0xA,     0,       0x0,     1,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   0,    1,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   0,    0,    1 )
  t(  dut,   1,        0,       0x0,     0,       0x1,     0,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x1,     0,   1,    0,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x1,     0,   1,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x1,     0,   0,    1,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x1,     0,   0,    1,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x1,     0,   0,    1,    1 )
  t(  dut,   1,        0,       0x0,     0,       0x3,     0,   1,    1,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x3,     0,   1,    1,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x3,     0,   1,    1,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x3,     0,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x3,     0,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x3,     0,   0,    0,    1 )
  t(  dut,   1,        0,       0x0,     0,       0x7,     0,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x7,     0,   1,    0,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x7,     0,   1,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x7,     0,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x7,     0,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x7,     0,   0,    0,    1 )
  t(  dut,   1,        0,       0x0,     0,       0xF,     1,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0xF,     1,   1,    0,    0 )

def test_twobits( cmdline_opts ):

  dut = SPIMasterRTL(2)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.push.en      @= 0
  dut.push.msg     @= 0
  dut.pull.en      @= 0
  dut.miso         @= 0
  dut.sclk_in      @= 0
  dut.sim_reset()

# Test vectors
  #        sclk_in, push_en, push_msg, pull_en, pull_msg, cs, sclk, mosi, miso
  #toggle sclk
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   1,    0,    0 )
      
#   #push message
  t(  dut,   0,        0,       0x1,     0,       0x0,     1,   1,    0,    0 )
  t(  dut,   0,        0,       0x1,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   0,        1,       0x1,     0,       0x0,     1,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     1,   0,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    0,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   1,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    1,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    1,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   0,    1,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )

  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   1,    1,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    0,    0 )
  t(  dut,   0,        0,       0x0,     0,       0x0,     0,   0,    0,    0 )

  t(  dut,   1,        0,       0x0,     0,       0x0,     0,   0,    0,    1 )
  t(  dut,   1,        0,       0x0,     0,       0x1,     1,   1,    0,    0 )
  t(  dut,   1,        0,       0x0,     0,       0x1,     1,   1,    0,    0 )
