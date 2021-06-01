#=========================================================================
# SPIMinion_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPILoopback import SPILoopback


def test_basic( cmdline_opts ):

  # Create the model

  model = SPILoopback(8)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function
  
  def t( serve, loop_en, from_master, to_master, from_device, to_device):
    
    # Write input value to input port

    model.serve       @= serve
    model.loop_en     @= loop_en
    model.from_master @= from_master
    model.from_device @= from_device

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port

    if to_device != '?':
      assert model.to_device == to_device
            
    if to_master != '?':
      assert model.to_master == to_master 

    # Tick simulator one cycle

    model.sim_tick()

 
  # serve loop_en  from_master  to_master from_device  to_device  
  t(0b0,  0b0,     0b0,         0b0,      0b0,         '?' ) # cs high
  t(0b0,  0b0,     0b0,         0b0,      0b0,         0b0 )
  t(0b0,  0b0,     0b0,         0b0,      0b0,         0b0 )


  
  
