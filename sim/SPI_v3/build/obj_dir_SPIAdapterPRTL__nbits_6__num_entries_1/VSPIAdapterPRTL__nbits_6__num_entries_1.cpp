// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterPRTL__nbits_6__num_entries_1.h for the primary calling header

#include "VSPIAdapterPRTL__nbits_6__num_entries_1.h"
#include "VSPIAdapterPRTL__nbits_6__num_entries_1__Syms.h"

//==========

void VSPIAdapterPRTL__nbits_6__num_entries_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIAdapterPRTL__nbits_6__num_entries_1::eval\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPIAdapterPRTL__nbits_6__num_entries_1__pickled.v", 138, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIAdapterPRTL__nbits_6__num_entries_1::_eval_initial_loop(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPIAdapterPRTL__nbits_6__num_entries_1__pickled.v", 138, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIAdapterPRTL__nbits_6__num_entries_1::_sequent__TOP__1(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_sequent__TOP__1\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full;
    CData/*0:0*/ __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
    // Body
    __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full;
    __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full 
        = vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
    __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->recv___05Fval) 
                                          & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full))) 
                                         | ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full) 
                                            & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_send_rdy)))));
    if (((IData)(vlTOPp->recv___05Fval) & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)))) {
        vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry 
            = vlTOPp->recv___05Fmsg;
    }
    __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_recv_val) 
                                          & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full))) 
                                         | ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full) 
                                            & (~ (IData)(vlTOPp->send___05Frdy)))));
    if (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_recv_val) 
         & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full)))) {
        vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry 
            = (0xfU & (IData)(vlTOPp->push___05Fmsg));
    }
    vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full 
        = __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full;
    vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full 
        = __Vdly__SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
    vlTOPp->recv___05Frdy = (1U & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)));
    vlTOPp->send___05Fmsg = vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry;
    vlTOPp->send___05Fval = vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full;
}

VL_INLINE_OPT void VSPIAdapterPRTL__nbits_6__num_entries_1::_combo__TOP__3(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_combo__TOP__3\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_recv_val 
        = (((IData)(vlTOPp->push___05Fmsg) >> 5U) & (IData)(vlTOPp->push___05Fen));
    vlTOPp->pull___05Fmsg = ((0x2fU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (0x10U & (((~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full)) 
                                          & (~ (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__mc_recv_val))) 
                                         << 4U)));
    vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_send_rdy 
        = (((IData)(vlTOPp->push___05Fmsg) >> 4U) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->pull___05Fmsg = ((0x1fU & (IData)(vlTOPp->pull___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_send_rdy) 
                                 & (IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)) 
                                << 5U));
    vlTOPp->pull___05Fmsg = ((0x30U & (IData)(vlTOPp->pull___05Fmsg)) 
                             | ((IData)(vlTOPp->SPIAdapterPRTL___05Fnbits_6___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry) 
                                & ((0xeU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->pull___05Fmsg) 
                                                           >> 5U)))) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlTOPp->pull___05Fmsg) 
                                            >> 5U)))));
}

void VSPIAdapterPRTL__nbits_6__num_entries_1::_eval(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_eval\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIAdapterPRTL__nbits_6__num_entries_1::_change_request(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_change_request\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIAdapterPRTL__nbits_6__num_entries_1::_change_request_1(VSPIAdapterPRTL__nbits_6__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_change_request_1\n"); );
    VSPIAdapterPRTL__nbits_6__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIAdapterPRTL__nbits_6__num_entries_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterPRTL__nbits_6__num_entries_1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((pull___05Fen & 0xfeU))) {
        Verilated::overWidthError("pull__en");}
    if (VL_UNLIKELY((push___05Fen & 0xfeU))) {
        Verilated::overWidthError("push__en");}
    if (VL_UNLIKELY((recv___05Fmsg & 0xf0U))) {
        Verilated::overWidthError("recv__msg");}
    if (VL_UNLIKELY((recv___05Fval & 0xfeU))) {
        Verilated::overWidthError("recv__val");}
    if (VL_UNLIKELY((send___05Frdy & 0xfeU))) {
        Verilated::overWidthError("send__rdy");}
}
#endif  // VL_DEBUG
