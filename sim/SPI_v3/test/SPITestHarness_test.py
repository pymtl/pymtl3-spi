'''
==========================================================================
SPITestHarness_test.py
==========================================================================
Unit test for SPITestHarness.
'''

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts

from ..components.SPILoopbackComposite import SPILoopbackComposite
from ..components.SPITestHarness import SPITestHarness


def test_basic( cmdline_opts ):

  dut = SPILoopbackComposite( 6 )
  harness = SPITestHarness(dut, 4, 6, cmdline_opts)

  req_list = []
  resp_list = []

  req_list.append( 0xA )
  req_list.append( 0xB )
  req_list.append( 0xC )
  req_list.append( 0xD )


  resp_list.append( 0xA )
  resp_list.append( 0xB )
  resp_list.append( 0xC )
  resp_list.append( 0xD )
  
  harness.t_mult_msg( 4, 4, req_list, resp_list, 3 )