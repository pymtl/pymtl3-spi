'''
==========================================================================
SPIMasterMinionComposite_test.py
==========================================================================
Test for SPI master-minion composite.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..components.SPIMasterMinionComposite import SPIMasterMinionComposite

def t( dut, sclk_in, ma_push_en, ma_push_msg, ma_pull_en, ma_pull_msg, mi_push_en, mi_push_msg, mi_pull_en, mi_pull_msg ):

  # Write input value to input port
  dut.sclk_in        @= sclk_in
  dut.ma_push.en     @= ma_push_en
  dut.ma_push.msg    @= ma_push_msg
  dut.ma_pull.en     @= ma_pull_en
  dut.mi_pull.msg    @= mi_pull_msg

  dut.sim_eval_combinational()

  if ma_pull_msg != '?':
    assert dut.ma_pull.msg == ma_pull_msg

  if mi_push_en != '?':
    assert dut.mi_push.en == mi_push_en

  if mi_push_msg != '?':
    assert dut.mi_push.msg == mi_push_msg

  if mi_pull_msg != '?':
    assert dut.mi_pull.msg == mi_pull_msg

  # Tick simulator one cycle
  dut.sim_tick()

def test_push( cmdline_opts ):

  dut = SPIMasterMinionComposite(4)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sclk_in        @= 0
  dut.ma_push.en     @= 0
  dut.ma_push.msg    @= 0
  dut.ma_pull.en     @= 0
  dut.mi_push.en     @= 0
  dut.mi_push.msg    @= 0
  dut.mi_pull.en     @= 0
  dut.sim_reset()

# Test vectors
  #        sclk_in, ma_push_en, ma_push_msg, ma_pull_en, ma_pull_msg, mi_push_en, mi_push_msg, mi_pull_en, mi_pull_msg
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        1,           0xA,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x1,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x2,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x5,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x0,          1,         0xA,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0xA,           0,       0x0 )
 
def test_pull( cmdline_opts ):

  dut = SPIMasterMinionComposite(4)
  dut = config_model_with_cmdline_opts( dut, cmdline_opts, duts=[] )
  dut.apply( DefaultPassGroup( linetrace=True ) )

  dut.sclk_in        @= 0
  dut.ma_push.en     @= 0
  dut.ma_push.msg    @= 0
  dut.ma_pull.en     @= 0
  dut.mi_push.en     @= 0
  dut.mi_push.msg    @= 0
  dut.mi_pull.en     @= 0
  dut.sim_reset()

# Test vectors
  #        sclk_in, ma_push_en, ma_push_msg, ma_pull_en, ma_pull_msg, mi_push_en, mi_push_msg, mi_pull_en, mi_pull_msg
  t(  dut,   0,        0,           0x0,         1,          0x0,          0,         0x0,           0,       0xA )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0xA )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0xA )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0xA )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0xA )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0xA )

  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           1,       0xA )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x0,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x1,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x2,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0x5,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )

  t(  dut,   0,        0,           0x0,         0,          0xA,          1,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
  t(  dut,   0,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
  t(  dut,   1,        0,           0x0,         0,          0xA,          0,         0x0,           0,       0x0 )
 