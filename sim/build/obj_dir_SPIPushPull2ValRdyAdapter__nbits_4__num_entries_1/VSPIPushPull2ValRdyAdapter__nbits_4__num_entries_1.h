// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPIPUSHPULL2VALRDYADAPTER__NBITS_4__NUM_ENTRIES_1_H_
#define _VSPIPUSHPULL2VALRDYADAPTER__NBITS_4__NUM_ENTRIES_1_H_  // guard

#include "verilated.h"

//==========

class VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms;

//----------

VL_MODULE(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(pull___05Fen,0,0);
    VL_IN8(pull___05Fmsg,3,0);
    VL_IN8(push___05Fen,0,0);
    VL_OUT8(push___05Fmsg,3,0);
    VL_IN8(recv___05Fen,0,0);
    VL_IN8(recv___05Fmsg,1,0);
    VL_OUT8(recv___05Frdy,0,0);
    VL_OUT8(send___05Fen,0,0);
    VL_OUT8(send___05Fmsg,1,0);
    VL_IN8(send___05Frdy,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_deq_en;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q___05Fenq___05Fen;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy;
    CData/*1:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q___05Fenq___05Frdy;
    CData/*1:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry;
    CData/*0:0*/ SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1();
    
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
    static void _eval_initial_loop(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* symsp, bool first);
  private:
    static QData _change_request(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
