// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIQueue__pack_size_128__num_entries_4.h for the primary calling header

#include "VSPIQueue__pack_size_128__num_entries_4.h"
#include "VSPIQueue__pack_size_128__num_entries_4__Syms.h"

//==========

void VSPIQueue__pack_size_128__num_entries_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIQueue__pack_size_128__num_entries_4::eval\n"); );
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIQueue/SPIQueue.v", 360, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIQueue__pack_size_128__num_entries_4::_eval_initial_loop(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIQueue/SPIQueue.v", 360, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIQueue__pack_size_128__num_entries_4::_sequent__TOP__1(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_sequent__TOP__1\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v2;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v4;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v6;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v2;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v4;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v6;
    CData/*0:0*/ __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7;
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[4];
    WData/*127:0*/ __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[4];
    // Body
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v0 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v2 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v4 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v6 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v0 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v2 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v4 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v6 = 0U;
    __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7 = 0U;
    if (vlTOPp->reset) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send = 0U;
    } else {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer 
            = (3U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next));
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer 
            = (3U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next));
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv 
            = (7U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next));
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send 
            = (7U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next));
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v0 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en) 
             & (0U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[0U] 
                = vlTOPp->recv_msg[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[1U] 
                = vlTOPp->recv_msg[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[2U] 
                = vlTOPp->recv_msg[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[3U] 
                = vlTOPp->recv_msg[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v2 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en) 
             & (1U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[0U] 
                = vlTOPp->recv_msg[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[1U] 
                = vlTOPp->recv_msg[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[2U] 
                = vlTOPp->recv_msg[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[3U] 
                = vlTOPp->recv_msg[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v4 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en) 
             & (2U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[0U] 
                = vlTOPp->recv_msg[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[1U] 
                = vlTOPp->recv_msg[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[2U] 
                = vlTOPp->recv_msg[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[3U] 
                = vlTOPp->recv_msg[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v6 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en) 
             & (3U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[0U] 
                = vlTOPp->recv_msg[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[1U] 
                = vlTOPp->recv_msg[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[2U] 
                = vlTOPp->recv_msg[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[3U] 
                = vlTOPp->recv_msg[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v0 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en) 
             & (0U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[0U] 
                = vlTOPp->from_master[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[1U] 
                = vlTOPp->from_master[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[2U] 
                = vlTOPp->from_master[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[3U] 
                = vlTOPp->from_master[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v2 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en) 
             & (1U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[0U] 
                = vlTOPp->from_master[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[1U] 
                = vlTOPp->from_master[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[2U] 
                = vlTOPp->from_master[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[3U] 
                = vlTOPp->from_master[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v4 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en) 
             & (2U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[0U] 
                = vlTOPp->from_master[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[1U] 
                = vlTOPp->from_master[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[2U] 
                = vlTOPp->from_master[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[3U] 
                = vlTOPp->from_master[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5 = 1U;
        }
    }
    if (vlTOPp->reset) {
        __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v6 = 1U;
    } else {
        if (((IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en) 
             & (3U == (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))) {
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[0U] 
                = vlTOPp->from_master[0U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[1U] 
                = vlTOPp->from_master[1U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[2U] 
                = vlTOPp->from_master[2U];
            __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[3U] 
                = vlTOPp->from_master[3U];
            __Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7 = 1U;
        }
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v0) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v1[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v2) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v3[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v4) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v5[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v6) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile__v7[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v0) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v1[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v2) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v3[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v4) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v5[3U];
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v6) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][0U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][1U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][2U] = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][3U] = 0U;
    }
    if (__Vdlyvset__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][0U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[0U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][1U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[1U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][2U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[2U];
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3U][3U] 
            = __Vdlyvval__SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile__v7[3U];
    }
    vlTOPp->recv_rdy = (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv));
    vlTOPp->send_val = (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send));
    vlTOPp->to_master[0U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][0U];
    vlTOPp->to_master[1U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][1U];
    vlTOPp->to_master[2U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][2U];
    vlTOPp->to_master[3U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer][3U];
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next)));
    vlTOPp->send_msg[0U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][0U];
    vlTOPp->send_msg[1U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][1U];
    vlTOPp->send_msg[2U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][2U];
    vlTOPp->send_msg[3U] = vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile
        [vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer][3U];
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer_counter__DOT__count_next)));
}

VL_INLINE_OPT void VSPIQueue__pack_size_128__num_entries_4::_combo__TOP__3(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_combo__TOP__3\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en 
        = ((IData)(vlTOPp->recv_val) & (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en 
        = ((IData)(vlTOPp->seize) & (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en 
        = ((IData)(vlTOPp->send_rdy) & (0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send)));
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en 
        = (((IData)(vlTOPp->serve) & (~ (IData)(vlTOPp->hard_msg))) 
           & (4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send)));
    if (vlTOPp->reset) {
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer_counter__DOT__count_next = 0U;
        vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer_counter__DOT__count_next = 0U;
    } else {
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
    vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer_counter__DOT__count_next 
        = ((IData)(vlTOPp->reset) ? 0U : (3U & ((1U 
                                                 & ((~ (IData)(vlTOPp->reset)) 
                                                    & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))))
                                                 ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer)
                                                 : 
                                                (((~ (IData)(vlTOPp->reset)) 
                                                  & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer))
                                                  : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer)))));
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

void VSPIQueue__pack_size_128__num_entries_4::_eval(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_eval\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIQueue__pack_size_128__num_entries_4::_change_request(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_change_request\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIQueue__pack_size_128__num_entries_4::_change_request_1(VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_change_request_1\n"); );
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIQueue__pack_size_128__num_entries_4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIQueue__pack_size_128__num_entries_4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((hard_msg & 0xfeU))) {
        Verilated::overWidthError("hard_msg");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((seize & 0xfeU))) {
        Verilated::overWidthError("seize");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
    if (VL_UNLIKELY((serve & 0xfeU))) {
        Verilated::overWidthError("serve");}
}
#endif  // VL_DEBUG
