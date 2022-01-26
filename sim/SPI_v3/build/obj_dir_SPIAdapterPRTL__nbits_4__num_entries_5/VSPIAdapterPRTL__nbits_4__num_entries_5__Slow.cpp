// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterPRTL__nbits_4__num_entries_5.h for the primary calling header

#include "VSPIAdapterPRTL__nbits_4__num_entries_5.h"
#include "VSPIAdapterPRTL__nbits_4__num_entries_5__Syms.h"

//==========

VL_CTOR_IMP(VSPIAdapterPRTL__nbits_4__num_entries_5) {
    VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp = __VlSymsp = new VSPIAdapterPRTL__nbits_4__num_entries_5__Syms(this, name());
    VSPIAdapterPRTL__nbits_4__num_entries_5* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::__Vconfigure(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIAdapterPRTL__nbits_4__num_entries_5::~VSPIAdapterPRTL__nbits_4__num_entries_5() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::_settle__TOP__2(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_5::_settle__TOP__2\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_5* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->recv___05Fmsg;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = (3U & (IData)(vlTOPp->push___05Fmsg));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_recv_val 
        = (((IData)(vlTOPp->push___05Fmsg) >> 3U) & (IData)(vlTOPp->push___05Fen));
    vlTOPp->send___05Fval = (0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount));
    vlTOPp->recv___05Frdy = (5U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->send___05Frdy));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__recv_xfer 
        = ((IData)(vlTOPp->recv___05Fval) & (5U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__recv_xfer 
        = ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_recv_val) 
           & (5U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = ((4U >= vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr
            [0U]) ? vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT__regs
           [vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr
           [0U]] : 0U);
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = ((4U >= vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr
            [0U]) ? vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT__regs
           [vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr
           [0U]] : 0U);
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->send___05Fmsg = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__open_entries 
        = (4U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount));
    vlTOPp->pull___05Fmsg = ((0xbU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((5U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount)) 
                                 & ((~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_recv_val)) 
                                    | (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__open_entries))) 
                                << 2U));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_send_rdy 
        = (((IData)(vlTOPp->push___05Fmsg) >> 2U) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->pull___05Fmsg = ((7U & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_send_rdy) 
                                 & (0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount))) 
                                << 3U));
    vlTOPp->pull___05Fmsg = ((0xcU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata
                                [0U] & ((2U & ((IData)(vlTOPp->pull___05Fmsg) 
                                               >> 2U)) 
                                        | (1U & ((IData)(vlTOPp->pull___05Fmsg) 
                                                 >> 3U)))));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_send_rdy));
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::_eval_initial(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_5::_eval_initial\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_5* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_5::final\n"); );
    // Variables
    VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIAdapterPRTL__nbits_4__num_entries_5* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::_eval_settle(VSPIAdapterPRTL__nbits_4__num_entries_5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_5::_eval_settle\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_5* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIAdapterPRTL__nbits_4__num_entries_5::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_5::_ctor_var_reset\n"); );
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
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_send_rdy = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_recv_val = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__open_entries = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl___05Fcount = VL_RAND_RESET_I(3);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__head = VL_RAND_RESET_I(3);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__waddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(2);
    }}
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl___05Fcount = VL_RAND_RESET_I(3);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__head = VL_RAND_RESET_I(3);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__waddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(2);
    }}
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_5__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
}
