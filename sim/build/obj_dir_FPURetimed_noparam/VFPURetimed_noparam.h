// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFPURETIMED_NOPARAM_H_
#define _VFPURETIMED_NOPARAM_H_  // guard

#include "verilated.h"

//==========

class VFPURetimed_noparam__Syms;
class VFPURetimed_noparam_VerilatedVcd;


//----------

VL_MODULE(VFPURetimed_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(req_rdy,0,0);
    VL_IN8(req_val,0,0);
    VL_IN8(resp_rdy,0,0);
    VL_OUT8(resp_val,0,0);
    VL_INW(req_msg,127,0,4);
    VL_OUTW(resp_msg,127,0,4);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__val_pass1;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__val_pass2;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
        CData/*6:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist;
        CData/*6:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut;
        CData/*6:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask;
        CData/*6:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar;
        CData/*4:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
        CData/*5:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound;
        CData/*0:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__exp;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__exp;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__exp;
        SData/*9:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp;
        SData/*10:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
        SData/*10:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
        SData/*9:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum;
        SData/*8:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c;
        SData/*10:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp;
        WData/*123:0*/ FPURetimed_noparam__DOT__v__DOT__input_msg[4];
        IData/*31:0*/ FPURetimed_noparam__DOT__v__DOT__out;
        IData/*31:0*/ FPURetimed_noparam__DOT__v__DOT__out_pass2;
    };
    struct {
        IData/*22:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn;
        IData/*23:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
        IData/*22:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn;
        IData/*23:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
        IData/*22:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn;
        IData/*23:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
        IData/*26:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig;
        IData/*24:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC;
        WData/*76:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3];
        WData/*74:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3];
        WData/*74:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3];
        IData/*28:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig;
        IData/*25:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum;
        IData/*28:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig;
        IData/*26:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig;
        IData/*25:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
        IData/*26:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
        IData/*16:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c;
        IData/*22:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut;
        IData/*26:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask;
        IData/*24:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main;
        IData/*26:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask;
        IData/*25:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig;
        WData/*512:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c[17];
        IData/*24:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut;
        IData/*24:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig;
        QData/*32:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec;
        QData/*32:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec;
        QData/*32:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec;
        QData/*32:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec;
        QData/*48:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult;
        QData/*32:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c;
        QData/*49:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
        QData/*50:0*/ FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFPURetimed_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFPURetimed_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VFPURetimed_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFPURetimed_noparam();
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
    static void _eval_initial_loop(VFPURetimed_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VFPURetimed_noparam__Syms* symsp, bool first);
  private:
    static QData _change_request(VFPURetimed_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VFPURetimed_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VFPURetimed_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VFPURetimed_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VFPURetimed_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VFPURetimed_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VFPURetimed_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VFPURetimed_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
