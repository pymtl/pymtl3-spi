// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIMinion__pack_size_128.h for the primary calling header

#include "VSPIMinion__pack_size_128.h"
#include "VSPIMinion__pack_size_128__Syms.h"

//==========

VL_CTOR_IMP(VSPIMinion__pack_size_128) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = __VlSymsp = new VSPIMinion__pack_size_128__Syms(this, name());
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIMinion__pack_size_128::__Vconfigure(VSPIMinion__pack_size_128__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIMinion__pack_size_128::~VSPIMinion__pack_size_128() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIMinion__pack_size_128::_settle__TOP__2(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_settle__TOP__2\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->to_device[0U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[0U];
    vlTOPp->to_device[1U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[1U];
    vlTOPp->to_device[2U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[2U];
    vlTOPp->to_device[3U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[3U];
    vlTOPp->miso = (1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
                          >> 0x1fU));
}

void VSPIMinion__pack_size_128::_eval_initial(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_eval_initial\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIMinion__pack_size_128::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::final\n"); );
    // Variables
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIMinion__pack_size_128::_eval_settle(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_eval_settle\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIMinion__pack_size_128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    cs = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, from_device);
    miso = VL_RAND_RESET_I(1);
    mosi = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    sclk = VL_RAND_RESET_I(1);
    seize = VL_RAND_RESET_I(1);
    serve = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, to_device);
    VL_RAND_RESET_W(128, SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out);
    VL_RAND_RESET_W(128, SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out);
    SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q = VL_RAND_RESET_I(3);
    SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
