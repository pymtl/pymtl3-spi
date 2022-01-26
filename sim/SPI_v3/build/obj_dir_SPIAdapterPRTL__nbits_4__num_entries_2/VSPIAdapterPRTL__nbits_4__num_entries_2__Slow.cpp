// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterPRTL__nbits_4__num_entries_2.h for the primary calling header

#include "VSPIAdapterPRTL__nbits_4__num_entries_2.h"
#include "VSPIAdapterPRTL__nbits_4__num_entries_2__Syms.h"

//==========
CData/*0:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[128];
CData/*0:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[128];
CData/*1:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[128];
CData/*0:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[128];
CData/*0:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[128];
CData/*1:0*/ VSPIAdapterPRTL__nbits_4__num_entries_2::__Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[128];

VL_CTOR_IMP(VSPIAdapterPRTL__nbits_4__num_entries_2) {
    VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* __restrict vlSymsp = __VlSymsp = new VSPIAdapterPRTL__nbits_4__num_entries_2__Syms(this, name());
    VSPIAdapterPRTL__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::__Vconfigure(VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIAdapterPRTL__nbits_4__num_entries_2::~VSPIAdapterPRTL__nbits_4__num_entries_2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::_settle__TOP__2(VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_2::_settle__TOP__2\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->recv___05Fmsg;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = (3U & (IData)(vlTOPp->push___05Fmsg));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_recv_val 
        = (((IData)(vlTOPp->push___05Fmsg) >> 3U) & (IData)(vlTOPp->push___05Fen));
    vlTOPp->send___05Fval = (0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount));
    vlTOPp->recv___05Frdy = (2U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->send___05Frdy));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__recv_xfer 
        = ((IData)(vlTOPp->recv___05Fval) & (2U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__recv_xfer 
        = ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_recv_val) 
           & (2U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->send___05Fmsg = vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__open_entries 
        = (1U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount));
    vlTOPp->pull___05Fmsg = ((0xbU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((2U > (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount)) 
                                 & ((~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_recv_val)) 
                                    | (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__open_entries))) 
                                << 2U));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_send_rdy 
        = (((IData)(vlTOPp->push___05Fmsg) >> 2U) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->pull___05Fmsg = ((7U & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_send_rdy) 
                                 & (0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount))) 
                                << 3U));
    vlTOPp->pull___05Fmsg = ((0xcU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata
                                [0U] & ((2U & ((IData)(vlTOPp->pull___05Fmsg) 
                                               >> 2U)) 
                                        | (1U & ((IData)(vlTOPp->pull___05Fmsg) 
                                                 >> 3U)))));
    vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_send_rdy));
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::_eval_initial(VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_2::_eval_initial\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_2::final\n"); );
    // Variables
    VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIAdapterPRTL__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::_eval_settle(VSPIAdapterPRTL__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_2::_eval_settle\n"); );
    VSPIAdapterPRTL__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIAdapterPRTL__nbits_4__num_entries_2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_4__num_entries_2::_ctor_var_reset\n"); );
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
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_send_rdy = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_recv_val = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__open_entries = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__wdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__waddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellout__rf__rdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__rf__raddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(2);
    }}
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__recv_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__send_xfer = VL_RAND_RESET_I(1);
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Frdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__wdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__waddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellout__rf__rdata[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__rf__raddr[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(2);
    }}
    SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 7U;
    __Vtablechg1[2] = 6U;
    __Vtablechg1[3] = 7U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 7U;
    __Vtablechg1[6] = 6U;
    __Vtablechg1[7] = 7U;
    __Vtablechg1[8] = 5U;
    __Vtablechg1[9] = 7U;
    __Vtablechg1[10] = 3U;
    __Vtablechg1[11] = 7U;
    __Vtablechg1[12] = 5U;
    __Vtablechg1[13] = 7U;
    __Vtablechg1[14] = 3U;
    __Vtablechg1[15] = 7U;
    __Vtablechg1[16] = 0U;
    __Vtablechg1[17] = 7U;
    __Vtablechg1[18] = 6U;
    __Vtablechg1[19] = 7U;
    __Vtablechg1[20] = 0U;
    __Vtablechg1[21] = 7U;
    __Vtablechg1[22] = 6U;
    __Vtablechg1[23] = 7U;
    __Vtablechg1[24] = 5U;
    __Vtablechg1[25] = 7U;
    __Vtablechg1[26] = 3U;
    __Vtablechg1[27] = 7U;
    __Vtablechg1[28] = 5U;
    __Vtablechg1[29] = 7U;
    __Vtablechg1[30] = 3U;
    __Vtablechg1[31] = 7U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 7U;
    __Vtablechg1[34] = 6U;
    __Vtablechg1[35] = 7U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 7U;
    __Vtablechg1[38] = 6U;
    __Vtablechg1[39] = 7U;
    __Vtablechg1[40] = 5U;
    __Vtablechg1[41] = 7U;
    __Vtablechg1[42] = 3U;
    __Vtablechg1[43] = 7U;
    __Vtablechg1[44] = 5U;
    __Vtablechg1[45] = 7U;
    __Vtablechg1[46] = 3U;
    __Vtablechg1[47] = 7U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 7U;
    __Vtablechg1[50] = 6U;
    __Vtablechg1[51] = 7U;
    __Vtablechg1[52] = 0U;
    __Vtablechg1[53] = 7U;
    __Vtablechg1[54] = 6U;
    __Vtablechg1[55] = 7U;
    __Vtablechg1[56] = 5U;
    __Vtablechg1[57] = 7U;
    __Vtablechg1[58] = 3U;
    __Vtablechg1[59] = 7U;
    __Vtablechg1[60] = 5U;
    __Vtablechg1[61] = 7U;
    __Vtablechg1[62] = 3U;
    __Vtablechg1[63] = 7U;
    __Vtablechg1[64] = 0U;
    __Vtablechg1[65] = 7U;
    __Vtablechg1[66] = 6U;
    __Vtablechg1[67] = 7U;
    __Vtablechg1[68] = 0U;
    __Vtablechg1[69] = 7U;
    __Vtablechg1[70] = 6U;
    __Vtablechg1[71] = 7U;
    __Vtablechg1[72] = 5U;
    __Vtablechg1[73] = 7U;
    __Vtablechg1[74] = 3U;
    __Vtablechg1[75] = 7U;
    __Vtablechg1[76] = 5U;
    __Vtablechg1[77] = 7U;
    __Vtablechg1[78] = 3U;
    __Vtablechg1[79] = 7U;
    __Vtablechg1[80] = 0U;
    __Vtablechg1[81] = 7U;
    __Vtablechg1[82] = 6U;
    __Vtablechg1[83] = 7U;
    __Vtablechg1[84] = 0U;
    __Vtablechg1[85] = 7U;
    __Vtablechg1[86] = 6U;
    __Vtablechg1[87] = 7U;
    __Vtablechg1[88] = 5U;
    __Vtablechg1[89] = 7U;
    __Vtablechg1[90] = 3U;
    __Vtablechg1[91] = 7U;
    __Vtablechg1[92] = 5U;
    __Vtablechg1[93] = 7U;
    __Vtablechg1[94] = 3U;
    __Vtablechg1[95] = 7U;
    __Vtablechg1[96] = 0U;
    __Vtablechg1[97] = 7U;
    __Vtablechg1[98] = 6U;
    __Vtablechg1[99] = 7U;
    __Vtablechg1[100] = 0U;
    __Vtablechg1[101] = 7U;
    __Vtablechg1[102] = 6U;
    __Vtablechg1[103] = 7U;
    __Vtablechg1[104] = 5U;
    __Vtablechg1[105] = 7U;
    __Vtablechg1[106] = 3U;
    __Vtablechg1[107] = 7U;
    __Vtablechg1[108] = 5U;
    __Vtablechg1[109] = 7U;
    __Vtablechg1[110] = 3U;
    __Vtablechg1[111] = 7U;
    __Vtablechg1[112] = 0U;
    __Vtablechg1[113] = 7U;
    __Vtablechg1[114] = 6U;
    __Vtablechg1[115] = 7U;
    __Vtablechg1[116] = 0U;
    __Vtablechg1[117] = 7U;
    __Vtablechg1[118] = 6U;
    __Vtablechg1[119] = 7U;
    __Vtablechg1[120] = 5U;
    __Vtablechg1[121] = 7U;
    __Vtablechg1[122] = 3U;
    __Vtablechg1[123] = 7U;
    __Vtablechg1[124] = 5U;
    __Vtablechg1[125] = 7U;
    __Vtablechg1[126] = 3U;
    __Vtablechg1[127] = 7U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[0] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[1] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[2] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[3] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[4] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[5] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[6] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[7] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[8] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[9] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[10] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[11] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[12] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[13] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[14] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[15] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[16] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[17] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[18] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[19] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[20] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[21] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[22] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[23] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[24] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[25] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[26] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[27] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[28] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[29] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[30] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[31] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[32] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[33] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[34] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[35] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[36] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[37] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[38] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[39] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[40] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[41] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[42] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[43] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[44] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[45] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[46] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[47] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[48] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[49] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[50] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[51] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[52] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[53] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[54] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[55] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[56] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[57] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[58] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[59] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[60] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[61] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[62] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[63] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[64] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[65] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[66] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[67] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[68] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[69] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[70] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[71] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[72] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[73] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[74] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[75] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[76] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[77] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[78] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[79] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[80] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[81] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[82] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[83] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[84] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[85] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[86] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[87] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[88] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[89] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[90] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[91] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[92] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[93] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[94] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[95] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[96] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[97] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[98] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[99] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[100] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[101] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[102] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[103] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[104] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[105] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[106] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[107] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[108] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[109] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[110] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[111] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[112] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[113] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[114] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[115] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[116] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[117] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[118] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[119] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[120] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[121] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[122] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[123] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[124] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[125] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[126] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head[127] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[0] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[1] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[2] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[3] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[4] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[5] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[6] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[7] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[8] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[9] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[10] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[11] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[12] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[13] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[14] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[15] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[16] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[17] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[18] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[19] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[20] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[21] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[22] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[23] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[24] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[25] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[26] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[27] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[28] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[29] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[30] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[31] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[32] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[33] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[34] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[35] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[36] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[37] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[38] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[39] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[40] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[41] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[42] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[43] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[44] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[45] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[46] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[47] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[48] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[49] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[50] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[51] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[52] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[53] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[54] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[55] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[56] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[57] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[58] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[59] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[60] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[61] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[62] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[63] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[64] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[65] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[66] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[67] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[68] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[69] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[70] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[71] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[72] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[73] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[74] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[75] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[76] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[77] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[78] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[79] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[80] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[81] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[82] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[83] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[84] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[85] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[86] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[87] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[88] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[89] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[90] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[91] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[92] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[93] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[94] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[95] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[96] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[97] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[98] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[99] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[100] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[101] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[102] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[103] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[104] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[105] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[106] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[107] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[108] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[109] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[110] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[111] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[112] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[113] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[114] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[115] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[116] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[117] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[118] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[119] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[120] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[121] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[122] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[123] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[124] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[125] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[126] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail[127] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[0] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[1] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[2] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[3] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[4] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[5] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[6] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[7] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[8] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[9] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[10] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[11] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[12] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[13] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[14] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[15] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[16] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[17] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[18] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[19] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[20] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[21] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[22] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[23] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[24] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[25] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[26] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[27] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[28] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[29] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[30] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[31] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[32] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[33] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[34] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[35] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[36] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[37] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[38] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[39] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[40] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[41] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[42] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[43] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[44] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[45] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[46] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[47] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[48] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[49] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[50] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[51] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[52] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[53] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[54] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[55] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[56] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[57] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[58] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[59] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[60] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[61] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[62] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[63] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[64] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[65] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[66] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[67] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[68] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[69] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[70] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[71] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[72] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[73] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[74] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[75] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[76] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[77] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[78] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[79] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[80] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[81] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[82] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[83] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[84] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[85] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[86] = 3U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[87] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[88] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[89] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[90] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[91] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[92] = 1U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[93] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[94] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[95] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[96] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[97] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[98] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[99] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[100] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[101] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[102] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[103] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[104] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[105] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[106] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[107] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[108] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[109] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[110] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[111] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[112] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[113] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[114] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[115] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[116] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[117] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[118] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[119] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[120] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[121] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[122] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[123] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[124] = 2U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[125] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[126] = 0U;
    __Vtable1_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount[127] = 0U;
    __Vtablechg2[0] = 0U;
    __Vtablechg2[1] = 7U;
    __Vtablechg2[2] = 6U;
    __Vtablechg2[3] = 7U;
    __Vtablechg2[4] = 0U;
    __Vtablechg2[5] = 7U;
    __Vtablechg2[6] = 6U;
    __Vtablechg2[7] = 7U;
    __Vtablechg2[8] = 5U;
    __Vtablechg2[9] = 7U;
    __Vtablechg2[10] = 3U;
    __Vtablechg2[11] = 7U;
    __Vtablechg2[12] = 5U;
    __Vtablechg2[13] = 7U;
    __Vtablechg2[14] = 3U;
    __Vtablechg2[15] = 7U;
    __Vtablechg2[16] = 0U;
    __Vtablechg2[17] = 7U;
    __Vtablechg2[18] = 6U;
    __Vtablechg2[19] = 7U;
    __Vtablechg2[20] = 0U;
    __Vtablechg2[21] = 7U;
    __Vtablechg2[22] = 6U;
    __Vtablechg2[23] = 7U;
    __Vtablechg2[24] = 5U;
    __Vtablechg2[25] = 7U;
    __Vtablechg2[26] = 3U;
    __Vtablechg2[27] = 7U;
    __Vtablechg2[28] = 5U;
    __Vtablechg2[29] = 7U;
    __Vtablechg2[30] = 3U;
    __Vtablechg2[31] = 7U;
    __Vtablechg2[32] = 0U;
    __Vtablechg2[33] = 7U;
    __Vtablechg2[34] = 6U;
    __Vtablechg2[35] = 7U;
    __Vtablechg2[36] = 0U;
    __Vtablechg2[37] = 7U;
    __Vtablechg2[38] = 6U;
    __Vtablechg2[39] = 7U;
    __Vtablechg2[40] = 5U;
    __Vtablechg2[41] = 7U;
    __Vtablechg2[42] = 3U;
    __Vtablechg2[43] = 7U;
    __Vtablechg2[44] = 5U;
    __Vtablechg2[45] = 7U;
    __Vtablechg2[46] = 3U;
    __Vtablechg2[47] = 7U;
    __Vtablechg2[48] = 0U;
    __Vtablechg2[49] = 7U;
    __Vtablechg2[50] = 6U;
    __Vtablechg2[51] = 7U;
    __Vtablechg2[52] = 0U;
    __Vtablechg2[53] = 7U;
    __Vtablechg2[54] = 6U;
    __Vtablechg2[55] = 7U;
    __Vtablechg2[56] = 5U;
    __Vtablechg2[57] = 7U;
    __Vtablechg2[58] = 3U;
    __Vtablechg2[59] = 7U;
    __Vtablechg2[60] = 5U;
    __Vtablechg2[61] = 7U;
    __Vtablechg2[62] = 3U;
    __Vtablechg2[63] = 7U;
    __Vtablechg2[64] = 0U;
    __Vtablechg2[65] = 7U;
    __Vtablechg2[66] = 6U;
    __Vtablechg2[67] = 7U;
    __Vtablechg2[68] = 0U;
    __Vtablechg2[69] = 7U;
    __Vtablechg2[70] = 6U;
    __Vtablechg2[71] = 7U;
    __Vtablechg2[72] = 5U;
    __Vtablechg2[73] = 7U;
    __Vtablechg2[74] = 3U;
    __Vtablechg2[75] = 7U;
    __Vtablechg2[76] = 5U;
    __Vtablechg2[77] = 7U;
    __Vtablechg2[78] = 3U;
    __Vtablechg2[79] = 7U;
    __Vtablechg2[80] = 0U;
    __Vtablechg2[81] = 7U;
    __Vtablechg2[82] = 6U;
    __Vtablechg2[83] = 7U;
    __Vtablechg2[84] = 0U;
    __Vtablechg2[85] = 7U;
    __Vtablechg2[86] = 6U;
    __Vtablechg2[87] = 7U;
    __Vtablechg2[88] = 5U;
    __Vtablechg2[89] = 7U;
    __Vtablechg2[90] = 3U;
    __Vtablechg2[91] = 7U;
    __Vtablechg2[92] = 5U;
    __Vtablechg2[93] = 7U;
    __Vtablechg2[94] = 3U;
    __Vtablechg2[95] = 7U;
    __Vtablechg2[96] = 0U;
    __Vtablechg2[97] = 7U;
    __Vtablechg2[98] = 6U;
    __Vtablechg2[99] = 7U;
    __Vtablechg2[100] = 0U;
    __Vtablechg2[101] = 7U;
    __Vtablechg2[102] = 6U;
    __Vtablechg2[103] = 7U;
    __Vtablechg2[104] = 5U;
    __Vtablechg2[105] = 7U;
    __Vtablechg2[106] = 3U;
    __Vtablechg2[107] = 7U;
    __Vtablechg2[108] = 5U;
    __Vtablechg2[109] = 7U;
    __Vtablechg2[110] = 3U;
    __Vtablechg2[111] = 7U;
    __Vtablechg2[112] = 0U;
    __Vtablechg2[113] = 7U;
    __Vtablechg2[114] = 6U;
    __Vtablechg2[115] = 7U;
    __Vtablechg2[116] = 0U;
    __Vtablechg2[117] = 7U;
    __Vtablechg2[118] = 6U;
    __Vtablechg2[119] = 7U;
    __Vtablechg2[120] = 5U;
    __Vtablechg2[121] = 7U;
    __Vtablechg2[122] = 3U;
    __Vtablechg2[123] = 7U;
    __Vtablechg2[124] = 5U;
    __Vtablechg2[125] = 7U;
    __Vtablechg2[126] = 3U;
    __Vtablechg2[127] = 7U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[0] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[1] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[2] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[3] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[4] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[5] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[6] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[7] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[8] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[9] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[10] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[11] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[12] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[13] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[14] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[15] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[16] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[17] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[18] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[19] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[20] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[21] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[22] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[23] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[24] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[25] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[26] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[27] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[28] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[29] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[30] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[31] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[32] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[33] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[34] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[35] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[36] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[37] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[38] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[39] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[40] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[41] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[42] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[43] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[44] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[45] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[46] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[47] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[48] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[49] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[50] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[51] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[52] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[53] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[54] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[55] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[56] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[57] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[58] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[59] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[60] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[61] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[62] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[63] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[64] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[65] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[66] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[67] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[68] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[69] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[70] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[71] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[72] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[73] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[74] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[75] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[76] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[77] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[78] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[79] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[80] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[81] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[82] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[83] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[84] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[85] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[86] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[87] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[88] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[89] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[90] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[91] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[92] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[93] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[94] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[95] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[96] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[97] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[98] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[99] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[100] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[101] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[102] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[103] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[104] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[105] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[106] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[107] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[108] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[109] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[110] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[111] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[112] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[113] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[114] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[115] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[116] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[117] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[118] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[119] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[120] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[121] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[122] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[123] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[124] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[125] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[126] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head[127] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[0] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[1] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[2] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[3] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[4] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[5] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[6] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[7] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[8] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[9] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[10] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[11] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[12] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[13] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[14] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[15] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[16] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[17] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[18] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[19] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[20] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[21] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[22] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[23] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[24] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[25] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[26] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[27] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[28] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[29] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[30] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[31] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[32] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[33] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[34] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[35] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[36] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[37] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[38] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[39] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[40] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[41] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[42] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[43] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[44] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[45] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[46] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[47] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[48] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[49] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[50] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[51] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[52] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[53] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[54] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[55] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[56] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[57] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[58] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[59] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[60] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[61] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[62] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[63] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[64] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[65] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[66] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[67] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[68] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[69] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[70] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[71] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[72] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[73] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[74] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[75] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[76] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[77] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[78] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[79] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[80] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[81] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[82] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[83] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[84] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[85] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[86] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[87] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[88] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[89] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[90] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[91] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[92] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[93] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[94] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[95] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[96] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[97] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[98] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[99] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[100] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[101] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[102] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[103] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[104] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[105] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[106] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[107] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[108] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[109] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[110] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[111] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[112] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[113] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[114] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[115] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[116] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[117] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[118] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[119] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[120] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[121] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[122] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[123] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[124] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[125] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[126] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail[127] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[0] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[1] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[2] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[3] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[4] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[5] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[6] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[7] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[8] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[9] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[10] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[11] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[12] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[13] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[14] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[15] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[16] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[17] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[18] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[19] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[20] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[21] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[22] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[23] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[24] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[25] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[26] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[27] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[28] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[29] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[30] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[31] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[32] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[33] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[34] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[35] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[36] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[37] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[38] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[39] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[40] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[41] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[42] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[43] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[44] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[45] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[46] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[47] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[48] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[49] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[50] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[51] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[52] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[53] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[54] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[55] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[56] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[57] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[58] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[59] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[60] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[61] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[62] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[63] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[64] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[65] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[66] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[67] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[68] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[69] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[70] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[71] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[72] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[73] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[74] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[75] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[76] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[77] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[78] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[79] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[80] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[81] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[82] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[83] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[84] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[85] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[86] = 3U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[87] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[88] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[89] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[90] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[91] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[92] = 1U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[93] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[94] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[95] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[96] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[97] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[98] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[99] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[100] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[101] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[102] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[103] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[104] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[105] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[106] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[107] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[108] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[109] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[110] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[111] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[112] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[113] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[114] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[115] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[116] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[117] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[118] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[119] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[120] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[121] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[122] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[123] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[124] = 2U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[125] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[126] = 0U;
    __Vtable2_SPIAdapterPRTL___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount[127] = 0U;
}
