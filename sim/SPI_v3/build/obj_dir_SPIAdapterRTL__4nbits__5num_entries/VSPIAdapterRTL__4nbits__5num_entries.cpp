// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIAdapterRTL__4nbits__5num_entries.h for the primary calling header

#include "VSPIAdapterRTL__4nbits__5num_entries.h"
#include "VSPIAdapterRTL__4nbits__5num_entries__Syms.h"

//==========

void VSPIAdapterRTL__4nbits__5num_entries::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIAdapterRTL__4nbits__5num_entries::eval\n"); );
    VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPI_v3/components/SPIAdapterVRTL.v", 128, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIAdapterRTL__4nbits__5num_entries::_eval_initial_loop(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPI_v3/components/SPIAdapterVRTL.v", 128, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIAdapterRTL__4nbits__5num_entries::_combo__TOP__2(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_combo__TOP__2\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_send_rdy 
        = ((IData)(vlTOPp->push_msg_val_rd) & (IData)(vlTOPp->pull_en));
    vlTOPp->pull_msg_val = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_send_rdy) 
                            & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT____Vcellout__v__pull_msg_data 
        = (3U & ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__send_msg) 
                 & (- (IData)((IData)(vlTOPp->pull_msg_val)))));
    vlTOPp->pull_msg_data = (3U & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT____Vcellout__v__pull_msg_data));
}

VL_INLINE_OPT void VSPIAdapterRTL__4nbits__5num_entries::_sequent__TOP__3(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_sequent__TOP__3\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count;
    CData/*2:0*/ __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count;
    // Body
    __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count 
        = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count;
    __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count 
        = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count;
    if (vlTOPp->reset) {
        __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count = 0U;
    } else {
        if (((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__recv_xfer) 
             & (~ (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__send_xfer)))) {
            __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count)));
        } else {
            if (((~ (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__recv_xfer)) 
                 & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__send_xfer))) {
                __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count 
                    = (7U & ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count = 0U;
    } else {
        if (((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__recv_xfer) 
             & (~ (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__send_xfer)))) {
            __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count)));
        } else {
            if (((~ (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__recv_xfer)) 
                 & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__send_xfer))) {
                __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count 
                    = (7U & ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count) 
                             - (IData)(1U)));
            }
        }
    }
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count 
        = __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count;
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count 
        = __Vdly__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count;
}

VL_INLINE_OPT void VSPIAdapterRTL__4nbits__5num_entries::_combo__TOP__4(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_combo__TOP__4\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val 
        = (0U < (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__send_xfer 
        = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val) 
           & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_send_rdy));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_recv_rdy 
        = (5U > (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__cm_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q__DOT__genblk2__DOT__recv_xfer 
        = ((IData)(vlTOPp->recv_val) & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_recv_rdy));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_send_val 
        = (0U < (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__send_xfer 
        = ((IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_send_val) 
           & (IData)(vlTOPp->send_rdy));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_recv_rdy 
        = (5U > (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT____Vcellout__mc_q__count));
    vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q__DOT__genblk2__DOT__recv_xfer 
        = (((IData)(vlTOPp->push_msg_val_wrt) & (IData)(vlTOPp->push_en)) 
           & (IData)(vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_recv_rdy));
    vlTOPp->recv_rdy = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_recv_rdy;
    vlTOPp->send_val = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_send_val;
    vlTOPp->pull_msg_spc = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__mc_q_recv_rdy;
}

void VSPIAdapterRTL__4nbits__5num_entries::_eval(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_eval\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIAdapterRTL__4nbits__5num_entries::_change_request(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_change_request\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIAdapterRTL__4nbits__5num_entries::_change_request_1(VSPIAdapterRTL__4nbits__5num_entries__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_change_request_1\n"); );
    VSPIAdapterRTL__4nbits__5num_entries* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val ^ vlTOPp->__Vchglast__TOP__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val));
    VL_DEBUG_IF( if(__req && ((vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val ^ vlTOPp->__Vchglast__TOP__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val))) VL_DBG_MSGF("        CHANGE: SPI_v3/components/SPIAdapterVRTL.v:45: SPIAdapterRTL__4nbits__5num_entries.v.cm_q_send_val\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val 
        = vlTOPp->SPIAdapterRTL___05F4nbits___05F5num_entries__DOT__v__DOT__cm_q_send_val;
    return __req;
}

#ifdef VL_DEBUG
void VSPIAdapterRTL__4nbits__5num_entries::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIAdapterRTL__4nbits__5num_entries::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((pull_en & 0xfeU))) {
        Verilated::overWidthError("pull_en");}
    if (VL_UNLIKELY((push_en & 0xfeU))) {
        Verilated::overWidthError("push_en");}
    if (VL_UNLIKELY((push_msg_data & 0xfcU))) {
        Verilated::overWidthError("push_msg_data");}
    if (VL_UNLIKELY((push_msg_val_rd & 0xfeU))) {
        Verilated::overWidthError("push_msg_val_rd");}
    if (VL_UNLIKELY((push_msg_val_wrt & 0xfeU))) {
        Verilated::overWidthError("push_msg_val_wrt");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_msg & 0xfcU))) {
        Verilated::overWidthError("recv_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG
