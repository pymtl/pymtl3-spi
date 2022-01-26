// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSPIADAPTERPRTL__NBITS_4__NUM_ENTRIES_5_H_
#define _VSPIADAPTERPRTL__NBITS_4__NUM_ENTRIES_5_H_  // guard

#include "verilated.h"

//==========

class VSPIAdapterPRTL__nbits_4__num_entries_5__Syms;

//----------

VL_MODULE(VSPIAdapterPRTL__nbits_4__num_entries_5) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(pull___05Fen,0,0);
    VL_OUT8(pull___05Fmsg,3,0);
    VL_IN8(push___05Fen,0,0);
    VL_IN8(push___05Fmsg,3,0);
    VL_IN8(recv___05Fmsg,1,0);
    VL_OUT8(recv___05Frdy,0,0);
    VL_IN8(recv___05Fval,0,0);
    VL_OUT8(send___05Fmsg,1,0);
    VL_IN8(send___05Frdy,0,0);
    VL_OUT8(send___05Fval,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_send_rdy;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_recv_val;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__open_entries;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__head;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__recv_xfer;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__send_xfer;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__tail;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__head;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__recv_xfer;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__send_xfer;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__tail;
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata[1];
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT__regs[5];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata[1];
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT__regs[5];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound2;
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wen[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__waddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr[1];
    CData/*0:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wen[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__waddr[1];
    CData/*1:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata[1];
    CData/*2:0*/ SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSPIAdapterPRTL__nbits_4__num_entries_5);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSPIAdapterPRTL__nbits_4__num_entries_5(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSPIAdapterPRTL__nbits_4__num_entries_5();
    
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
    static void _eval_initial_loop(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* symsp, bool first);
  private:
    static QData _change_request(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
