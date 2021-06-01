// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIHardbits__pack_size_128__hard_bits_4.h for the primary calling header

#include "VSPIHardbits__pack_size_128__hard_bits_4.h"
#include "VSPIHardbits__pack_size_128__hard_bits_4__Syms.h"

//==========

VL_CTOR_IMP(VSPIHardbits__pack_size_128__hard_bits_4) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = __VlSymsp = new VSPIHardbits__pack_size_128__hard_bits_4__Syms(this, name());
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIHardbits__pack_size_128__hard_bits_4::__Vconfigure(VSPIHardbits__pack_size_128__hard_bits_4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIHardbits__pack_size_128__hard_bits_4::~VSPIHardbits__pack_size_128__hard_bits_4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIHardbits__pack_size_128__hard_bits_4::_eval_initial(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_eval_initial\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIHardbits__pack_size_128__hard_bits_4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::final\n"); );
    // Variables
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIHardbits__pack_size_128__hard_bits_4::_eval_settle(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_eval_settle\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VSPIHardbits__pack_size_128__hard_bits_4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    detected_bits = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, from_device);
    VL_RAND_RESET_W(128, from_master);
    hard_msg = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    serve = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, to_device);
    VL_RAND_RESET_W(128, to_master);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
