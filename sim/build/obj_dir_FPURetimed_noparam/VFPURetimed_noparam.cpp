// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPURetimed_noparam.h for the primary calling header

#include "VFPURetimed_noparam.h"
#include "VFPURetimed_noparam__Syms.h"

//==========

void VFPURetimed_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFPURetimed_noparam::eval\n"); );
    VFPURetimed_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("SPI_pymtl2/Components/FPURetimed/FPURetimed.v", 1245, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFPURetimed_noparam::_eval_initial_loop(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("SPI_pymtl2/Components/FPURetimed/FPURetimed.v", 1245, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFPURetimed_noparam::_combo__TOP__2(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_combo__TOP__2\n"); );
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->req_rdy = vlTOPp->resp_rdy;
}

VL_INLINE_OPT void VFPURetimed_noparam::_sequent__TOP__3(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_sequent__TOP__3\n"); );
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp24[3];
    WData/*543:0*/ __Vtemp34[17];
    // Body
    vlTOPp->resp_val = vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass2;
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__out = vlTOPp->FPURetimed_noparam__DOT__v__DOT__out_pass2;
    if (vlTOPp->req_val) {
        vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
            = vlTOPp->req_msg[0U];
        vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
            = vlTOPp->req_msg[1U];
        vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
            = vlTOPp->req_msg[2U];
        vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
            = (0xfffffffU & vlTOPp->req_msg[3U]);
    }
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass2 
        = vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass1;
    vlTOPp->resp_msg[0U] = vlTOPp->FPURetimed_noparam__DOT__v__DOT__out;
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__out_pass2 
        = ((0x80000000U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                    >> 0x20U)) << 0x1fU)) 
           | ((0x7f800000U & ((((0x82U > (0x1ffU & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                            >> 0x17U))))
                                 ? 0U : ((IData)(1U) 
                                         + ((0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                        >> 0x17U))) 
                                            - (IData)(0x82U)))) 
                               | ((((3U == (3U & ((IData)(
                                                          (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                           >> 0x17U)) 
                                                  >> 7U))) 
                                    & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                               >> 0x1dU))) 
                                   | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf))
                                   ? 0xffU : 0U)) << 0x17U)) 
              | (0x7fffffU & ((0x82U > (0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                          >> 0x17U))))
                               ? ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig 
                                   >> 1U) >> (0x1fU 
                                              & ((IData)(1U) 
                                                 - 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                             >> 0x17U))))))
                               : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf)
                                   ? 0U : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                    >> 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                    >> 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                    >> 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                    >> 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                       >> 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                       >> 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                       >> 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                       >> 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                        >> 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                        >> 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                        >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                         << 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                         << 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                         << 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7f7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                         << 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7effffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                          << 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7dffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                          << 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7bffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                          << 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x77ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                          << 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x6fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                           << 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x5fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                           << 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                           << 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                    >> 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                    >> 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                    >> 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                    >> 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                       >> 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                       >> 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                       >> 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                       >> 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                        >> 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                        >> 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                        >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                         << 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                         << 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                         << 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7f7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                         << 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7effffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                          << 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7dffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                          << 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7bffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                          << 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x77ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                          << 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x6fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                           << 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x5fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                           << 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                           << 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                    >> 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (2U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                    >> 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                    >> 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (8U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                    >> 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                       >> 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                       >> 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                       >> 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                       >> 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                        >> 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                        >> 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                        >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7ff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                         << 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                         << 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7fbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                         << 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7f7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                         << 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7effffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                          << 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7dffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                          << 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x7bffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                          << 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x77ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                          << 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x6fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                           << 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x5fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                           << 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn 
        = ((0x3fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                           << 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass1 
        = vlTOPp->req_val;
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                      | ((0x200000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                          ? 0x15U : 0U)) | ((0x400000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0x16U
                                             : 0U)) 
                    | ((0x800000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                        ? 0x17U : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                      | ((0x200000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                          ? 0x15U : 0U)) | ((0x400000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0x16U
                                             : 0U)) 
                    | ((0x800000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                        ? 0x17U : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = (0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                      | ((0x200000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                          ? 0x15U : 0U)) | ((0x400000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0x16U
                                             : 0U)) 
                    | ((0x800000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                        ? 0x17U : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                        << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                  >> 0x17U))))
                       ? (0x1ffU ^ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))
                       : (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                    << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                              >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                   << 9U) 
                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                     >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                        << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                  >> 0x17U))))
                       ? (0x1ffU ^ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))
                       : (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                    << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                              >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                   << 9U) 
                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                     >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp 
        = (0x1ffU & (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                        << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                  >> 0x17U))))
                       ? (0x1ffU ^ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))
                       : (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                    << 9U) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                              >> 0x17U)))) 
                     + (0x80U | ((0U == (0xffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                   << 9U) 
                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                     >> 0x17U))))
                                  ? 2U : 1U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__exp 
        = ((0x1c0U & (((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp) 
                                     >> 7U))) ? (6U 
                                                 | (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])))
                        : (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                >> 0x17U)))) 
                            & (0U == (0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])))
                            ? 0U : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp) 
                                    >> 6U))) << 6U)) 
           | (0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__exp 
        = ((0x1c0U & (((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp) 
                                     >> 7U))) ? (6U 
                                                 | (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])))
                        : (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                >> 0x17U)))) 
                            & (0U == (0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])))
                            ? 0U : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp) 
                                    >> 6U))) << 6U)) 
           | (0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__exp 
        = ((0x1c0U & (((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp) 
                                     >> 7U))) ? (6U 
                                                 | (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])))
                        : (((0U == (0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                >> 0x17U)))) 
                            & (0U == (0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])))
                            ? 0U : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp) 
                                    >> 6U))) << 6U)) 
           | (0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
        = (((QData)((IData)((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__exp) 
                               << 0x17U) | (0x7fffffU 
                                            & ((0U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                     << 9U) 
                                                    | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                       >> 0x17U))))
                                                ? (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                    << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                   << 1U)
                                                : vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
        = (((QData)((IData)((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__exp) 
                               << 0x17U) | (0x7fffffU 
                                            & ((0U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                     << 9U) 
                                                    | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                       >> 0x17U))))
                                                ? (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                    << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                   << 1U)
                                                : vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
        = (((QData)((IData)((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__exp) 
                               << 0x17U) | (0x7fffffU 
                                            & ((0U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                     << 9U) 
                                                    | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                       >> 0x17U))))
                                                ? (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                    << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                   << 1U)
                                                : vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                  >> 0x17U)) >> 7U))) 
           & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                         >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
        = (((0U != (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                   >> 0x17U)) >> 6U))) 
            << 0x17U) | (0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                  >> 0x17U)) >> 7U))) 
           & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                         >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = (((0U == (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                   >> 0x17U)) >> 6U))) 
            | (0U == (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                     >> 0x17U)) >> 6U)))) 
           & (0U == (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                    >> 0x17U)) >> 6U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                  >> 0x17U)) >> 7U))) 
           & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                         >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = (((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                   >> 0x17U)) >> 7U))) 
            & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                       >> 0x1dU))) | ((3U == (3U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x17U)) 
                                               >> 7U))) 
                                      & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                 >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (1U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                          >> 0x20U)) ^ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                >> 0x20U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                                  >> 0x17U)))) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                                    >> 0x17U)))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | (0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                             << 2U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 2U)))) << 1U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x7bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 6U)))) << 2U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x77U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xaU)))) << 3U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x6fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0xeU)))) << 4U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x5fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (0xfU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                      >> 0x12U)))) 
              << 5U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC 
        = ((0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC)) 
           | ((IData)((0U != (7U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                    >> 0x16U)))) << 6U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | ((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                     >> 0x17U)) >> 7U))) 
              & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                         >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = (1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                 ^ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                            >> 0x20U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                        >> 0x17U))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
             | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
            | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
           | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = (((0U == (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                   >> 0x17U)) >> 6U))) 
            | (0U == (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                     >> 0x17U)) >> 6U)))) 
           | VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                  >> 0x17U)) >> 6U))) 
           & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum 
        = (0x3ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                      ? VL_EXTENDS_II(32,10, (0x1ffU 
                                              & (IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                         >> 0x17U))))
                      : (VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                         - (IData)(0x18U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(9,9,3, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c), 
                                   (7U & (~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                             >> 2U)))) 
                    >> 1U));
    __Vtemp23[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp23[1U] = ((0xffe00000U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                       ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                       : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                     << 0x15U)) | (IData)(
                                                          ((0x1fffffffffffffULL 
                                                            & (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                                           >> 0x20U)));
    __Vtemp23[2U] = (0x3fffU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                  : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp24, __Vtemp23, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp24[0U];
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp24[1U];
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x1fffU & __Vtemp24[2U]);
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut 
        = (0x3fU & (IData)((0x7ffffULL & (VL_SHIFTRS_QQI(33,33,5, vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c, 
                                                         (0x1fU 
                                                          & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                             >> 2U))) 
                                          >> 0xeU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (2U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x3bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (4U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x37U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (8U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x2fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut) 
                       << 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = ((0xfffffffeU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                            >> 2U)))) 
           | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
               ? ((7U == (7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
               : ((0U != (7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                  | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 2U)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | (0x7feU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                       >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
        = (0x1ffffffffffffULL & (((QData)((IData)((
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(
                                                                 (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                                  >> 0x17U)) 
                                                         >> 6U))) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec))))) 
                                  * (QData)((IData)(
                                                    (((0U 
                                                       != 
                                                       (7U 
                                                        & ((IData)(
                                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                                    >> 0x17U)) 
                                                           >> 6U))) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec)))))) 
                                 + (0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                           >> 1U))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState 
        = (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
            << 5U) | ((((((((7U == (7U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                  >> 0x1dU)))) 
                            & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                          >> 0x16U)))) 
                           | ((7U == (7U & (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                    >> 0x1dU)))) 
                              & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                            >> 0x16U))))) 
                          | ((7U == (7U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                   >> 0x1dU)))) 
                             & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                           >> 0x16U))))) 
                         | ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                              & (0U == (7U & ((IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                       >> 0x17U)) 
                                              >> 6U)))) 
                             | ((0U == (7U & ((IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                       >> 0x17U)) 
                                              >> 6U))) 
                                & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB))) 
                            | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                                 & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
                                & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                               & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                        | ((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                       << 4U) | ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                   | ((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                  << 3U) | (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                               | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                              | ((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                 & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                             << 2U) 
                                            | ((2U 
                                                & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                    | ((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                   << 1U)) 
                                               | ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                    & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                   | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                  | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                     & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = (1U & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 4U)) | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 5U) & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf 
        = (1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                  >> 5U) & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                            >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                        >> 1U))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                           >> 0x30U)))
                             ? ((IData)(1U) + ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                                << 0xfU) 
                                               | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                                  >> 0x11U)))
                             : ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                 << 0xfU) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                             >> 0x11U))) 
                           << 0x11U)) | (IData)((((0x1fffffffffffeULL 
                                                   & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                                      << 1U)) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                                        >> 1U))))) 
                                                 >> 0x20U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                       << 0xfU) | (
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                                   >> 0x11U)))
                       : ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                           << 0xfU) | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                       >> 0x11U))) 
                     >> 0xfU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((8U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                  ? (~ (((QData)((IData)(
                                                         vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                                          >> 9U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((0x80000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])
                                  ? (~ (((QData)((IData)(
                                                         vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                           >> 3U)))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0x1fffffffU & (IData)((0x1fffffffULL & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))) 
                                                   >> 0x15U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (0U != (8U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                           << 3U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 1U)))) << 1U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x7bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 5U)))) << 2U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x77U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 9U)))) << 3U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x6fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0xdU)))) << 4U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x5fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                      >> 0x11U)))) 
              << 5U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((IData)((0U != (7U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                    >> 0x15U)))) << 6U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0U != (3U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 2U))))) 
              << 1U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 4U))))) 
              << 2U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 6U))))) 
              << 3U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 8U))))) 
              << 4U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xaU))))) 
              << 5U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xcU))))) 
              << 6U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0xeU))))) 
              << 7U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x10U))))) 
              << 8U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x12U))))) 
              << 9U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x14U))))) 
              << 0xaU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x16U))))) 
              << 0xbU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x18U))))) 
              << 0xcU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1aU))))) 
              << 0xdU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ffbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1cU))))) 
              << 0xeU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3ff7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x1eU))))) 
              << 0xfU));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3feffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x20U))))) 
              << 0x10U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fdffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x22U))))) 
              << 0x11U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fbffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x24U))))) 
              << 0x12U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3f7ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x26U))))) 
              << 0x13U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3efffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x28U))))) 
              << 0x14U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3dfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2aU))))) 
              << 0x15U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3bfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2cU))))) 
              << 0x16U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x37fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x2eU))))) 
              << 0x17U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x2ffffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((IData)((0U != (3U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                            >> 0x30U))))) 
              << 0x18U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x1ffffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (0x2000000U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                     >> 0x32U)) << 0x19U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0U != (3U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 2U)))) << 1U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x7bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 4U)))) << 2U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x77U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 6U)))) << 3U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x6fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 8U)))) << 4U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x5fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((IData)((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                    >> 0xaU)))) << 5U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x19U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (2U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x17U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x15U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (8U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                    >> 0x13U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0x11U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xfU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xdU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                       >> 0xbU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 9U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 7U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                        >> 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         >> 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ffbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x4000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3ff7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x8000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                         << 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3feffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x10000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 7U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fdffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x20000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 9U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3fbffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x40000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xbU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3f7ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x80000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                          << 0xdU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3efffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x100000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0xfU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3dfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x200000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x11U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x3bfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x400000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x13U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x37fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x800000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                           << 0x15U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x2ffffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x1000000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x17U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = ((0x1ffffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           | (0x2000000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                            << 0x19U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                              ? 1U : 0U) | ((4U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 2U : 0U)) 
                           | ((8U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 3U : 0U)) | ((0x10U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 4U
                                               : 0U)) 
                         | ((0x20U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 5U : 0U)) | ((0x40U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 6U : 0U)) 
                       | ((0x80U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 7U : 0U)) | ((0x100U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                           ? 8U : 0U)) 
                     | ((0x200U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 9U : 0U)) | ((0x400U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                         ? 0xaU : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar 
        = (0x1fU & (((((((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                             | ((0x800U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 0xbU : 0U)) | ((0x1000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 0xcU
                                                   : 0U)) 
                           | ((0x2000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xdU : 0U)) | ((0x4000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xeU
                                                 : 0U)) 
                         | ((0x8000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xfU : 0U)) | ((0x10000U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0x10U
                                               : 0U)) 
                       | ((0x20000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x11U : 0U)) | ((0x40000U 
                                              & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x12U
                                              : 0U)) 
                     | ((0x80000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x13U : 0U)) | ((0x100000U 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x14U
                                            : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (0x1fU & (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                         | ((0x200000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0x15U : 0U)) | ((0x400000U 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                ? 0x16U
                                                : 0U)) 
                       | ((0x800000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0x17U : 0U)) | ((0x1000000U 
                                              & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                              ? 0x18U
                                              : 0U)) 
                     | ((0x2000000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x19U : 0U)) | ((0x4000000U 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x1aU
                                            : 0U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
        = (0x1fffffffU & (IData)((0x1fffffffULL & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                        << 1U))) 
                                                   >> 0x17U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut 
        = (0x3fU & (VL_SHIFTRS_III(17,17,4, vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c, 
                                   (0xfU & (~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                               >> 1U)))) 
                    >> 1U));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp 
        = (0x3ffU & ((4U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                      ? ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                         - (1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                  >> 3U))) : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                              - (0x3fU 
                                                 & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                    << 1U)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3eU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 5U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3dU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (2U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x3bU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (4U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    >> 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x37U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (8U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                    << 1U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x2fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x10U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 3U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask 
        = ((0x1fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)) 
           | (0x20U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut) 
                       << 5U)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp34, vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c, 
                   (0x1ffU & (~ VL_EXTENDS_II(9,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
        = (0x1ffffffU & ((__Vtemp34[4U] << 0x16U) | 
                         (__Vtemp34[3U] >> 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
        = ((0x7fffffeU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig 
                          >> 2U)) | ((0U != (7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig)) 
                                     | (0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                               & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffeU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x18U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffdU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (2U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffffbU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffff7U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (8U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                    >> 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffefU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffdfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffffbfU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffff7fU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                       >> 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffeffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffdffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fffbffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fff7ffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                        >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffefffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffdfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x2000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ffbfffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x4000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 4U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1ff7fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x8000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                         << 6U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1feffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x10000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 8U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fdffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x20000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xaU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1fbffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x40000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xcU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1f7ffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x80000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                          << 0xeU)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1efffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x100000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x10U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1dfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x200000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x12U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x1bfffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x400000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x14U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0x17fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x800000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                           << 0x16U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main) 
           | (0x1000000U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut 
                            << 0x18U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero 
        = (1U & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                   >> 5U) & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                             >> 1U)) | ((~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U)) 
                                        & (0U == (3U 
                                                  & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                     >> 0x19U))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
        = ((4U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
            ? ((0x7fffffeU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                              >> 2U)) | (1U & (((0U 
                                                 != 
                                                 (7U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig)) 
                                                | (0U 
                                                   != 
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                                    & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))) 
                                               | ((8U 
                                                   & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                                   ? 
                                                  (~ (IData)(
                                                             (0xffffffU 
                                                              == 
                                                              (0xffffffU 
                                                               & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                                     >> 1U))))))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (0x1ffffffU 
                                                    & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                        << 0x1fU) 
                                                       | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                          >> 1U))))))))
            : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig);
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & (((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                  & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf))) 
                 & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
        = (3U | ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main 
                  << 2U) | (4U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                  >> 0x18U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                 >> 3U) & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 4U)))) 
           | (0U != (7U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                           & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                              >> 1U)))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask 
        = ((~ (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
               >> 1U)) & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask);
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
           | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit)
                          ? (((IData)(1U) + ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                              | vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask) 
                                             >> 2U)) 
                             & (~ (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit) 
                                    & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra)))
                                    ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                       >> 1U) : 0U)))
                          : ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                              & (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask)) 
                             >> 2U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut 
        = (0x7fffffU & ((0x4000000U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                         ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                            >> 1U) : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))) 
                     + (0x3ffffffU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                      >> 0x18U))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U)));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf) 
           | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
        = (((QData)((IData)(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                              ? 0U : (1U & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 5U) 
                                              & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 5U)) 
                                                 & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                    >> 2U)) 
                                                & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                    >> 3U)))) 
                                            | (((~ 
                                                 ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                  >> 5U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                    >> 2U))) 
                                               & ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                       >> 0x19U))) 
                                                  & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                      >> 4U) 
                                                     ^ 
                                                     (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                      >> 0x13U))))))))) 
            << 0x20U) | (QData)((IData)(((0xff800000U 
                                          & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
                                                 & (~ 
                                                    (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero) 
                                                      | VL_GTS_III(1,32,32, 0x6bU, 
                                                                   VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                      ? 0x1c0U
                                                      : 0U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))) 
                                               | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                   ? 0x180U
                                                   : 0U)) 
                                              | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U)) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                  ? 0x400000U
                                                  : 0U) 
                                                | (((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero)) 
                                                    & VL_LTES_III(1,32,32, 0x6bU, 
                                                                  VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                    ? 
                                                   (0x400000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                    : 0U)) 
                                               | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                    & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero))) 
                                                   & VL_LTES_III(1,32,32, 0x6bU, 
                                                                 VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                                   ? 
                                                  (0xffbfffffU 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                                   : 0U)))))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf 
        = ((3U == (3U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                  >> 0x17U)) >> 7U))) 
           & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                         >> 0x1dU))));
    vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig 
        = (((0U != (7U & ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                   >> 0x17U)) >> 6U))) 
            << 0x17U) | (0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec)));
}

void VFPURetimed_noparam::_eval(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_eval\n"); );
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VFPURetimed_noparam::_change_request(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_change_request\n"); );
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFPURetimed_noparam::_change_request_1(VFPURetimed_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_change_request_1\n"); );
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFPURetimed_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPURetimed_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((req_val & 0xfeU))) {
        Verilated::overWidthError("req_val");}
    if (VL_UNLIKELY((resp_rdy & 0xfeU))) {
        Verilated::overWidthError("resp_rdy");}
}
#endif  // VL_DEBUG
