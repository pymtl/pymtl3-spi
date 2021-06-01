
from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPIMaster import SPIMaster

# In pytest, unit tests are simply functions that begin with a "test_"
# prefix. PyMTL3 is setup to collect command line options. Simply specify
# "cmdline_opts" as an argument to your unit test source code,
# and then you can dump VCD by adding --dump-vcd option to pytest
# invocation from the command line.

def test_basic( cmdline_opts ):

  # Create the model

  model = SPIMaster(8,2)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function

  def t(req_val, req_rdy, req_msg, resp_val, resp_rdy, resp_msg, cs, sclk, mosi, miso):
    
    # Write input value to input port

    model.req_val   @= req_val
    model.req_msg   @= req_msg
    model.resp_rdy  @= resp_rdy
    model.miso      @= miso

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port

    if mosi != '?':
      assert model.mosi == mosi
    
    if sclk != '?':
      assert model.sclk == sclk


    # Tick simulator one cycle

    model.sim_tick()
  # req_val, req_rdy, req_msg, resp_val, resp_rdy, resp_msg, cs,  sclk, mosi, miso  
  t(0b0,     0b0,     0x0,     0b0,      0b0,      0b0,      0b0, 0b0,  0b0,  0b0)
  t(0b0,     0b0,     0x0,     0b0,      0b0,      0b0,      0b0, 0b0,  0b0,  0b0)
  t(0b1,     0b0,     0xAA,    0b0,      0b1,      0b0,      0b0, 0b0,  0b0,  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  0b1,  0b1) 
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1) # 1st sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1) # 2nd sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0) # 3rd sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)  
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0) # 4th sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1) # 5th sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1) # 6th sclk posedge 
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b1)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0) # 7th sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0) # 8th sclk posedge
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)  
  t(0b1,     0b0,     0xA1,    0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0) # note data line but we don't change state 
  t(0b0,     0b0,     0x0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0) # since havent stayed in cs for long enough
  t(0b0,     0b0,     0b0,     0b0,      0b1,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0x0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b1,     0b0,     0xA1,    0b0,      0b1,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)  
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b0,  '?',  0b0)
  t(0b0,     0b0,     0b0,     0b0,      0b0,      0b0,      0b0, 0b1,  '?',  0b0)
