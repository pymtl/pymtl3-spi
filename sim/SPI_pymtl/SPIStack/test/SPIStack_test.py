
from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPIStack import SPIStack

# In pytest, unit tests are simply functions that begin with a "test_"
# prefix. PyMTL3 is setup to collect command line options. Simply specify
# "cmdline_opts" as an argument to your unit test source code,
# and then you can dump VCD by adding --dump-vcd option to pytest
# invocation from the command line.

def test_basic( cmdline_opts ):

  # Create the model

  model = SPIStack(8,0)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function

  def t(cs, sclk, mosi, miso):
    
    # Write input value to input port

    model.sclk        @= sclk
    model.cs          @= cs
    model.mosi        @= mosi
    model.from_device @= from_device

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port
      
    if miso != '?':
      assert model.miso == miso

    # Tick simulator one cycle

    model.sim_tick()
  
  # serve seize  cs   sclk mosi miso  from_device  to_device  
  t(0b0,  '?'   ,0b1, 0b0, 0b0, '?' , 0x00,        '?') # cs high
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b1,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') # period before sclk toggle
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') 


  
  
