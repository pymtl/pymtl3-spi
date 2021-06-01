// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIHardbits__pack_size_128__hard_bits_4.h for the primary calling header

#include "VSPIHardbits__pack_size_128__hard_bits_4.h"
#include "VSPIHardbits__pack_size_128__hard_bits_4__Syms.h"

//==========

void VSPIHardbits__pack_size_128__hard_bits_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIHardbits__pack_size_128__hard_bits_4::eval\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIHardbits/SPIHardbits.v", 85, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIHardbits__pack_size_128__hard_bits_4::_eval_initial_loop(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIHardbits/SPIHardbits.v", 85, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIHardbits__pack_size_128__hard_bits_4::_combo__TOP__1(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_combo__TOP__1\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->to_device[0U] = vlTOPp->from_master[0U];
    vlTOPp->to_device[1U] = vlTOPp->from_master[1U];
    vlTOPp->to_device[2U] = vlTOPp->from_master[2U];
    vlTOPp->to_device[3U] = vlTOPp->from_master[3U];
    vlTOPp->to_master[0U] = vlTOPp->from_device[0U];
    vlTOPp->to_master[1U] = vlTOPp->from_device[1U];
    vlTOPp->to_master[2U] = vlTOPp->from_device[2U];
    vlTOPp->to_master[3U] = vlTOPp->from_device[3U];
    vlTOPp->hard_msg = (1U & (vlTOPp->from_master[3U] 
                              >> 0x1fU));
}

VL_INLINE_OPT void VSPIHardbits__pack_size_128__hard_bits_4::_sequent__TOP__3(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_sequent__TOP__3\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->reset) | ((vlTOPp->from_master[3U] 
                                    >> 0x1fU) & (IData)(vlTOPp->serve)))) {
        vlTOPp->detected_bits = ((IData)(vlTOPp->reset)
                                  ? 0U : (0xfU & (vlTOPp->from_master[3U] 
                                                  >> 0x1bU)));
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::_eval(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_eval\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIHardbits__pack_size_128__hard_bits_4::_change_request(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_change_request\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIHardbits__pack_size_128__hard_bits_4::_change_request_1(VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_change_request_1\n"); );
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIHardbits__pack_size_128__hard_bits_4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIHardbits__pack_size_128__hard_bits_4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((serve & 0xfeU))) {
        Verilated::overWidthError("serve");}
}
#endif  // VL_DEBUG
