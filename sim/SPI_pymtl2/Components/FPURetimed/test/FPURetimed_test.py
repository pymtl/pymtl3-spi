#=========================================================================
# SPIMinion_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..FPURetimed import FPURetimed


def test_basic( cmdline_opts ):

  # Create the model

  model = FPURetimed()

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function
  def t( req_rdy, req_val, req_msg, resp_rdy, resp_val, resp_msg):
    
    # Write input value to input port

    model.req_val     @= req_val
    model.req_msg     @= req_msg
    model.resp_rdy    @= resp_rdy
    
    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port

    if resp_val == 1:
      assert model.resp_msg == resp_msg


    # Tick simulator one cycle

    model.sim_tick()

 
  # req_rdy, req_val, req_msg,                            resp_rdy,  resp_val, resp_msg
  t(0b0,     0b1,     0x0000000000000000C07F3FFF8683F7FF, 0b0,       0b0,      0b0)
  t(0b0,     0b0,     0b0,                                0b0,       0b0,      0b0)
  t(0b0,     0b0,     0b0,                                0b0,       0b0,      0b0)
  t(0b0,     0b0,     0b0,                                0b0,       0b1,      0x00000000000000000000000007839504 )
  t(0b0,     0b0,     0b0,                                0b0,       0b0,      0b0)
  t(0b0,     0b0,     0b0,                                0b0,       0b0,      0b0)
  t(0b0,     0b0,     0b0,                                0b0,       0b0,      0b0)

  
