#=========================================================================
# RegIncr_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..SPIMinion import SPIMinion


def test_basic( cmdline_opts ):

  # Create the model

  model = SPIMinion(8)

  # Configure the model

  model = config_model_with_cmdline_opts( model, cmdline_opts, duts=[] )

  # Create and reset simulator

  model.apply( DefaultPassGroup(linetrace=True) )
  model.sim_reset()

  # Helper function

  def t( serve, seize, cs, sclk, mosi, miso, from_device, to_device):
    
    # Write input value to input port

    model.sclk        @= sclk
    model.cs          @= cs
    model.mosi        @= mosi
    model.from_device @= from_device

    # Ensure that all combinational concurrent blocks are called

    model.sim_eval_combinational()

    # If reference output is not '?', verify value read from output port

    if to_device != '?':
      assert model.to_device == to_device
    
    if serve != '?':
      assert model.serve == serve
    
    if seize != '?':
      assert model.seize == seize
      
    if miso != '?':
      assert model.miso == miso

    # Tick simulator one cycle

    model.sim_tick()

  # ''' TUTORIAL TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''
  # This test script is incomplete. As part of the tutorial you will
  # insert a sequence of test cases that use the above helper function to
  # set the input and verify the output of the registered incrementer.
  # ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  
  # serve seize  cs   sclk mosi miso  from_device  to_device  
  t(0b0,  '?'   ,0b1, 0b0, 0b0, '?' , 0x00,        '?') # cs high
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b1,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') # period before sclk toggle
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b1   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') #note sclk toggles at quarter freq
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #1
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #2
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #3
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #4
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #5
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #6
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #7
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?') #8
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,       0xFF)# cs high
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,       0xFF)
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,       0xFF)
  t(0b1,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0xAA,       0xFF)#message back to master
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0xAA,       0xFF)
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0xAA,       0xFF)#drop cs
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0xAA,        '?')
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0xAA,        '?')
  t(0b0,  0b1   ,0b0, 0b1, 0b1, 0b0 , 0xAA,        '?') #1
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') #2
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b1 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') #3
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') #4
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b1 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') #5
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') #6
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b1, 0b1 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') #7
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b1, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b1 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') #8
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b1, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b0, 0b0, 0b0, 0b0 , 0x00,        '?')
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?') # pull cs high
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        '?') 
  t(0b0,  0b0   ,0b1, 0b0, 0b0, 0b0 , 0x00,        0xAA) 

  
  
