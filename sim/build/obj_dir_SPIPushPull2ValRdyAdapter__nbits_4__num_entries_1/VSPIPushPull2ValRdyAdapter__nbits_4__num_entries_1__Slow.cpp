// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1.h for the primary calling header

#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1.h"
#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms.h"

//==========

VL_CTOR_IMP(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1) {
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp = __VlSymsp = new VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms(this, name());
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::__Vconfigure(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::~VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_settle__TOP__2(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_settle__TOP__2\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->send___05Fmsg = vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry;
    vlTOPp->send___05Fen = ((~ (IData)(vlTOPp->reset)) 
                            & (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full));
    vlTOPp->push___05Fmsg = ((0xcU & (IData)(vlTOPp->push___05Fmsg)) 
                             | (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry));
    vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (~ (IData)(vlTOPp->SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full))));
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

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_initial(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_initial\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::final\n"); );
    // Variables
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_settle(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_eval_settle\n"); );
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_1::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    pull___05Fen = VL_RAND_RESET_I(1);
    pull___05Fmsg = VL_RAND_RESET_I(4);
    push___05Fen = VL_RAND_RESET_I(1);
    push___05Fmsg = VL_RAND_RESET_I(4);
    recv___05Fen = VL_RAND_RESET_I(1);
    recv___05Fmsg = VL_RAND_RESET_I(2);
    recv___05Frdy = VL_RAND_RESET_I(1);
    send___05Fen = VL_RAND_RESET_I(1);
    send___05Fmsg = VL_RAND_RESET_I(2);
    send___05Frdy = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_deq_en = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_enq_en = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q___05Fenq___05Fen = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q___05Fenq___05Frdy = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__entry = VL_RAND_RESET_I(2);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__cm_q__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q___05Fenq___05Frdy = VL_RAND_RESET_I(1);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__entry = VL_RAND_RESET_I(2);
    SPIPushPull2ValRdyAdapter___05Fnbits_4___05Fnum_entries_1__DOT__mc_q__DOT__q__DOT__full = VL_RAND_RESET_I(1);
}
