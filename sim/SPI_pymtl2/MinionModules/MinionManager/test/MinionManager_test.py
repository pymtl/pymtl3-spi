
from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..MinionManager import MinionManager

# In pytest, unit tests are simply functions that begin with a "test_"
# prefix. PyMTL3 is setup to collect command line options. Simply specify
# "cmdline_opts" as an argument to your unit test source code,
# and then you can dump VCD by adding --dump-vcd option to pytest
# invocation from the command line.

def test_basic( cmdline_opts ):

  # Create the model

  model = MinionManager(8,0,0,0)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  def t(cs, sclk, mosi, miso, send_val, send_rdy, send_msg, recv_val, recv_rdy, recv_msg):
    
    # Write input value to input port

    model.sclk        @= sclk
    model.cs          @= cs
    model.mosi        @= mosi

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port
      
    if miso != '?':
      assert model.miso == miso

    # Tick simulator one cycle

    model.sim_tick()
  
  # cs   sclk mosi miso  send_val, send_rdy, send_msg, recv_val, recv_rdy, recv_msg  
  t(0b1, 0b0, 0b0, '?' , 0x00,     '?',      '?',      '?',      '?',          '?') # cs high
  t(0b1, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?')
  t(0b1, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?')
  t(0b1, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?') 
  t(0b0, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?') # period before sclk toggle
  t(0b0, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?')
  t(0b0, 0b0, 0b0, 0b0 , 0x00,     '?',      '?',      '?',      '?',          '?') 


  
  
