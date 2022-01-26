// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterPRTL__nbits_4__num_entries_1.h for the primary calling header

#include "VSPIAdapterPRTL__nbits_4__num_entries_1.h"
#include "VSPIAdapterPRTL__nbits_4__num_entries_1__Syms.h"

//==========

VL_CTOR_IMP(VSPIAdapterPRTL__nbits_4__num_entries_1) {
    VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* __restrict vlSymsp = __VlSymsp = new VSPIAdapterPRTL__nbits_4__num_entries_1__Syms(this, name());
    VSPIAdapterPRTL__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::__Vconfigure(VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIAdapterPRTL__nbits_4__num_entries_1::~VSPIAdapterPRTL__nbits_4__num_entries_1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::_settle__TOP__2(VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_1::_settle__TOP__2\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_recv_val 
        = (((IData)(vlTOPp->push___05Fmsg) >> 3U) & (IData)(vlTOPp->push___05Fen));
    vlTOPp->send___05Fval = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
    vlTOPp->send___05Fmsg = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry;
    vlTOPp->recv___05Frdy = (1U & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)));
    vlTOPp->pull___05Fmsg = ((0xbU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (4U & (((~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full)) 
                                       & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_recv_val))) 
                                      << 2U)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_send_rdy 
        = (((IData)(vlTOPp->push___05Fmsg) >> 2U) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->pull___05Fmsg = ((7U & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_send_rdy) 
                                 & (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)) 
                                << 3U));
    vlTOPp->pull___05Fmsg = ((0xcU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry) 
                                & ((2U & ((IData)(vlTOPp->pull___05Fmsg) 
                                          >> 2U)) | 
                                   (1U & ((IData)(vlTOPp->pull___05Fmsg) 
                                          >> 3U)))));
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::_eval_initial(VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_1::_eval_initial\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_1::final\n"); );
    // Variables
    VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIAdapterPRTL__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::_eval_settle(VSPIAdapterPRTL__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_1::_eval_settle\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIAdapterPRTL__nbits_4__num_entries_1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_1::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    pull___05Fen = VL_RAND_RESET_I(1);
    pull___05Fmsg = VL_RAND_RESET_I(4);
    push___05Fen = VL_RAND_RESET_I(1);
    push___05Fmsg = VL_RAND_RESET_I(4);
    recv___05Fmsg = VL_RAND_RESET_I(2);
    recv___05Frdy = VL_RAND_RESET_I(1);
    recv___05Fval = VL_RAND_RESET_I(1);
    send___05Fmsg = VL_RAND_RESET_I(2);
    send___05Frdy = VL_RAND_RESET_I(1);
    send___05Fval = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_send_rdy = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_recv_val = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full = VL_RAND_RESET_I(1);
}
