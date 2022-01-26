// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterRTL__6nbits__1num_entries.h for the primary calling header

#include "VSPIAdapterRTL__6nbits__1num_entries.h"
#include "VSPIAdapterRTL__6nbits__1num_entries__Syms.h"

//==========

VL_CTOR_IMP(VSPIAdapterRTL__6nbits__1num_entries) {
    VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp = __VlSymsp = new VSPIAdapterRTL__6nbits__1num_entries__Syms(this, name());
    VSPIAdapterRTL__6nbits__1num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIAdapterRTL__6nbits__1num_entries::__Vconfigure(VSPIAdapterRTL__6nbits__1num_entries__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIAdapterRTL__6nbits__1num_entries::~VSPIAdapterRTL__6nbits__1num_entries() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIAdapterRTL__6nbits__1num_entries::_settle__TOP__2(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__6nbits__1num_entries::_settle__TOP__2\n"); );
    VSPIAdapterRTL__6nbits__1num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_recv_val 
        = ((IData)(vlTOPp->push_msg_val_wrt) & (IData)(vlTOPp->push_en));
    vlTOPp->send_val = vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__full;
    vlTOPp->send_msg = (0xfU & (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__entry));
    vlTOPp->recv_rdy = (1U & (~ (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__full)));
    vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_send_rdy 
        = ((IData)(vlTOPp->push_msg_val_rd) & (IData)(vlTOPp->pull_en));
    vlTOPp->pull_msg_val = ((IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_send_rdy) 
                            & (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__full));
    vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT____Vcellout__v__pull_msg_data 
        = (0xfU & ((IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__entry) 
                   & (- (IData)((IData)(vlTOPp->pull_msg_val)))));
    vlTOPp->pull_msg_spc = (1U & ((~ (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__full)) 
                                  & (~ (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_recv_val))));
    vlTOPp->pull_msg_data = (0xfU & (IData)(vlTOPp->SPIAdapterRTL___05F6nbits___05F1num_entries__DOT____Vcellout__v__pull_msg_data));
}

void VSPIAdapterRTL__6nbits__1num_entries::_eval_initial(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__6nbits__1num_entries::_eval_initial\n"); );
    VSPIAdapterRTL__6nbits__1num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIAdapterRTL__6nbits__1num_entries::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__6nbits__1num_entries::final\n"); );
    // Variables
    VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIAdapterRTL__6nbits__1num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIAdapterRTL__6nbits__1num_entries::_eval_settle(VSPIAdapterRTL__6nbits__1num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__6nbits__1num_entries::_eval_settle\n"); );
    VSPIAdapterRTL__6nbits__1num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIAdapterRTL__6nbits__1num_entries::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__6nbits__1num_entries::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    pull_en = VL_RAND_RESET_I(1);
    pull_msg_data = VL_RAND_RESET_I(4);
    pull_msg_spc = VL_RAND_RESET_I(1);
    pull_msg_val = VL_RAND_RESET_I(1);
    push_en = VL_RAND_RESET_I(1);
    push_msg_data = VL_RAND_RESET_I(4);
    push_msg_val_rd = VL_RAND_RESET_I(1);
    push_msg_val_wrt = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(4);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(4);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT____Vcellout__v__pull_msg_data = VL_RAND_RESET_I(6);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_send_rdy = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_recv_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__entry = VL_RAND_RESET_I(8);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__cm_q__DOT__genblk1__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__entry = VL_RAND_RESET_I(8);
    SPIAdapterRTL___05F6nbits___05F1num_entries__DOT__v__DOT__mc_q__DOT__genblk1__DOT__q__DOT__full = VL_RAND_RESET_I(1);
}
