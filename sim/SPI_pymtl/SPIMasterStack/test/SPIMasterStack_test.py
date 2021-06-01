#=========================================================================
# Master Stack Test
#=========================================================================
import pytest
import random

from pymtl3 import *
from pymtl3.stdlib.test_utils import mk_test_case_table, run_sim  

from pymtl3.stdlib import stream

from ..SPIMasterStack import SPIMasterStack


#-------------------------------------------------------------------------
# TestHarness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, pack_size ):

    # Instantiate models

    s.src          = stream.SourceRTL( mk_bits(pack_size) )
    s.sink         = stream.SinkRTL  ( mk_bits(pack_size) )
    s.master_stack = SPIMasterStack  ( pack_size )

    # Connect
    
    s.src.send.val //= s.master_stack.req_val
    s.src.send.rdy //= s.master_stack.req_rdy
    s.src.send.msg //= s.master_stack.req_msg
    
    s.sink.recv.val //= s.master_stack.resp_val
    s.sink.recv.rdy //= s.master_stack.resp_rdy
    s.sink.recv.msg //= s.master_stack.resp_msg
    

  def done( s ):
    return s.src.done() and s.sink.done()

  def line_trace( s ):
    return s.src.line_trace() + " > " + " > " + s.sink.line_trace()

#-------------------------------------------------------------------------
# Test Case: basic
#-------------------------------------------------------------------------

basic_msgs = [
   5, 0 ,
   1, 5 , 
   4, 1 ,
   8, 4 ,
   0, 8 ,
]

#-------------------------------------------------------------------------
# Test Case: larger
#-------------------------------------------------------------------------

larger_msgs = [
   125, 0 ,
   420, 125 , 
   18 , 420 ,
   88 , 18 ,
   0,   88 ,
]

#-------------------------------------------------------------------------
# Test Case small
#-------------------------------------------------------------------------

test_case_8bits = mk_test_case_table([
  (               "msgs        src_delay  sink_delay"),
  [ "basic_0x0",  basic_msgs,  0,         0,         ],
  [ "basic_1x5",  basic_msgs,  1,         5,         ],
  [ "basic_3x1",  basic_msgs,  3,         1,         ],
  [ "basic_8x8",  basic_msgs,  8,         8,         ],
  [ "basic_7x7",  basic_msgs,  7,         7,         ],
  
])


#-------------------------------------------------------------------------
# Test Case large
#-------------------------------------------------------------------------

test_case_12bits = mk_test_case_table([
  (               "msgs          src_delay  sink_delay"),
  [ "larger_0x0",  larger_msgs,  0,         0,         ],
  [ "larger_1x5",  larger_msgs,  1,         5,         ],
  [ "larger_3x1",  larger_msgs,  3,         1,         ],
  [ "larger_8x8",  larger_msgs,  8,         8,         ],
  [ "larger_7x7",  larger_msgs,  7,         7,         ],
  
])
#-------------------------------------------------------------------------
# Test cases
#-------------------------------------------------------------------------

@pytest.mark.parametrize( **test_case_8bits )
def test_stack_8bit( test_params, cmdline_opts ):

  th = TestHarness(8)

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay,
    interval_delay=test_params.sink_delay )
  
  run_sim( th, cmdline_opts )


@pytest.mark.parametrize( **test_case_12bits )
def test_stack_12bit( test_params, cmdline_opts ):

  th = TestHarness(12)

  th.set_param("top.src.construct",
    msgs=test_params.msgs[::2],
    initial_delay=test_params.src_delay,
    interval_delay=test_params.src_delay )

  th.set_param("top.sink.construct",
    msgs=test_params.msgs[1::2],
    initial_delay=test_params.sink_delay,
    interval_delay=test_params.sink_delay )
  
  run_sim( th, cmdline_opts )



