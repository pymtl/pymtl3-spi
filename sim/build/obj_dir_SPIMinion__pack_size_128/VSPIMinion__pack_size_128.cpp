// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSPIMinion__pack_size_128.h for the primary calling header

#include "VSPIMinion__pack_size_128.h"
#include "VSPIMinion__pack_size_128__Syms.h"

//==========

void VSPIMinion__pack_size_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSPIMinion__pack_size_128::eval\n"); );
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIMinion/SPIMinion.v", 204, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSPIMinion__pack_size_128::_eval_initial_loop(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPI_pymtl2/MinionModules/SPIMinion/SPIMinion.v", 204, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSPIMinion__pack_size_128::_sequent__TOP__1(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_sequent__TOP__1\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q;
    CData/*2:0*/ __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q;
    WData/*127:0*/ __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[4];
    WData/*127:0*/ __Vtemp1[4];
    // Body
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q;
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q;
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U];
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U];
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U];
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
        = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U];
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q 
        = ((6U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                  << 1U)) | (IData)(vlTOPp->sclk));
    __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q 
        = ((6U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                  << 1U)) | (IData)(vlTOPp->cs));
    vlTOPp->serve = ((~ (IData)(vlTOPp->reset)) & (1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                                       >> 1U))));
    if (((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                       >> 1U))) & (~ ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                      >> 1U)))) {
        __Vtemp1[1U] = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[0U] 
                               >> 0x1fU)) | (0xfffffffeU 
                                             & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[1U] 
                                                << 1U)));
        __Vtemp1[2U] = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[1U] 
                               >> 0x1fU)) | (0xfffffffeU 
                                             & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[2U] 
                                                << 1U)));
        __Vtemp1[3U] = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[2U] 
                               >> 0x1fU)) | (0xfffffffeU 
                                             & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[3U] 
                                                << 1U)));
        vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[0U] 
            = ((0xfffffffeU & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[0U] 
                               << 1U)) | (IData)(vlTOPp->mosi));
        vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[1U] 
            = __Vtemp1[1U];
        vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[2U] 
            = __Vtemp1[2U];
        vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[3U] 
            = __Vtemp1[3U];
    }
    if (vlTOPp->seize) {
        __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
            = vlTOPp->from_device[0U];
        __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
            = vlTOPp->from_device[1U];
        __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
            = vlTOPp->from_device[2U];
        __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
            = vlTOPp->from_device[3U];
    } else {
        if (((~ (IData)(vlTOPp->seize)) & (2U == (3U 
                                                  & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                                     >> 1U))))) {
            __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
                = (0xfffffffeU & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
                                  << 1U));
            __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
                = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
                                           << 1U)));
            __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
                = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
                                           << 1U)));
            __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
                = ((1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
                          >> 0x1fU)) | (0xfffffffeU 
                                        & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
                                           << 1U)));
        }
    }
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q;
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U] 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[0U];
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U] 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[1U];
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U] 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[2U];
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U];
    vlTOPp->to_device[0U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[0U];
    vlTOPp->to_device[1U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[1U];
    vlTOPp->to_device[2U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[2U];
    vlTOPp->to_device[3U] = vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out[3U];
    vlTOPp->miso = (1U & (vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out[3U] 
                          >> 0x1fU));
    vlTOPp->seize = ((~ (IData)(vlTOPp->reset)) & (2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                                       >> 1U))));
    vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q 
        = __Vdly__SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q;
}

void VSPIMinion__pack_size_128::_eval(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_eval\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSPIMinion__pack_size_128::_change_request(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_change_request\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSPIMinion__pack_size_128::_change_request_1(VSPIMinion__pack_size_128__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_change_request_1\n"); );
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSPIMinion__pack_size_128::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSPIMinion__pack_size_128::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
    if (VL_UNLIKELY((mosi & 0xfeU))) {
        Verilated::overWidthError("mosi");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sclk & 0xfeU))) {
        Verilated::overWidthError("sclk");}
}
#endif  // VL_DEBUG
