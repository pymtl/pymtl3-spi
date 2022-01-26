// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterRTL__4nbits__2num_entries.h for the primary calling header

#include "VSPIAdapterRTL__4nbits__2num_entries.h"
#include "VSPIAdapterRTL__4nbits__2num_entries__Syms.h"

//==========

VL_CTOR_IMP(VSPIAdapterRTL__4nbits__2num_entries) {
    VSPIAdapterRTL__4nbits__2num_entries__Syms* __restrict vlSymsp = __VlSymsp = new VSPIAdapterRTL__4nbits__2num_entries__Syms(this, name());
    VSPIAdapterRTL__4nbits__2num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIAdapterRTL__4nbits__2num_entries::__Vconfigure(VSPIAdapterRTL__4nbits__2num_entries__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIAdapterRTL__4nbits__2num_entries::~VSPIAdapterRTL__4nbits__2num_entries() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIAdapterRTL__4nbits__2num_entries::_settle__TOP__1(VSPIAdapterRTL__4nbits__2num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__2num_entries::_settle__TOP__1\n"); );
    VSPIAdapterRTL__4nbits__2num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->send_msg = (3U & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_msg));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_send_rdy 
        = ((IData)(vlTOPp->push_msg_val_rd) & (IData)(vlTOPp->pull_en));
    vlTOPp->pull_msg_val = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_send_rdy) 
                            & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_send_val));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT____Vcellout__v__pull_msg_data 
        = (3U & ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__cm_q__send_msg) 
                 & (- (IData)((IData)(vlTOPp->pull_msg_val)))));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_recv_val 
        = ((IData)(vlTOPp->push_msg_val_wrt) & (IData)(vlTOPp->push_en));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_recv_rdy 
        = (2U > (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__cm_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__recv_xfer 
        = ((IData)(vlTOPp->recv_val) & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_recv_rdy));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_val 
        = (0U < (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__mc_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__send_xfer 
        = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_val) 
           & (IData)(vlTOPp->send_rdy));
    vlTOPp->pull_msg_data = (3U & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT____Vcellout__v__pull_msg_data));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_send_val 
        = (0U < (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__cm_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__send_xfer 
        = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_send_val) 
           & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_send_rdy));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_recv_rdy 
        = (2U > (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__mc_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__recv_xfer 
        = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_recv_val) 
           & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_recv_rdy));
    vlTOPp->recv_rdy = vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_recv_rdy;
    vlTOPp->send_val = vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_val;
    vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__open_entries 
        = (1U > (1U & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__mc_q__count)));
    vlTOPp->pull_msg_spc = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_recv_rdy) 
                            & ((~ (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_recv_val)) 
                               | (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__open_entries)));
}

void VSPIAdapterRTL__4nbits__2num_entries::_eval_initial(VSPIAdapterRTL__4nbits__2num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__2num_entries::_eval_initial\n"); );
    VSPIAdapterRTL__4nbits__2num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIAdapterRTL__4nbits__2num_entries::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__2num_entries::final\n"); );
    // Variables
    VSPIAdapterRTL__4nbits__2num_entries__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIAdapterRTL__4nbits__2num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIAdapterRTL__4nbits__2num_entries::_eval_settle(VSPIAdapterRTL__4nbits__2num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__2num_entries::_eval_settle\n"); );
    VSPIAdapterRTL__4nbits__2num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void VSPIAdapterRTL__4nbits__2num_entries::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__2num_entries::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    pull_en = VL_RAND_RESET_I(1);
    pull_msg_data = VL_RAND_RESET_I(2);
    pull_msg_spc = VL_RAND_RESET_I(1);
    pull_msg_val = VL_RAND_RESET_I(1);
    push_en = VL_RAND_RESET_I(1);
    push_msg_data = VL_RAND_RESET_I(2);
    push_msg_val_rd = VL_RAND_RESET_I(1);
    push_msg_val_wrt = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(2);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(2);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT____Vcellout__v__pull_msg_data = VL_RAND_RESET_I(4);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_send_rdy = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_recv_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__open_entries = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_recv_rdy = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_send_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__cm_q__send_msg = VL_RAND_RESET_I(4);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__cm_q__count = VL_RAND_RESET_I(3);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_recv_rdy = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_msg = VL_RAND_RESET_I(4);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q_send_val = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT____Vcellout__mc_q__count = VL_RAND_RESET_I(3);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__send_xfer = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__send_xfer = VL_RAND_RESET_I(1);
    __Vchglast__TOP__SPIAdapterRTL___05F4nbits___05F2num_entries__DOT__v__DOT__cm_q_send_val = VL_RAND_RESET_I(1);
}
