// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1.h for the primary calling header

#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1.h"
#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms.h"

//==========

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::eval\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__pickled.v", 137, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_initial_loop(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__pickled.v", 137, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_sequent__TOP__1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_sequent__TOP__1\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q___05Fenq___05Fen) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry 
            = vlTOPp->recv___05Fmsg;
    }
    if (vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en) {
        vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry 
            = (3U & (IData)(vlTOPp->pull___05Fmsg));
    }
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_deq_en)) 
                                         & ((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q___05Fenq___05Fen) 
                                            | (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full))));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->send___05Fen) 
                                             & (IData)(vlTOPp->send___05Frdy))) 
                                         & ((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en) 
                                            | (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full))));
    vlTOPp->push___05Fmsg = ((0xcU & (IData)(vlTOPp->push___05Fmsg)) 
                             | (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry));
    vlTOPp->send___05Fmsg = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry;
}

VL_INLINE_OPT void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_combo__TOP__3(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_combo__TOP__3\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full))));
    vlTOPp->send___05Fen = ((~ (IData)(vlTOPp->reset)) 
                            & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q___05Fenq___05Frdy 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full))));
    vlTOPp->recv___05Frdy = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy;
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q___05Fenq___05Fen 
        = ((IData)(vlTOPp->recv___05Fen) & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en 
        = (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q___05Fenq___05Frdy) 
            & ((IData)(vlTOPp->pull___05Fmsg) >> 3U)) 
           & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->push___05Fmsg = ((0xbU & (IData)(vlTOPp->push___05Fmsg)) 
                             | (((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q___05Fenq___05Frdy) 
                                 & (~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en))) 
                                << 2U));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_deq_en 
        = (((((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full)) 
             & ((IData)(vlTOPp->pull___05Fmsg) >> 2U)) 
            & (IData)(vlTOPp->push___05Fen)) & (IData)(vlTOPp->pull___05Fen));
    vlTOPp->push___05Fmsg = ((7U & (IData)(vlTOPp->push___05Fmsg)) 
                             | ((IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_deq_en) 
                                << 3U));
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_change_request(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_change_request\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_change_request_1(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_change_request_1\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_debug_assertions\n"); );
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
