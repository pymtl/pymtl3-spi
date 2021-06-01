#=========================================================================
# RegIncr_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPIQueue import SPIQueue

# In pytest, unit tests are simply functions that begin with a "test_"
# prefix. PyMTL3 is setup to collect command line options. Simply specify
# "cmdline_opts" as an argument to your unit test source code,
# and then you can dump VCD by adding --dump-vcd option to pytest
# invocation from the command line.

def test_basic( cmdline_opts ):

  # Create the model

  model = SPIQueue(8,4)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function

  def t( serve, seize, hard_msg, send_val, send_rdy, send_msg, recv_val, recv_rdy, recv_msg, from_master, to_master):

    
    # Write input value to input port

    model.serve       @= serve
    model.seize       @= seize
    model.hard_msg    @= hard_msg
    model.send_rdy    @= send_rdy
    model.recv_val    @= recv_val
    model.recv_msg    @= recv_msg
    model.from_master @= from_master

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port
    
    if send_val == 1:
      assert model.send_val == send_val
      assert model.send_msg == send_msg
      
    if to_master != '?' :
      assert model.to_master == to_master

    # Tick simulator one cycle

    model.sim_tick()

  # serve  seize  hard_msg  send_val  send_rdy  send_msg  recv_val  recv_rdy  recv_msg  from_master  to_master
  t(0b0,   0b0,   0b0,      '?',      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,        '?') # testing to device queue 
  t(0b0,   0b0,   0b0,      '?',      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,        '?')
  t(0b1,   0b0,   0b0,      '?',      0b0,      0x00,     0b0,      0b0,      0x00,     0x1A,        '?') # enqueue 1A
  t(0b0,   0b0,   0b0,      0b1,      0b0,      0x1A,     0b0,      0b0,      0x00,     0x00,        '?')
  t(0b0,   0b0,   0b0,      0b1,      0b0,      0x1A,     0b0,      0b0,      0x00,     0x00,        '?')
  t(0b1,   0b0,   0b0,      0b1,      0b0,      0x1A,     0b0,      0b0,      0x00,     0x2A,        '?') # enqueue 2A
  t(0b1,   0b0,   0b0,      0b1,      0b0,      0x1A,     0b0,      0b0,      0x00,     0x3A,        '?') # enqueue 3A
  t(0b0,   0b0,   0b0,      0b1,      0b1,      0x1A,     0b0,      0b0,      0x00,     0x00,        '?') # dequeue 1A
  t(0b0,   0b0,   0b0,      0b1,      0b0,      0x2A,     0b0,      0b0,      0x00,     0x00,        '?')
  t(0b0,   0b0,   0b0,      0b1,      0b1,      0x2A,     0b0,      0b0,      0x00,     0x00,        '?') # dequeue 2A
  t(0b0,   0b0,   0b0,      0b1,      0b1,      0x3A,     0b0,      0b0,      0x00,     0x00,        '?') # dequeue 3A
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,        '?')
                                                                                                    
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b1,      0b0,      0xA1,     0x00,        '?') # testing from device queue
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b1,      0b0,      0xA2,     0x00,       0xA1)
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b1,      0b0,      0xA3,     0x00,       0xA1)
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,       0xA1)
  t(0b0,   0b1,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,       0xA1)
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,       0xA2)
  t(0b0,   0b1,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,       0xA2)
  t(0b0,   0b1,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x00,       0xA3)
                                                                                                    
  t(0b1,   0b0,   0b1,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x11,       0x00) # ensure nothing is enqueued when hard_msg
  t(0b1,   0b0,   0b1,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0x22,       0x00)
  t(0b1,   0b0,   0b0,      0b0,      0b0,      0x00,     0b0,      0b0,      0x00,     0xAA,       0x00)
  t(0b0,   0b0,   0b0,      0b0,      0b0,      0xAA,     0b0,      0b0,      0x00,     0x00,       0x00)
  
  
  
  
  
  
  
  
  
