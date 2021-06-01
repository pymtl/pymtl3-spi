
#=========================================================================
# VSPIMinion__pack_size_128_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# SPIMinion__pack_size_128
#-------------------------------------------------------------------------

class SPIMinion__pack_size_128( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * cs;        
        unsigned int * from_device;        
        unsigned char * miso;        
        unsigned char * mosi;        
        unsigned char * reset;        
        unsigned char * sclk;        
        unsigned char * seize;        
        unsigned char * serve;        
        unsigned int * to_device;

        // Verilator model
        void * model;

      } VSPIMinion__pack_size_128_t;

      VSPIMinion__pack_size_128_t * create_model( const char * );
      void destroy_model( VSPIMinion__pack_size_128_t *);
      void comb_eval( VSPIMinion__pack_size_128_t * );
      void seq_eval( VSPIMinion__pack_size_128_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libSPIMinion__pack_size_128_v.so', os.path.getmtime( './libSPIMinion__pack_size_128_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libSPIMinion__pack_size_128_v.so')

    # increment instance count
    SPIMinion__pack_size_128.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 1:
      if True:
        verilator_vcd_file = "SPI_pymtl2.SPIStacks.FPUStack.test.FPUStack_test__test_stack_8bit_basic_0x0_top_fpu_stack_spi_stack_spi_minion.verilator1.vcd"
      else:
        verilator_vcd_file = "SPIMinion__pack_size_128.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.cs = InPort( Bits1 )
    s.from_device = InPort( Bits128 )
    s.miso = OutPort( Bits1 )
    s.mosi = InPort( Bits1 )
    s.sclk = InPort( Bits1 )
    s.seize = OutPort( Bits1 )
    s.serve = OutPort( Bits1 )
    s.to_device = OutPort( Bits128 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_cs = Wire( Bits1 )
    @update
    def isignal_s_DOT_cs():
      s.s_DOT_cs @= s.cs
    
    s.s_DOT_from_device = Wire( Bits128 )
    @update
    def isignal_s_DOT_from_device():
      s.s_DOT_from_device @= s.from_device
    
    s.s_DOT_mosi = Wire( Bits1 )
    @update
    def isignal_s_DOT_mosi():
      s.s_DOT_mosi @= s.mosi
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_sclk = Wire( Bits1 )
    @update
    def isignal_s_DOT_sclk():
      s.s_DOT_sclk @= s.sclk
    
    s.s_DOT_miso = Wire( Bits1 )
    @update
    def osignal_s_DOT_miso():
      s.miso @= s.s_DOT_miso
    
    s.s_DOT_seize = Wire( Bits1 )
    @update
    def osignal_s_DOT_seize():
      s.seize @= s.s_DOT_seize
    
    s.s_DOT_serve = Wire( Bits1 )
    @update
    def osignal_s_DOT_serve():
      s.serve @= s.s_DOT_serve
    
    s.s_DOT_to_device = Wire( Bits128 )
    @update
    def osignal_s_DOT_to_device():
      s.to_device @= s.s_DOT_to_device

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.cs[0] = int(s.s_DOT_cs)
      
      x = _ffi_m.from_device
      x[0] = int(s.s_DOT_from_device[0:32])
      x[1] = int(s.s_DOT_from_device[32:64])
      x[2] = int(s.s_DOT_from_device[64:96])
      x[3] = int(s.s_DOT_from_device[96:128])
      
      _ffi_m.mosi[0] = int(s.s_DOT_mosi)
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.sclk[0] = int(s.s_DOT_sclk)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_miso @= _ffi_m.miso[0]
      
      s.s_DOT_seize @= _ffi_m.seize[0]
      
      s.s_DOT_serve @= _ffi_m.serve[0]
      
      x = _ffi_m.to_device
      s.s_DOT_to_device[0:32] @= x[0]
      s.s_DOT_to_device[32:64] @= x[1]
      s.s_DOT_to_device[64:96] @= x[2]
      s.s_DOT_to_device[96:128] @= x[3]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, cs={s.cs}, from_device={s.from_device}, miso={s.miso}, mosi={s.mosi}, reset={s.reset}, sclk={s.sclk}, seize={s.seize}, serve={s.serve}, to_device={s.to_device},'

  def internal_line_trace( s ):
    return ''
