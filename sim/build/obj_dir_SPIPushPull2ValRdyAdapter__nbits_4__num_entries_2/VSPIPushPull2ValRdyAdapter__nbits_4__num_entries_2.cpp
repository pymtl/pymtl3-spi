// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2.h for the primary calling header

#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2.h"
#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms.h"

//==========

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::eval\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__pickled.v", 319, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_eval_initial_loop(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__pickled.v", 319, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_combo__TOP__1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_combo__TOP__1\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwdata[0U] 
        = vlTOPp->recv___05Fmsg;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwdata[0U] 
        = (3U & (IData)(vlTOPp->pull___05Fmsg));
}

VL_INLINE_OPT void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_sequent__TOP__3(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_sequent__TOP__3\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    if (vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx1 = (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | ((((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_deq_en) 
                                                & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable1_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable1_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable1_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount
            [__Vtableidx1];
    }
    __Vtableidx2 = (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((((IData)(vlTOPp->send___05Fen) 
                                                 & (IData)(vlTOPp->send___05Frdy)) 
                                                & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    if ((1U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable2_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head
            [__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable2_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail
            [__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable2_SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount
            [__Vtableidx2];
    }
    if (__Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    if (__Vdlyvset__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__tail;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__head;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->push___05Fmsg = ((0xcU & (IData)(vlTOPp->push___05Fmsg)) 
                             | vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Frdata
                             [0U]);
    vlTOPp->send___05Fmsg = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_combo__TOP__4(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_combo__TOP__4\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__wdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwdata
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__wdata[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwdata
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fdeq_rdy 
        = ((~ (IData)(vlTOPp->reset)) & (0U < (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fenq_rdy 
        = ((~ (IData)(vlTOPp->reset)) & (2U > (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fdeq_rdy 
        = ((~ (IData)(vlTOPp->reset)) & (0U < (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount)));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fenq_rdy 
        = ((~ (IData)(vlTOPp->reset)) & (2U > (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount)));
    vlTOPp->recv___05Frdy = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fenq_rdy;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__enq_xfer 
        = (((IData)(vlTOPp->recv___05Fen) & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fenq_rdy)) 
           & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fenq_rdy));
    vlTOPp->send___05Fen = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fdeq_rdy;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_enq_en 
        = (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fenq_rdy) 
            & ((IData)(vlTOPp->pull___05Fmsg) >> 3U)) 
           & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwen[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl__DOT__enq_xfer;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__open_entries 
        = (1U > (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fcount));
    vlTOPp->push___05Fmsg = ((0xbU & (IData)(vlTOPp->push___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fenq_rdy) 
                                 & ((~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_enq_en)) 
                                    | (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__open_entries))) 
                                << 2U));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_deq_en 
        = ((((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__ctrl___05Fdeq_rdy) 
             & ((IData)(vlTOPp->pull___05Fmsg) >> 2U)) 
            & (IData)(vlTOPp->push___05Fen)) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->push___05Fmsg = ((7U & (IData)(vlTOPp->push___05Fmsg)) 
                             | ((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_deq_en) 
                                << 3U));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__enq_xfer 
        = ((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_enq_en) 
           & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl___05Fenq_rdy));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT____Vcellinp__queue__wen[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__cm_q__DOT__dpath__DOT__queue___05Fwen
        [0U];
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwen[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__ctrl__DOT__enq_xfer;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT____Vcellinp__queue__wen[0U] 
        = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_2__DOT__mc_q__DOT__dpath__DOT__queue___05Fwen
        [0U];
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_eval(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_eval\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_change_request(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_change_request\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_change_request_1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_change_request_1\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((pull___05Fen & 0xfeU))) {
        Verilated::overWidthError("pull__en");}
    if (VL_UNLIKELY((push___05Fen & 0xfeU))) {
        Verilated::overWidthError("push__en");}
    if (VL_UNLIKELY((recv___05Fen & 0xfeU))) {
        Verilated::overWidthError("recv__en");}
    if (VL_UNLIKELY((recv___05Fmsg & 0xfcU))) {
        Verilated::overWidthError("recv__msg");}
    if (VL_UNLIKELY((send___05Frdy & 0xfeU))) {
        Verilated::overWidthError("send__rdy");}
}
#endif  // VL_DEBUG
