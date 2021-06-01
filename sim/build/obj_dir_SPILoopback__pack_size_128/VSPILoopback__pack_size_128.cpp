// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPILoopback__pack_size_128.h for the primary calling header

#include "VSPILoopback__pack_size_128.h"
#include "VSPILoopback__pack_size_128__Syms.h"

//==========

void VSPILoopback__pack_size_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPILoopback__pack_size_128::eval\n"); );
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPILoopback/SPILoopback.v", 116, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPILoopback__pack_size_128::_eval_initial_loop(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPILoopback/SPILoopback.v", 116, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPILoopback__pack_size_128::_combo__TOP__1(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_combo__TOP__1\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->to_device[0U] = vlTOPp->from_master[0U];
    vlTOPp->to_device[1U] = vlTOPp->from_master[1U];
    vlTOPp->to_device[2U] = vlTOPp->from_master[2U];
    vlTOPp->to_device[3U] = vlTOPp->from_master[3U];
    if (vlTOPp->loop_en) {
        vlTOPp->to_master[0U] = ((IData)(vlTOPp->loop_en)
                                  ? vlTOPp->from_master[0U]
                                  : 0U);
        vlTOPp->to_master[1U] = ((IData)(vlTOPp->loop_en)
                                  ? vlTOPp->from_master[1U]
                                  : 0U);
        vlTOPp->to_master[2U] = ((IData)(vlTOPp->loop_en)
                                  ? vlTOPp->from_master[2U]
                                  : 0U);
        vlTOPp->to_master[3U] = ((IData)(vlTOPp->loop_en)
                                  ? vlTOPp->from_master[3U]
                                  : 0U);
    } else {
        vlTOPp->to_master[0U] = vlTOPp->from_device[0U];
        vlTOPp->to_master[1U] = vlTOPp->from_device[1U];
        vlTOPp->to_master[2U] = vlTOPp->from_device[2U];
        vlTOPp->to_master[3U] = vlTOPp->from_device[3U];
    }
}

void VSPILoopback__pack_size_128::_eval(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_eval\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VSPILoopback__pack_size_128::_change_request(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_change_request\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPILoopback__pack_size_128::_change_request_1(VSPILoopback__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_change_request_1\n"); );
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPILoopback__pack_size_128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPILoopback__pack_size_128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((loop_en & 0xfeU))) {
        Verilated::overWidthError("loop_en");}
    if (VL_UNLIKELY((serve & 0xfeU))) {
        Verilated::overWidthError("serve");}
}
#endif  // VL_DEBUG
