// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIQueue__pack_size_128__num_entries_4.h for the primary calling header

#include "VSPIQueue__pack_size_128__num_entries_4.h"
#include "VSPIQueue__pack_size_128__num_entries_4__Syms.h"

//==========
CData/*2:0*/ VSPIQueue__pack_size_128__num_entries_4::__Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[64];
CData/*2:0*/ VSPIQueue__pack_size_128__num_entries_4::__Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[64];

VL_CTOR_IMP(VSPIQueue__pack_size_128__num_entries_4) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = __VlSymsp = new VSPIQueue__pack_size_128__num_entries_4__Syms(this, name());
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSPIQueue__pack_size_128__num_entries_4::__Vconfigure(VSPIQueue__pack_size_128__num_entries_4__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSPIQueue__pack_size_128__num_entries_4::~VSPIQueue__pack_size_128__num_entries_4() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSPIQueue__pack_size_128__num_entries_4::_settle__TOP__2(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_settle__TOP__2\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->send_val = (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send));
    vlTOPp->recv_rdy = (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv));
    vlTOPp->send_msg[0U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][0U];
    vlTOPp->send_msg[1U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][1U];
    vlTOPp->send_msg[2U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][2U];
    vlTOPp->send_msg[3U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][3U];
    vlTOPp->to_master[0U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][0U];
    vlTOPp->to_master[1U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][1U];
    vlTOPp->to_master[2U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][2U];
    vlTOPp->to_master[3U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][3U];
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en 
        = ((IData)(vlTOPp->send_rdy) & (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en 
        = ((IData)(vlTOPp->recv_val) & (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en 
        = ((IData)(vlTOPp->seize) & (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en 
        = (((IData)(vlTOPp->serve) & (~ (IData)(vlTOPp->hard_msg))) 
           & (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send)));
    if (vlTOPp->reset) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next = 0U;
    } else {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next 
            = (3U & ((1U & ((~ (IData)(vlTOPp->reset)) 
                            & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))))
                      ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer)
                      : (((~ (IData)(vlTOPp->reset)) 
                          & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))
                          ? ((IData)(1U) + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer))
                          : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer))));
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next 
            = (3U & ((1U & ((~ (IData)(vlTOPp->reset)) 
                            & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en))))
                      ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)
                      : (((~ (IData)(vlTOPp->reset)) 
                          & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en))
                          ? ((IData)(1U) + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer))
                          : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer))));
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next 
            = (3U & ((1U & ((~ (IData)(vlTOPp->reset)) 
                            & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en))))
                      ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer)
                      : (((~ (IData)(vlTOPp->reset)) 
                          & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en))
                          ? ((IData)(1U) + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer))
                          : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer))));
    }
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv) 
                             << 3U) | (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en) 
                                        << 2U) | (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->reset))));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next 
        = vlTOPp->__Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send) 
                             << 3U) | (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en) 
                                        << 2U) | (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->reset))));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next 
        = vlTOPp->__Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next
        [vlTOPp->__Vtableidx1];
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer_counter__DOT__count_next 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & ((1U 
                                                 & ((~ (IData)(vlTOPp->reset)) 
                                                    & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en))))
                                                 ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)
                                                 : 
                                                (((~ (IData)(vlTOPp->reset)) 
                                                  & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer))
                                                  : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))));
}

void VSPIQueue__pack_size_128__num_entries_4::_eval_initial(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_eval_initial\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSPIQueue__pack_size_128__num_entries_4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::final\n"); );
    // Variables
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSPIQueue__pack_size_128__num_entries_4::_eval_settle(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_eval_settle\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSPIQueue__pack_size_128__num_entries_4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, from_master);
    hard_msg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, recv_msg);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    seize = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, send_msg);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    serve = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, to_master);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send = VL_RAND_RESET_I(3);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv = VL_RAND_RESET_I(3);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en = VL_RAND_RESET_I(1);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en = VL_RAND_RESET_I(1);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer = VL_RAND_RESET_I(2);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[__Vi0]);
    }}
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next = VL_RAND_RESET_I(3);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer_counter__DOT__count_next = VL_RAND_RESET_I(2);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next = VL_RAND_RESET_I(2);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en = VL_RAND_RESET_I(1);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en = VL_RAND_RESET_I(1);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer = VL_RAND_RESET_I(2);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(128, SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[__Vi0]);
    }}
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next = VL_RAND_RESET_I(3);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next = VL_RAND_RESET_I(2);
    SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next = VL_RAND_RESET_I(2);
    __Vtableidx1 = 0;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[0] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[1] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[2] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[3] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[4] = 1U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[5] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[6] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[7] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[8] = 1U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[9] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[10] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[11] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[12] = 2U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[13] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[14] = 1U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[15] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[16] = 2U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[17] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[18] = 1U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[19] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[20] = 3U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[21] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[22] = 2U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[23] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[24] = 3U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[25] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[26] = 2U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[27] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[28] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[29] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[30] = 3U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[31] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[32] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[33] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[34] = 3U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[35] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[36] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[37] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[38] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[39] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[40] = 5U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[41] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[42] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[43] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[44] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[45] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[46] = 5U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[47] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[48] = 6U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[49] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[50] = 5U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[51] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[52] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[53] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[54] = 6U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[55] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[56] = 7U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[57] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[58] = 6U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[59] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[60] = 4U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[61] = 0U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[62] = 7U;
    __Vtable1_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next[63] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[0] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[1] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[2] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[3] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[4] = 1U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[5] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[6] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[7] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[8] = 1U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[9] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[10] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[11] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[12] = 2U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[13] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[14] = 1U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[15] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[16] = 2U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[17] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[18] = 1U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[19] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[20] = 3U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[21] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[22] = 2U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[23] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[24] = 3U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[25] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[26] = 2U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[27] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[28] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[29] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[30] = 3U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[31] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[32] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[33] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[34] = 3U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[35] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[36] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[37] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[38] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[39] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[40] = 5U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[41] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[42] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[43] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[44] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[45] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[46] = 5U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[47] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[48] = 6U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[49] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[50] = 5U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[51] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[52] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[53] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[54] = 6U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[55] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[56] = 7U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[57] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[58] = 6U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[59] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[60] = 4U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[61] = 0U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[62] = 7U;
    __Vtable2_SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next[63] = 0U;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
