'''
==========================================================================
SPIPhysicalTestHarness_test.py
==========================================================================
Unit test for SPIPhysicalTestHarness.
'''
import random

# Fix the random seed so results are reproducible
random.seed(0xdeadbeef)

from pymtl3 import *
from pymtl3.stdlib.test_utils import config_model_with_cmdline_opts
from ..components.SPILoopbackComposite import SPILoopbackComposite
from ..components.SPIPhysicalTestHarness import SPIPhysicalTestHarness

port = "/dev/tty.usbserial-DO02C6P1"

def test_one( cmdline_opts ):

  nbits = 4
  model = SPILoopbackComposite((nbits+2))
  model.elaborate()

  spi_harness = SPIPhysicalTestHarness( model, 0, 6, port, cmdline_opts)


  msgs = [0xf]
  spi_harness.t_mult_msg(nbits, msgs, nbits, msgs)


def test_basic( cmdline_opts ):

  nbits = 32 #data size
  model = SPILoopbackComposite((nbits+2))
  model.elaborate()

  spi_harness = SPIPhysicalTestHarness( model, 0, 34, port, cmdline_opts)

  msgs = [0x00000000, 0x00000001, 0x10000000, 0x12345678, 0xffffffff]
  spi_harness.t_mult_msg(nbits, msgs, nbits, msgs)


def test_one_comp( cmdline_opts ):

  nbits = 32 #data size
  model = SPILoopbackComposite((nbits+2))
  model.elaborate()

  spi_harness = SPIPhysicalTestHarness( model, 1, 34, port, cmdline_opts)

  msgs = [0x00000000, 0x00000001, 0x10000000, 0x12345678, 0xffffffff]
  spi_harness.t_mult_msg(nbits, msgs, nbits, msgs)


def test_sim_multiple_components( cmdline_opts ):

  nbits = 4 #data size
  model = SPILoopbackComposite(10) #spi packet size (2 flow, 4 comp, 4 data)
  model.elaborate()

  spi_harness = SPIPhysicalTestHarness( model, 16, 10, port, cmdline_opts) #16 comp addresses, 10 bit spi packet
  msgs = [0x0, 0x1, 0x0, 0x8, 0xf]
  spi_harness.t_mult_msg(nbits, msgs, nbits, msgs, 5) #send to comp address 5


def test_random( cmdline_opts ):
  nbits = 32
  model = SPILoopbackComposite((nbits+2))
  model.elaborate()

  spi_harness = SPIPhysicalTestHarness( model, 0, 34, port, cmdline_opts)

  msgs = []
  for i in range(100):
    msg = b32( random.randint(0,0xffffffff) )
    msgs.append(msg)
  spi_harness.t_mult_msg(nbits, msgs, nbits, msgs)