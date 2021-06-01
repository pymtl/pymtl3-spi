#=========================================================================
# SPIHardbits_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPIHardbits import SPIHardbits

def test_basic( cmdline_opts ):

  # Create the model

  model = SPIHardbits(8,4)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()


  # Helper function
  def t( serve, hard_msg, from_master, to_master, detected_bits, from_device, to_device):
        
    # Write input value to input port

    model.serve       @= serve
    model.from_master @= from_master
    model.from_device @= from_device

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port

    if to_device != '?':
      assert model.to_device == to_device
    
    if detected_bits != '?':
      assert model.detected_bits == detected_bits
      
    if to_master != '?':
      assert model.to_master == to_master 
  

    # Tick simulator one cycle

    model.sim_tick()

  
  # serve hard_msg from_master to_master detected_bits from_device to device  
  t(0b0,  0b0,     0b0,        '?',      '?',           0b0,       '?')
  t(0b1,  0b0,     0x08,       0xAA,       0,          0xAA,       '?')
  t(0b1,  0b0,     0x80,       0x12,     0x0,          0x12,       '?')
  t(0b1,  0b0,     0xFF,       0b0,      0x0,          0b0 ,       '?')
  t(0b0,  0b0,     0b0,        0b0,      0xF,          0b0 ,       '?')
  t(0b1,  0b0,     0x90,       0b0,      0xF,          0b0 ,       '?')
  t(0b1,  0b0,     0x88,       0b0,      0x2,          0b0 ,       0x88)
  t(0b0,  0b1,     0xCD,       0b0,      0x1,          0b0 ,       0xCD)
