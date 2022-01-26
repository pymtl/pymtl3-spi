// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPIADAPTERRTL__6NBITS__1NUM_ENTRIES_H_
#define _VSPIADAPTERRTL__6NBITS__1NUM_ENTRIES_H_  // guard

#include "verilated.h"

//==========

class VSPIAdapterRTL__6nbits__1num_entries__Syms;

//----------

VL_MODULE(VSPIAdapterRTL__6nbits__1num_entries) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(pull_en,0,0);
    VL_OUT8(pull_msg_data,3,0);
    VL_OUT8(pull_msg_spc,0,0);
    VL_OUT8(pull_msg_val,0,0);
    VL_IN8(push_en,0,0);
    VL_IN8(push_msg_data,3,0);
    VL_IN8(push_msg_val_rd,0,0);
    VL_IN8(push_msg_val_wrt,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(recv_msg,3,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_OUT8(send_msg,3,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_send_rdy;
    CData/*0:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_recv_val;
    CData/*7:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__entry;
    CData/*0:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__full;
    CData/*7:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__entry;
    CData/*0:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__full;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ SPIAdapterRTL___05F6nbits___05F1num_entries__DOT____Vcellout__v__pull_msg_data;
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSPIAdapterRTL__6nbits__1num_entries__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSPIAdapterRTL__6nbits__1num_entries);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSPIAdapterRTL__6nbits__1num_entries(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSPIAdapterRTL__6nbits__1num_entries();
    
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
    static void _eval_initial_loop(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSPIAdapterRTL__6nbits__1num_entries__Syms* symsp, bool first);
  private:
    static QData _change_request(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
