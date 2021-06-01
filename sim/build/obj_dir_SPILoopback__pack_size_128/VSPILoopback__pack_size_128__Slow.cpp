// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPILoopback__pack_size_128.h for the primary calling header

#include "VSPILoopback__pack_size_128.h"
#include "VSPILoopback__pack_size_128__Syms.h"

//==========

VL_CTOR_IMP(VSPILoopback__pack_size_128) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = __VlSymsp = new VSPILoopback__pack_size_128__Syms(this, name());
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPILoopback__pack_size_128::__Vconfigure(VSPILoopback__pack_size_128__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPILoopback__pack_size_128::~VSPILoopback__pack_size_128() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPILoopback__pack_size_128::_eval_initial(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_eval_initial\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPILoopback__pack_size_128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::final\n"); );
    // Variables
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPILoopback__pack_size_128::_eval_settle(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_eval_settle\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VSPILoopback__pack_size_128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, from_device);
    VL_RAND_RESET_W(128, from_master);
    loop_en = VL_RAND_RESET_I(1);
    serve = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, to_device);
    VL_RAND_RESET_W(128, to_master);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
