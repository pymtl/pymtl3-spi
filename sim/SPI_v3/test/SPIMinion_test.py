'''
==========================================================================
SPIMinion_test.py
==========================================================================
Unit test for SPIMinion.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..components.SPIMinionRTL import SPIMinionRTL

def test_basic( cmdline_opts ):

  dut = SPIMinionRTL(8)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.cs          @= 1
  dut.sclk        @= 0
  dut.mosi        @= 0
  dut.pull.msg    @= 0
  dut.sim_reset()

  # Helper function
  def t( pull, push, cs, sclk, mosi, miso, pull_msg, push_msg ):

    # Write input value to input port
    dut.sclk        @= sclk
    dut.cs          @= cs
    dut.mosi        @= mosi
    dut.pull.msg    @= pull_msg

    dut.sim_eval_combinational()

    if push_msg != '?':
      assert dut.push.msg == push_msg

    if push != '?':
      assert dut.push.en == push

    if pull != '?':
      assert dut.pull.en == pull

    if miso != '?':
      assert dut.miso == miso

    # Tick simulator one cycle
    dut.sim_tick()

  # Test vectors
  # pull push   cs    sclk mosi miso pull_msg push_msg
  t(   0,  0,   1,    0,   0,   0,   0x00,        '?' ) # cs high
  t(   0,  0,   1,    0,   0,   0,   0x00,        '?' )
  t(   0,  0,   1,    0,   0,   0,   0x00,        '?' )
  t(   0,  0,   1,    0,   0,   0,   0x00,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0x00,        '?' ) # period before sclk toggle
  # 0
  t(   0,  0,   0,    0,   0,   0,   0x00,        '?' )
  t(   1,  0,   0,    0,   0,   0,   0xAA,        '?' )
  t(   0,  0,   0,    0,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  # 1
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  # 2
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  # 3
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  # 4
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  # 5
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  # 6
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  t(   0,  0,   0,    1,   1,   1,   0xBB,        '?' )
  # 7
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   1,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    1,   0,   0,   0xBB,        '?' )
  # 9
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   0,    0,   0,   0,   0xBB,        '?' )
  # cs high
  t(   0,  0,   1,    0,   0,   0,   0xBB,        '?' )
  t(   0,  0,   1,    0,   0,   0,   0xBB,        '?' )
  t(   0,  1,   1,    0,   0,   0,   0xBB,        0xAA)
  t(   0,  0,   1,    0,   0,   0,   0xBB,        '?' )

