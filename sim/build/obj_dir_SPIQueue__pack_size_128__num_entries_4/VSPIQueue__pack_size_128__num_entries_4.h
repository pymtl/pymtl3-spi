// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPIQUEUE__PACK_SIZE_128__NUM_ENTRIES_4_H_
#define _VSPIQUEUE__PACK_SIZE_128__NUM_ENTRIES_4_H_  // guard

#include "verilated.h"

//==========

class VSPIQueue__pack_size_128__num_entries_4__Syms;
class VSPIQueue__pack_size_128__num_entries_4_VerilatedVcd;


//----------

VL_MODULE(VSPIQueue__pack_size_128__num_entries_4) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(hard_msg,0,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(seize,0,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    VL_IN8(serve,0,0);
    VL_INW(from_master,127,0,4);
    VL_INW(recv_msg,127,0,4);
    VL_OUTW(send_msg,127,0,4);
    VL_OUTW(to_master,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send;
    CData/*2:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv;
    CData/*0:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en;
    CData/*0:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer;
    CData/*2:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer_counter__DOT__count_next;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next;
    CData/*0:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en;
    CData/*0:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer;
    CData/*2:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next;
    CData/*1:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next;
    WData/*127:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[4][4];
    WData/*127:0*/ SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[4][4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[3];
    static CData/*2:0*/ __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[64];
    static CData/*2:0*/ __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSPIQueue__pack_size_128__num_entries_4__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSPIQueue__pack_size_128__num_entries_4);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSPIQueue__pack_size_128__num_entries_4(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSPIQueue__pack_size_128__num_entries_4();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSPIQueue__pack_size_128__num_entries_4__Syms* symsp, bool first);
  private:
    static QData _change_request(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
