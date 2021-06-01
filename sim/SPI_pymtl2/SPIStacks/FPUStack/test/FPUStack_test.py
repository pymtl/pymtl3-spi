#=========================================================================
# LoopbackStack Test
#=========================================================================
import pytest
import random

from pymtl3                               import *
from pymtl3.stdlib.test_utils             import mk_test_case_table, run_sim  
from pymtl3.stdlib                        import stream
from ..FPUStack                           import FPUStack
from SPI_pymtl2.MasterModules.SPIMaster   import SPIMaster

#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, hard_bits, loopback, queue_size ):

    # Instantiate models

    s.src             = stream.SourceRTL( mk_bits(128) )
    s.sink            = stream.SinkRTL  ( mk_bits(128) )
    s.master          = SPIMaster       ( pack_size=128, clk_diff=4 )
    s.fpu_stack       = FPUStack        ( hard_bits, loopback, queue_size )

    # Interfaces    
    s.src.send            //= s.master.recv
    s.master.send         //= s.sink.recv
    s.master.master_inter //= s.fpu_stack.minion_inter

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + " > " + s.sink.line_trace()

#-------------------------------------------------------------------------
# Test Case: basic
#-------------------------------------------------------------------------

basic_msgs = [
   0x0000000000000000C07F3FFF8683F7FF, 0x00000000000000000000000000000000,
   0x000000003C072C850000000000000000, 0x00000000000000000000000007839504, 
   #0x00000000DF7EFFFF3E7F7F7F9EDE38F7, 0x0000000000000000000000003C072C85,
   #0x0000000000000000000000004F951295, 0x000000000000000000000000DF7EFFFF,
   #0x00000000C280004041E0000200000000, 0x00000000000000000000000000000000,
   #0x00000000BFFFFFCF000000004FFFDFF7, 0x000000000000000000000000C2800040,
   #0x0000000000000000015E834A00000000, 0x000000000000000000000000BFFFFFCF

   #0x0000000000000000015E834A00000000, 0x000000000000000000000000BFFFFFCF,
]


#-------------------------------------------------------------------------
# Test Case small
#-------------------------------------------------------------------------

test_case = mk_test_case_table([
  (               "msgs        src_delay  sink_delay"),
  [ "basic_0x0",  basic_msgs,  0,         0,         ],  
])


#-------------------------------------------------------------------------
# Test cases
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case )
def test_stack_8bit( test_params, cmdline_opts ):

  th = TestHarness(hard_bits=4, loopback=1, queue_size=4) # all 0s = no additional modules

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay,
    interval_delay=test_params.sink_delay )
  
  run_sim( th, cmdline_opts )
