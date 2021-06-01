// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPURetimed_noparam__Syms.h"


void VFPURetimed_noparam::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFPURetimed_noparam::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp40[3];
    WData/*127:0*/ __Vtemp43[4];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgQData(oldp+0,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c),33);
            tracep->chgSData(oldp+2,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c),9);
            tracep->chgIData(oldp+3,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c),17);
            tracep->chgWData(oldp+4,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c),513);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+21,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg),124);
            tracep->chgIData(oldp+25,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]),32);
            tracep->chgIData(oldp+26,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]),32);
            tracep->chgIData(oldp+27,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]),32);
            tracep->chgIData(oldp+28,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__out),32);
            tracep->chgCData(oldp+29,(((0x10U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))) 
                                       | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(1,32,32, 0x6bU, 
                                                           VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))), 8U))) 
                                                   & ((0x4000000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                                       ? 
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 3U)
                                                       : 
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                       >> 2U))))) 
                                            << 1U) 
                                           | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(1,32,32, 0x6bU, 
                                                               VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                                    | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound)))))))),5);
            tracep->chgIData(oldp+30,(((0x80000000U 
                                        & ((IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                    >> 0x20U)) 
                                           << 0x1fU)) 
                                       | ((0x7f800000U 
                                           & ((((0x82U 
                                                 > 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                             >> 0x17U))))
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + 
                                                 ((0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                              >> 0x17U))) 
                                                  - (IData)(0x82U)))) 
                                               | ((((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(
                                                                 (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                  >> 0x17U)) 
                                                         >> 7U))) 
                                                    & (IData)(
                                                              (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                               >> 0x1dU))) 
                                                   | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf))
                                                   ? 0xffU
                                                   : 0U)) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & ((0x82U 
                                                 > 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                             >> 0x17U))))
                                                 ? 
                                                ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig 
                                                  >> 1U) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     - 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                 >> 0x17U))))))
                                                 : 
                                                ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf)
                                                  ? 0U
                                                  : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig)))))),32);
            tracep->chgIData(oldp+31,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__out_pass2),32);
            tracep->chgBit(oldp+32,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass1));
            tracep->chgBit(oldp+33,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass2));
            tracep->chgQData(oldp+34,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec),33);
            tracep->chgQData(oldp+36,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec),33);
            tracep->chgQData(oldp+38,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec),33);
            tracep->chgQData(oldp+40,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec),33);
            tracep->chgBit(oldp+42,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                           >> 0x1fU))));
            tracep->chgCData(oldp+43,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                 << 9U) 
                                                | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                   >> 0x17U)))),8);
            tracep->chgIData(oldp+44,((0x7fffffU & 
                                       vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])),23);
            tracep->chgBit(oldp+45,((0U == (0xffU & 
                                            ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                >> 0x17U))))));
            tracep->chgBit(oldp+46,((0U == (0x7fffffU 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]))));
            tracep->chgCData(oldp+47,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
            tracep->chgIData(oldp+48,((0x7fffffU & 
                                       ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                         << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                        << 1U))),23);
            tracep->chgSData(oldp+49,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp),9);
            tracep->chgBit(oldp+50,(((0U == (0xffU 
                                             & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                 << 9U) 
                                                | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                   >> 0x17U)))) 
                                     & (0U == (0x7fffffU 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])))));
            tracep->chgBit(oldp+51,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp) 
                                                  >> 7U)))));
            tracep->chgSData(oldp+52,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__exp),9);
            tracep->chgIData(oldp+53,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
            tracep->chgIData(oldp+54,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
            tracep->chgCData(oldp+55,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 1U : 0U)),5);
            tracep->chgCData(oldp+56,((0x1fU & (((2U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 1U
                                                  : 0U) 
                                                | ((4U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+57,((0x1fU & ((((2U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 1U
                                                   : 0U) 
                                                 | ((4U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 2U
                                                     : 0U)) 
                                                | ((8U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 3U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+58,((0x1fU & ((((
                                                   (2U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 1U
                                                    : 0U) 
                                                  | ((4U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 2U
                                                      : 0U)) 
                                                 | ((8U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 3U
                                                     : 0U)) 
                                                | ((0x10U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 4U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+59,((0x1fU & ((((
                                                   ((2U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 1U
                                                     : 0U) 
                                                   | ((4U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 2U
                                                       : 0U)) 
                                                  | ((8U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 3U
                                                      : 0U)) 
                                                 | ((0x10U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 4U
                                                     : 0U)) 
                                                | ((0x20U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 5U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+60,((0x1fU & ((((
                                                   (((2U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 1U
                                                      : 0U) 
                                                    | ((4U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 2U
                                                        : 0U)) 
                                                   | ((8U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 3U
                                                       : 0U)) 
                                                  | ((0x10U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 4U
                                                      : 0U)) 
                                                 | ((0x20U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 5U
                                                     : 0U)) 
                                                | ((0x40U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 6U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+61,((0x1fU & ((((
                                                   ((((2U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 1U
                                                       : 0U) 
                                                     | ((4U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 2U
                                                         : 0U)) 
                                                    | ((8U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 3U
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 4U
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 5U
                                                      : 0U)) 
                                                 | ((0x40U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 6U
                                                     : 0U)) 
                                                | ((0x80U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 7U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+62,((0x1fU & ((((
                                                   (((((2U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 1U
                                                        : 0U) 
                                                      | ((4U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 2U
                                                          : 0U)) 
                                                     | ((8U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 3U
                                                         : 0U)) 
                                                    | ((0x10U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 4U
                                                        : 0U)) 
                                                   | ((0x20U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 5U
                                                       : 0U)) 
                                                  | ((0x40U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 6U
                                                      : 0U)) 
                                                 | ((0x80U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 7U
                                                     : 0U)) 
                                                | ((0x100U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 8U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+63,((0x1fU & ((((
                                                   ((((((2U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 1U
                                                         : 0U) 
                                                       | ((4U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 2U
                                                           : 0U)) 
                                                      | ((8U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 3U
                                                          : 0U)) 
                                                     | ((0x10U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 4U
                                                         : 0U)) 
                                                    | ((0x20U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 5U
                                                        : 0U)) 
                                                   | ((0x40U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 6U
                                                       : 0U)) 
                                                  | ((0x80U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 7U
                                                      : 0U)) 
                                                 | ((0x100U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((0x200U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 9U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+64,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+65,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                | ((0x800U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0xbU
                                                    : 0U)))),5);
            tracep->chgCData(oldp+66,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                 | ((0x800U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xbU
                                                     : 0U)) 
                                                | ((0x1000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0xcU
                                                    : 0U)))),5);
            tracep->chgCData(oldp+67,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                  | ((0x800U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xbU
                                                      : 0U)) 
                                                 | ((0x1000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xcU
                                                     : 0U)) 
                                                | ((0x2000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0xdU
                                                    : 0U)))),5);
            tracep->chgCData(oldp+68,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                   | ((0x800U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xbU
                                                       : 0U)) 
                                                  | ((0x1000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xcU
                                                      : 0U)) 
                                                 | ((0x2000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xdU
                                                     : 0U)) 
                                                | ((0x4000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0xeU
                                                    : 0U)))),5);
            tracep->chgCData(oldp+69,((0x1fU & ((((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                    | ((0x800U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xbU
                                                        : 0U)) 
                                                   | ((0x1000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xcU
                                                       : 0U)) 
                                                  | ((0x2000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xdU
                                                      : 0U)) 
                                                 | ((0x4000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xeU
                                                     : 0U)) 
                                                | ((0x8000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0xfU
                                                    : 0U)))),5);
            tracep->chgCData(oldp+70,((0x1fU & ((((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                     | ((0x800U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xbU
                                                         : 0U)) 
                                                    | ((0x1000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xcU
                                                        : 0U)) 
                                                   | ((0x2000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xdU
                                                       : 0U)) 
                                                  | ((0x4000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xeU
                                                      : 0U)) 
                                                 | ((0x8000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xfU
                                                     : 0U)) 
                                                | ((0x10000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x10U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+71,((0x1fU & ((((
                                                   ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                      | ((0x800U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xbU
                                                          : 0U)) 
                                                     | ((0x1000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xcU
                                                         : 0U)) 
                                                    | ((0x2000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xdU
                                                        : 0U)) 
                                                   | ((0x4000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xeU
                                                       : 0U)) 
                                                  | ((0x8000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xfU
                                                      : 0U)) 
                                                 | ((0x10000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x10U
                                                     : 0U)) 
                                                | ((0x20000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x11U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+72,((0x1fU & ((((
                                                   (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                       | ((0x800U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xbU
                                                           : 0U)) 
                                                      | ((0x1000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xcU
                                                          : 0U)) 
                                                     | ((0x2000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xdU
                                                         : 0U)) 
                                                    | ((0x4000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xeU
                                                        : 0U)) 
                                                   | ((0x8000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xfU
                                                       : 0U)) 
                                                  | ((0x10000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x10U
                                                      : 0U)) 
                                                 | ((0x20000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x11U
                                                     : 0U)) 
                                                | ((0x40000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x12U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+73,((0x1fU & ((((
                                                   ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                        | ((0x800U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 0xbU
                                                            : 0U)) 
                                                       | ((0x1000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xcU
                                                           : 0U)) 
                                                      | ((0x2000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xdU
                                                          : 0U)) 
                                                     | ((0x4000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xeU
                                                         : 0U)) 
                                                    | ((0x8000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xfU
                                                        : 0U)) 
                                                   | ((0x10000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0x10U
                                                       : 0U)) 
                                                  | ((0x20000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x11U
                                                      : 0U)) 
                                                 | ((0x40000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x12U
                                                     : 0U)) 
                                                | ((0x80000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x13U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+74,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+75,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                | ((0x200000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x15U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+76,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                 | ((0x200000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x15U
                                                     : 0U)) 
                                                | ((0x400000U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 0x16U
                                                    : 0U)))),5);
            tracep->chgBit(oldp+77,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                           >> 0x1fU))));
            tracep->chgCData(oldp+78,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                 << 9U) 
                                                | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                   >> 0x17U)))),8);
            tracep->chgIData(oldp+79,((0x7fffffU & 
                                       vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])),23);
            tracep->chgBit(oldp+80,((0U == (0xffU & 
                                            ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                >> 0x17U))))));
            tracep->chgBit(oldp+81,((0U == (0x7fffffU 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]))));
            tracep->chgCData(oldp+82,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
            tracep->chgIData(oldp+83,((0x7fffffU & 
                                       ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                         << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                        << 1U))),23);
            tracep->chgSData(oldp+84,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp),9);
            tracep->chgBit(oldp+85,(((0U == (0xffU 
                                             & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                 << 9U) 
                                                | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                   >> 0x17U)))) 
                                     & (0U == (0x7fffffU 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])))));
            tracep->chgBit(oldp+86,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp) 
                                                  >> 7U)))));
            tracep->chgSData(oldp+87,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__exp),9);
            tracep->chgIData(oldp+88,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
            tracep->chgIData(oldp+89,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
            tracep->chgCData(oldp+90,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 1U : 0U)),5);
            tracep->chgCData(oldp+91,((0x1fU & (((2U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 1U
                                                  : 0U) 
                                                | ((4U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+92,((0x1fU & ((((2U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 1U
                                                   : 0U) 
                                                 | ((4U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 2U
                                                     : 0U)) 
                                                | ((8U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 3U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+93,((0x1fU & ((((
                                                   (2U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 1U
                                                    : 0U) 
                                                  | ((4U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 2U
                                                      : 0U)) 
                                                 | ((8U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 3U
                                                     : 0U)) 
                                                | ((0x10U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 4U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+94,((0x1fU & ((((
                                                   ((2U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 1U
                                                     : 0U) 
                                                   | ((4U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 2U
                                                       : 0U)) 
                                                  | ((8U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 3U
                                                      : 0U)) 
                                                 | ((0x10U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 4U
                                                     : 0U)) 
                                                | ((0x20U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 5U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+95,((0x1fU & ((((
                                                   (((2U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 1U
                                                      : 0U) 
                                                    | ((4U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 2U
                                                        : 0U)) 
                                                   | ((8U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 3U
                                                       : 0U)) 
                                                  | ((0x10U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 4U
                                                      : 0U)) 
                                                 | ((0x20U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 5U
                                                     : 0U)) 
                                                | ((0x40U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 6U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+96,((0x1fU & ((((
                                                   ((((2U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 1U
                                                       : 0U) 
                                                     | ((4U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 2U
                                                         : 0U)) 
                                                    | ((8U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 3U
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 4U
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 5U
                                                      : 0U)) 
                                                 | ((0x40U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 6U
                                                     : 0U)) 
                                                | ((0x80U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 7U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+97,((0x1fU & ((((
                                                   (((((2U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 1U
                                                        : 0U) 
                                                      | ((4U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 2U
                                                          : 0U)) 
                                                     | ((8U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 3U
                                                         : 0U)) 
                                                    | ((0x10U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 4U
                                                        : 0U)) 
                                                   | ((0x20U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 5U
                                                       : 0U)) 
                                                  | ((0x40U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 6U
                                                      : 0U)) 
                                                 | ((0x80U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 7U
                                                     : 0U)) 
                                                | ((0x100U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 8U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+98,((0x1fU & ((((
                                                   ((((((2U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 1U
                                                         : 0U) 
                                                       | ((4U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 2U
                                                           : 0U)) 
                                                      | ((8U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 3U
                                                          : 0U)) 
                                                     | ((0x10U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 4U
                                                         : 0U)) 
                                                    | ((0x20U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 5U
                                                        : 0U)) 
                                                   | ((0x40U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 6U
                                                       : 0U)) 
                                                  | ((0x80U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 7U
                                                      : 0U)) 
                                                 | ((0x100U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 8U
                                                     : 0U)) 
                                                | ((0x200U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 9U
                                                    : 0U)))),5);
            tracep->chgCData(oldp+99,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+100,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                 | ((0x800U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xbU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+101,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                  | ((0x800U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xbU
                                                      : 0U)) 
                                                 | ((0x1000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xcU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+102,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                   | ((0x800U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xbU
                                                       : 0U)) 
                                                  | ((0x1000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xcU
                                                      : 0U)) 
                                                 | ((0x2000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xdU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+103,((0x1fU & (((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                    | ((0x800U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xbU
                                                        : 0U)) 
                                                   | ((0x1000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xcU
                                                       : 0U)) 
                                                  | ((0x2000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xdU
                                                      : 0U)) 
                                                 | ((0x4000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xeU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+104,((0x1fU & (((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                     | ((0x800U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xbU
                                                         : 0U)) 
                                                    | ((0x1000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xcU
                                                        : 0U)) 
                                                   | ((0x2000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xdU
                                                       : 0U)) 
                                                  | ((0x4000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xeU
                                                      : 0U)) 
                                                 | ((0x8000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xfU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+105,((0x1fU & (((
                                                   ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                      | ((0x800U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xbU
                                                          : 0U)) 
                                                     | ((0x1000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xcU
                                                         : 0U)) 
                                                    | ((0x2000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xdU
                                                        : 0U)) 
                                                   | ((0x4000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xeU
                                                       : 0U)) 
                                                  | ((0x8000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xfU
                                                      : 0U)) 
                                                 | ((0x10000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x10U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+106,((0x1fU & (((
                                                   (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                       | ((0x800U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xbU
                                                           : 0U)) 
                                                      | ((0x1000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xcU
                                                          : 0U)) 
                                                     | ((0x2000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xdU
                                                         : 0U)) 
                                                    | ((0x4000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xeU
                                                        : 0U)) 
                                                   | ((0x8000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xfU
                                                       : 0U)) 
                                                  | ((0x10000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x10U
                                                      : 0U)) 
                                                 | ((0x20000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x11U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+107,((0x1fU & (((
                                                   ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                        | ((0x800U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 0xbU
                                                            : 0U)) 
                                                       | ((0x1000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xcU
                                                           : 0U)) 
                                                      | ((0x2000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xdU
                                                          : 0U)) 
                                                     | ((0x4000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xeU
                                                         : 0U)) 
                                                    | ((0x8000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xfU
                                                        : 0U)) 
                                                   | ((0x10000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0x10U
                                                       : 0U)) 
                                                  | ((0x20000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x11U
                                                      : 0U)) 
                                                 | ((0x40000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x12U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+108,((0x1fU & (((
                                                   (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                         | ((0x800U 
                                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                             ? 0xbU
                                                             : 0U)) 
                                                        | ((0x1000U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 0xcU
                                                            : 0U)) 
                                                       | ((0x2000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xdU
                                                           : 0U)) 
                                                      | ((0x4000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xeU
                                                          : 0U)) 
                                                     | ((0x8000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xfU
                                                         : 0U)) 
                                                    | ((0x10000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0x10U
                                                        : 0U)) 
                                                   | ((0x20000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0x11U
                                                       : 0U)) 
                                                  | ((0x40000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x12U
                                                      : 0U)) 
                                                 | ((0x80000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x13U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+109,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+110,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                 | ((0x200000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x15U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+111,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                  | ((0x200000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x15U
                                                      : 0U)) 
                                                 | ((0x400000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x16U
                                                     : 0U)))),5);
            tracep->chgBit(oldp+112,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+113,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                  << 9U) 
                                                 | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                    >> 0x17U)))),8);
            tracep->chgIData(oldp+114,((0x7fffffU & 
                                        vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])),23);
            tracep->chgBit(oldp+115,((0U == (0xffU 
                                             & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                 << 9U) 
                                                | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+116,((0U == (0x7fffffU 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]))));
            tracep->chgCData(oldp+117,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
            tracep->chgIData(oldp+118,((0x7fffffU & 
                                        ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                          << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                         << 1U))),23);
            tracep->chgSData(oldp+119,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp),9);
            tracep->chgBit(oldp+120,(((0U == (0xffU 
                                              & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                  << 9U) 
                                                 | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                    >> 0x17U)))) 
                                      & (0U == (0x7fffffU 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])))));
            tracep->chgBit(oldp+121,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp) 
                                                   >> 7U)))));
            tracep->chgSData(oldp+122,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__exp),9);
            tracep->chgIData(oldp+123,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
            tracep->chgIData(oldp+124,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
            tracep->chgCData(oldp+125,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 1U : 0U)),5);
            tracep->chgCData(oldp+126,((0x1fU & (((2U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 1U
                                                   : 0U) 
                                                 | ((4U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 2U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+127,((0x1fU & (((
                                                   (2U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                    ? 1U
                                                    : 0U) 
                                                  | ((4U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 2U
                                                      : 0U)) 
                                                 | ((8U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 3U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+128,((0x1fU & (((
                                                   ((2U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 1U
                                                     : 0U) 
                                                   | ((4U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 2U
                                                       : 0U)) 
                                                  | ((8U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 3U
                                                      : 0U)) 
                                                 | ((0x10U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 4U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+129,((0x1fU & (((
                                                   (((2U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 1U
                                                      : 0U) 
                                                    | ((4U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 2U
                                                        : 0U)) 
                                                   | ((8U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 3U
                                                       : 0U)) 
                                                  | ((0x10U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 4U
                                                      : 0U)) 
                                                 | ((0x20U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 5U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+130,((0x1fU & (((
                                                   ((((2U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 1U
                                                       : 0U) 
                                                     | ((4U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 2U
                                                         : 0U)) 
                                                    | ((8U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 3U
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 4U
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 5U
                                                      : 0U)) 
                                                 | ((0x40U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 6U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+131,((0x1fU & (((
                                                   (((((2U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 1U
                                                        : 0U) 
                                                      | ((4U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 2U
                                                          : 0U)) 
                                                     | ((8U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 3U
                                                         : 0U)) 
                                                    | ((0x10U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 4U
                                                        : 0U)) 
                                                   | ((0x20U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 5U
                                                       : 0U)) 
                                                  | ((0x40U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 6U
                                                      : 0U)) 
                                                 | ((0x80U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 7U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+132,((0x1fU & (((
                                                   ((((((2U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 1U
                                                         : 0U) 
                                                       | ((4U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 2U
                                                           : 0U)) 
                                                      | ((8U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 3U
                                                          : 0U)) 
                                                     | ((0x10U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 4U
                                                         : 0U)) 
                                                    | ((0x20U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 5U
                                                        : 0U)) 
                                                   | ((0x40U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 6U
                                                       : 0U)) 
                                                  | ((0x80U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 7U
                                                      : 0U)) 
                                                 | ((0x100U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 8U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+133,((0x1fU & (((
                                                   (((((((2U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 1U
                                                          : 0U) 
                                                        | ((4U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 2U
                                                            : 0U)) 
                                                       | ((8U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 3U
                                                           : 0U)) 
                                                      | ((0x10U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 4U
                                                          : 0U)) 
                                                     | ((0x20U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 5U
                                                         : 0U)) 
                                                    | ((0x40U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 6U
                                                        : 0U)) 
                                                   | ((0x80U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 7U
                                                       : 0U)) 
                                                  | ((0x100U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 8U
                                                      : 0U)) 
                                                 | ((0x200U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 9U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+134,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+135,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                 | ((0x800U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xbU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+136,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                  | ((0x800U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xbU
                                                      : 0U)) 
                                                 | ((0x1000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xcU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+137,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                   | ((0x800U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xbU
                                                       : 0U)) 
                                                  | ((0x1000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xcU
                                                      : 0U)) 
                                                 | ((0x2000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xdU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+138,((0x1fU & (((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                    | ((0x800U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xbU
                                                        : 0U)) 
                                                   | ((0x1000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xcU
                                                       : 0U)) 
                                                  | ((0x2000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xdU
                                                      : 0U)) 
                                                 | ((0x4000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xeU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+139,((0x1fU & (((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                     | ((0x800U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xbU
                                                         : 0U)) 
                                                    | ((0x1000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xcU
                                                        : 0U)) 
                                                   | ((0x2000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xdU
                                                       : 0U)) 
                                                  | ((0x4000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xeU
                                                      : 0U)) 
                                                 | ((0x8000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0xfU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+140,((0x1fU & (((
                                                   ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                      | ((0x800U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xbU
                                                          : 0U)) 
                                                     | ((0x1000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xcU
                                                         : 0U)) 
                                                    | ((0x2000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xdU
                                                        : 0U)) 
                                                   | ((0x4000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xeU
                                                       : 0U)) 
                                                  | ((0x8000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0xfU
                                                      : 0U)) 
                                                 | ((0x10000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x10U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+141,((0x1fU & (((
                                                   (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                       | ((0x800U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xbU
                                                           : 0U)) 
                                                      | ((0x1000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xcU
                                                          : 0U)) 
                                                     | ((0x2000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xdU
                                                         : 0U)) 
                                                    | ((0x4000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xeU
                                                        : 0U)) 
                                                   | ((0x8000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0xfU
                                                       : 0U)) 
                                                  | ((0x10000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x10U
                                                      : 0U)) 
                                                 | ((0x20000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x11U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+142,((0x1fU & (((
                                                   ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                        | ((0x800U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 0xbU
                                                            : 0U)) 
                                                       | ((0x1000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xcU
                                                           : 0U)) 
                                                      | ((0x2000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xdU
                                                          : 0U)) 
                                                     | ((0x4000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xeU
                                                         : 0U)) 
                                                    | ((0x8000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0xfU
                                                        : 0U)) 
                                                   | ((0x10000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0x10U
                                                       : 0U)) 
                                                  | ((0x20000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x11U
                                                      : 0U)) 
                                                 | ((0x40000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x12U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+143,((0x1fU & (((
                                                   (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                         | ((0x800U 
                                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                             ? 0xbU
                                                             : 0U)) 
                                                        | ((0x1000U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                            ? 0xcU
                                                            : 0U)) 
                                                       | ((0x2000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                           ? 0xdU
                                                           : 0U)) 
                                                      | ((0x4000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                          ? 0xeU
                                                          : 0U)) 
                                                     | ((0x8000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                         ? 0xfU
                                                         : 0U)) 
                                                    | ((0x10000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                        ? 0x10U
                                                        : 0U)) 
                                                   | ((0x20000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                       ? 0x11U
                                                       : 0U)) 
                                                  | ((0x40000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x12U
                                                      : 0U)) 
                                                 | ((0x80000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x13U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+144,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+145,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                 | ((0x200000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x15U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+146,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                  | ((0x200000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                      ? 0x15U
                                                      : 0U)) 
                                                 | ((0x400000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                     ? 0x16U
                                                     : 0U)))),5);
            tracep->chgBit(oldp+147,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                             >> 5U) 
                                            & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 4U)))));
            tracep->chgBit(oldp+148,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                             >> 5U) 
                                            & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 3U)))));
            tracep->chgBit(oldp+149,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf));
            tracep->chgBit(oldp+150,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero));
            tracep->chgBit(oldp+151,((1U & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
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
                                                      >> 0x13U))))))));
            tracep->chgSData(oldp+152,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp),10);
            tracep->chgIData(oldp+153,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig),27);
            tracep->chgIData(oldp+154,((((0U != (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         << 0x17U) 
                                        | (0x7fffffU 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec)))),24);
            tracep->chgIData(oldp+155,((((0U != (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         << 0x17U) 
                                        | (0x7fffffU 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec)))),24);
            tracep->chgQData(oldp+156,((0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                 >> 1U))))),48);
            tracep->chgCData(oldp+158,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState),6);
            tracep->chgSData(oldp+159,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum),10);
            tracep->chgCData(oldp+160,((0x1fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))),5);
            tracep->chgIData(oldp+161,((0x3ffffffU 
                                        & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                            << 0xfU) 
                                           | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                              >> 0x11U)))),26);
            tracep->chgQData(oldp+162,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult),49);
            tracep->chgBit(oldp+164,(((3U == (3U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                        >> 0x17U)) 
                                               >> 7U))) 
                                      & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                 >> 0x1dU)))));
            tracep->chgBit(oldp+165,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA));
            tracep->chgBit(oldp+166,((0U == (7U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                            >> 0x17U)) 
                                                   >> 6U)))));
            tracep->chgBit(oldp+167,((1U & (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                    >> 0x20U)))));
            tracep->chgSData(oldp+168,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                          >> 0x17U)))),10);
            tracep->chgIData(oldp+169,((((0U != (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         << 0x17U) 
                                        | (0x7fffffU 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec)))),25);
            tracep->chgBit(oldp+170,(((7U == (7U & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                            >> 0x1dU)))) 
                                      & (~ (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                    >> 0x16U))))));
            tracep->chgBit(oldp+171,(((3U == (3U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x17U)) 
                                               >> 7U))) 
                                      & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                 >> 0x1dU)))));
            tracep->chgBit(oldp+172,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
            tracep->chgBit(oldp+173,((0U == (7U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                            >> 0x17U)) 
                                                   >> 6U)))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                    >> 0x20U)))));
            tracep->chgSData(oldp+175,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                          >> 0x17U)))),10);
            tracep->chgIData(oldp+176,((((0U != (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         << 0x17U) 
                                        | (0x7fffffU 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec)))),25);
            tracep->chgBit(oldp+177,(((7U == (7U & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                            >> 0x1dU)))) 
                                      & (~ (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                    >> 0x16U))))));
            tracep->chgBit(oldp+178,(((3U == (3U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                        >> 0x17U)) 
                                               >> 7U))) 
                                      & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                 >> 0x1dU)))));
            tracep->chgBit(oldp+179,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC));
            tracep->chgBit(oldp+180,((0U == (7U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                            >> 0x17U)) 
                                                   >> 6U)))));
            tracep->chgBit(oldp+181,((1U & (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                    >> 0x20U)))));
            tracep->chgSData(oldp+182,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                          >> 0x17U)))),10);
            tracep->chgIData(oldp+183,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC),25);
            tracep->chgBit(oldp+184,(((7U == (7U & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                            >> 0x1dU)))) 
                                      & (~ (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                    >> 0x16U))))));
            tracep->chgBit(oldp+185,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd));
            tracep->chgSData(oldp+186,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd),11);
            tracep->chgBit(oldp+187,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
            tracep->chgBit(oldp+188,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC));
            tracep->chgSData(oldp+189,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist),11);
            tracep->chgSData(oldp+190,((0x3ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))),10);
            tracep->chgBit(oldp+191,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign));
            tracep->chgBit(oldp+192,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant));
            tracep->chgCData(oldp+193,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist),7);
            __Vtemp40[0U] = (IData)((0x1fffffffffffffULL 
                                     & (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
            __Vtemp40[1U] = ((0xffe00000U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                               ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                               : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                             << 0x15U)) 
                             | (IData)(((0x1fffffffffffffULL 
                                         & (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                        >> 0x20U)));
            __Vtemp40[2U] = (0x3fffU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                          ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                          : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                        >> 0xbU));
            tracep->chgWData(oldp+194,(__Vtemp40),78);
            tracep->chgWData(oldp+197,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC),77);
            tracep->chgIData(oldp+200,((0x7ffffffU 
                                        & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                           << 2U))),27);
            tracep->chgCData(oldp+201,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC),7);
            tracep->chgCData(oldp+202,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask),6);
            tracep->chgBit(oldp+203,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra));
            tracep->chgWData(oldp+204,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC),75);
            tracep->chgBit(oldp+207,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB));
            tracep->chgBit(oldp+208,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny));
            tracep->chgBit(oldp+209,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB));
            tracep->chgBit(oldp+210,((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                       & (0U == (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                             >> 0x17U)) 
                                                    >> 6U)))) 
                                      | ((0U == (7U 
                                                 & ((IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                             >> 0x17U)) 
                                                    >> 6U))) 
                                         & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)))));
            tracep->chgBit(oldp+211,(((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                        & (0U == (7U 
                                                  & ((IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                              >> 0x17U)) 
                                                     >> 6U)))) 
                                       | ((0U == (7U 
                                                  & ((IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                              >> 0x17U)) 
                                                     >> 6U))) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB))) 
                                      | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                         & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
            tracep->chgBit(oldp+212,((((((7U == (7U 
                                                 & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                            >> 0x1dU)))) 
                                         & (~ (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                       >> 0x16U)))) 
                                        | ((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                              >> 0x1dU)))) 
                                           & (~ (IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x16U))))) 
                                       | ((7U == (7U 
                                                  & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                             >> 0x1dU)))) 
                                          & (~ (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                        >> 0x16U))))) 
                                      | ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                           & (0U == 
                                              (7U & 
                                               ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))) 
                                          | ((0U == 
                                              (7U & 
                                               ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                         >> 0x17U)) 
                                                >> 6U))) 
                                             & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB))) 
                                         | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                                              & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
                                             & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                            & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))))));
            tracep->chgBit(oldp+213,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
            tracep->chgBit(oldp+214,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase));
            tracep->chgBit(oldp+215,(((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                        & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                       | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                      | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                         & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))));
            tracep->chgSData(oldp+216,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                          >> 0x17U)))),9);
            tracep->chgIData(oldp+217,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec))),23);
            tracep->chgBit(oldp+218,((3U == (3U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                            >> 0x17U)) 
                                                   >> 7U)))));
            tracep->chgBit(oldp+219,((7U == (7U & (IData)(
                                                          (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                           >> 0x1dU))))));
            tracep->chgSData(oldp+220,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                          >> 0x17U)))),9);
            tracep->chgIData(oldp+221,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec))),23);
            tracep->chgBit(oldp+222,((3U == (3U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                            >> 0x17U)) 
                                                   >> 7U)))));
            tracep->chgBit(oldp+223,((7U == (7U & (IData)(
                                                          (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                           >> 0x1dU))))));
            tracep->chgSData(oldp+224,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                          >> 0x17U)))),9);
            tracep->chgIData(oldp+225,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec))),23);
            tracep->chgBit(oldp+226,((3U == (3U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                            >> 0x17U)) 
                                                   >> 7U)))));
            tracep->chgBit(oldp+227,((7U == (7U & (IData)(
                                                          (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                           >> 0x1dU))))));
            tracep->chgCData(oldp+228,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+229,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut),6);
            tracep->chgBit(oldp+230,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 5U))));
            tracep->chgBit(oldp+231,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                             >> 5U) 
                                            & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 1U)))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 4U))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 3U))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 2U))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 1U))));
            tracep->chgBit(oldp+236,((1U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))));
            tracep->chgBit(oldp+237,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                             >> 4U) 
                                            ^ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 3U)))));
            tracep->chgIData(oldp+238,((0x3ffffffU 
                                        & ((IData)(1U) 
                                           + ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                               << 0xfU) 
                                              | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                                 >> 0x11U))))),26);
            tracep->chgWData(oldp+239,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum),75);
            tracep->chgSData(oldp+242,((0x3ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                                  - 
                                                  (1U 
                                                   & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                      >> 3U))))),10);
            tracep->chgQData(oldp+243,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum),50);
            tracep->chgBit(oldp+245,((1U & ((8U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                             ? (~ (IData)(
                                                          (0xffffffU 
                                                           == 
                                                           (0xffffffU 
                                                            & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                                << 0x1fU) 
                                                               | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                                  >> 1U))))))
                                             : (0U 
                                                != 
                                                (0x1ffffffU 
                                                 & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                       >> 1U))))))));
            tracep->chgIData(oldp+246,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig),29);
            tracep->chgIData(oldp+247,((0x7fffff8U 
                                        & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                           << 3U))),27);
            tracep->chgCData(oldp+248,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig),7);
            tracep->chgCData(oldp+249,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask),6);
            tracep->chgBit(oldp+250,((0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                             & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))));
            tracep->chgIData(oldp+251,(((0x7fffffeU 
                                         & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                            >> 2U)) 
                                        | (1U & (((0U 
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
                                                            >> 1U))))))))),27);
            tracep->chgBit(oldp+252,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                            >> 0x13U))));
            tracep->chgQData(oldp+253,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum),51);
            tracep->chgIData(oldp+255,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
            tracep->chgCData(oldp+256,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+257,((0x3fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                 << 1U))),6);
            tracep->chgSData(oldp+258,((0x3ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                                  - 
                                                  (0x3fU 
                                                   & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                      << 1U))))),10);
            tracep->chgIData(oldp+259,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig),29);
            tracep->chgSData(oldp+260,((0x1fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)),13);
            tracep->chgCData(oldp+261,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum),7);
            tracep->chgCData(oldp+262,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask),6);
            tracep->chgBit(oldp+263,((0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                             & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
            tracep->chgIData(oldp+264,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig),27);
            tracep->chgBit(oldp+265,((0U == (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+266,(((0U != (3U & 
                                              (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                               >> 0x19U))) 
                                      & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 4U) ^ 
                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                          >> 0x13U)))));
            tracep->chgCData(oldp+267,((7U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                              >> 2U))),3);
            tracep->chgCData(oldp+268,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut),6);
            tracep->chgIData(oldp+269,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn),26);
            tracep->chgIData(oldp+270,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn),27);
            tracep->chgCData(oldp+271,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                         ? 1U : 0U)),5);
            tracep->chgCData(oldp+272,((0x1fU & (((2U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 1U
                                                   : 0U) 
                                                 | ((4U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 2U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+273,((0x1fU & (((
                                                   (2U 
                                                    & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 1U
                                                    : 0U) 
                                                  | ((4U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 2U
                                                      : 0U)) 
                                                 | ((8U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 3U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+274,((0x1fU & (((
                                                   ((2U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 1U
                                                     : 0U) 
                                                   | ((4U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 2U
                                                       : 0U)) 
                                                  | ((8U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 3U
                                                      : 0U)) 
                                                 | ((0x10U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 4U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+275,((0x1fU & (((
                                                   (((2U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 1U
                                                      : 0U) 
                                                    | ((4U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 2U
                                                        : 0U)) 
                                                   | ((8U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 3U
                                                       : 0U)) 
                                                  | ((0x10U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 4U
                                                      : 0U)) 
                                                 | ((0x20U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 5U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+276,((0x1fU & (((
                                                   ((((2U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 1U
                                                       : 0U) 
                                                     | ((4U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 2U
                                                         : 0U)) 
                                                    | ((8U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 3U
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 4U
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 5U
                                                      : 0U)) 
                                                 | ((0x40U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 6U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+277,((0x1fU & (((
                                                   (((((2U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 1U
                                                        : 0U) 
                                                      | ((4U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 2U
                                                          : 0U)) 
                                                     | ((8U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 3U
                                                         : 0U)) 
                                                    | ((0x10U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 4U
                                                        : 0U)) 
                                                   | ((0x20U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 5U
                                                       : 0U)) 
                                                  | ((0x40U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 6U
                                                      : 0U)) 
                                                 | ((0x80U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 7U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+278,((0x1fU & (((
                                                   ((((((2U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 1U
                                                         : 0U) 
                                                       | ((4U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                           ? 2U
                                                           : 0U)) 
                                                      | ((8U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 3U
                                                          : 0U)) 
                                                     | ((0x10U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 4U
                                                         : 0U)) 
                                                    | ((0x20U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 5U
                                                        : 0U)) 
                                                   | ((0x40U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 6U
                                                       : 0U)) 
                                                  | ((0x80U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 7U
                                                      : 0U)) 
                                                 | ((0x100U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 8U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+279,((0x1fU & (((
                                                   (((((((2U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 1U
                                                          : 0U) 
                                                        | ((4U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                            ? 2U
                                                            : 0U)) 
                                                       | ((8U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                           ? 3U
                                                           : 0U)) 
                                                      | ((0x10U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 4U
                                                          : 0U)) 
                                                     | ((0x20U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 5U
                                                         : 0U)) 
                                                    | ((0x40U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 6U
                                                        : 0U)) 
                                                   | ((0x80U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 7U
                                                       : 0U)) 
                                                  | ((0x100U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 8U
                                                      : 0U)) 
                                                 | ((0x200U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 9U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+280,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+281,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                 | ((0x800U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0xbU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+282,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                  | ((0x800U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0xbU
                                                      : 0U)) 
                                                 | ((0x1000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0xcU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+283,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                   | ((0x800U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0xbU
                                                       : 0U)) 
                                                  | ((0x1000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0xcU
                                                      : 0U)) 
                                                 | ((0x2000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0xdU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+284,((0x1fU & (((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                    | ((0x800U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0xbU
                                                        : 0U)) 
                                                   | ((0x1000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0xcU
                                                       : 0U)) 
                                                  | ((0x2000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0xdU
                                                      : 0U)) 
                                                 | ((0x4000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0xeU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+285,((0x1fU & (((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                     | ((0x800U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0xbU
                                                         : 0U)) 
                                                    | ((0x1000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0xcU
                                                        : 0U)) 
                                                   | ((0x2000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0xdU
                                                       : 0U)) 
                                                  | ((0x4000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0xeU
                                                      : 0U)) 
                                                 | ((0x8000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0xfU
                                                     : 0U)))),5);
            tracep->chgCData(oldp+286,((0x1fU & (((
                                                   ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                      | ((0x800U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 0xbU
                                                          : 0U)) 
                                                     | ((0x1000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0xcU
                                                         : 0U)) 
                                                    | ((0x2000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0xdU
                                                        : 0U)) 
                                                   | ((0x4000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0xeU
                                                       : 0U)) 
                                                  | ((0x8000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0xfU
                                                      : 0U)) 
                                                 | ((0x10000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x10U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+287,((0x1fU & (((
                                                   (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                       | ((0x800U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                           ? 0xbU
                                                           : 0U)) 
                                                      | ((0x1000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 0xcU
                                                          : 0U)) 
                                                     | ((0x2000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0xdU
                                                         : 0U)) 
                                                    | ((0x4000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0xeU
                                                        : 0U)) 
                                                   | ((0x8000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0xfU
                                                       : 0U)) 
                                                  | ((0x10000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x10U
                                                      : 0U)) 
                                                 | ((0x20000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x11U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+288,((0x1fU & (((
                                                   ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                        | ((0x800U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                            ? 0xbU
                                                            : 0U)) 
                                                       | ((0x1000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                           ? 0xcU
                                                           : 0U)) 
                                                      | ((0x2000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 0xdU
                                                          : 0U)) 
                                                     | ((0x4000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0xeU
                                                         : 0U)) 
                                                    | ((0x8000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0xfU
                                                        : 0U)) 
                                                   | ((0x10000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0x10U
                                                       : 0U)) 
                                                  | ((0x20000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x11U
                                                      : 0U)) 
                                                 | ((0x40000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x12U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+289,((0x1fU & (((
                                                   (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                                         | ((0x800U 
                                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                             ? 0xbU
                                                             : 0U)) 
                                                        | ((0x1000U 
                                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                            ? 0xcU
                                                            : 0U)) 
                                                       | ((0x2000U 
                                                           & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                           ? 0xdU
                                                           : 0U)) 
                                                      | ((0x4000U 
                                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                          ? 0xeU
                                                          : 0U)) 
                                                     | ((0x8000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0xfU
                                                         : 0U)) 
                                                    | ((0x10000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0x10U
                                                        : 0U)) 
                                                   | ((0x20000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0x11U
                                                       : 0U)) 
                                                  | ((0x40000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x12U
                                                      : 0U)) 
                                                 | ((0x80000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x13U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+290,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
            tracep->chgCData(oldp+291,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                 | ((0x200000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x15U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+292,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                  | ((0x200000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x15U
                                                      : 0U)) 
                                                 | ((0x400000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x16U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+293,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                   | ((0x200000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0x15U
                                                       : 0U)) 
                                                  | ((0x400000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x16U
                                                      : 0U)) 
                                                 | ((0x800000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x17U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+294,((0x1fU & (((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                    | ((0x200000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0x15U
                                                        : 0U)) 
                                                   | ((0x400000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0x16U
                                                       : 0U)) 
                                                  | ((0x800000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x17U
                                                      : 0U)) 
                                                 | ((0x1000000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x18U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+295,((0x1fU & (((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                                     | ((0x200000U 
                                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                         ? 0x15U
                                                         : 0U)) 
                                                    | ((0x400000U 
                                                        & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                        ? 0x16U
                                                        : 0U)) 
                                                   | ((0x800000U 
                                                       & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                       ? 0x17U
                                                       : 0U)) 
                                                  | ((0x1000000U 
                                                      & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                      ? 0x18U
                                                      : 0U)) 
                                                 | ((0x2000000U 
                                                     & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                     ? 0x19U
                                                     : 0U)))),5);
            tracep->chgCData(oldp+296,((0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                >> 1U))),4);
            tracep->chgCData(oldp+297,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut),6);
            tracep->chgBit(oldp+298,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
            tracep->chgSData(oldp+299,((0x3ffU & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))),10);
            tracep->chgBit(oldp+300,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+301,((0x1ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))),9);
            tracep->chgIData(oldp+302,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut),23);
            tracep->chgBit(oldp+303,(VL_LTES_III(1,32,32, 3U, 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U))));
            tracep->chgBit(oldp+304,(VL_GTS_III(1,32,32, 0x6bU, 
                                                VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))));
            tracep->chgBit(oldp+305,((VL_GTS_III(1,32,32, 0x6bU, 
                                                 VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                      | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                                          & VL_GTES_III(1,32,32, 0U, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))), 8U))) 
                                         & ((0x4000000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                             ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                >> 3U)
                                             : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                >> 2U))))));
            tracep->chgBit(oldp+306,((VL_GTS_III(1,32,32, 0x6bU, 
                                                 VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                      | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))));
            tracep->chgBit(oldp+307,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
            tracep->chgBit(oldp+308,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow));
            tracep->chgBit(oldp+309,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                      & (VL_GTS_III(1,32,32, 0x6bU, 
                                                    VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                         | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound) 
                                             & VL_GTES_III(1,32,32, 0U, 
                                                           VL_SHIFTRS_III(32,32,32, 
                                                                          VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))), 8U))) 
                                            & ((0x4000000U 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                                ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                   >> 3U)
                                                : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                   >> 2U)))))));
            tracep->chgBit(oldp+310,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                      | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                         & (VL_GTS_III(1,32,32, 0x6bU, 
                                                       VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                            | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))));
            tracep->chgBit(oldp+311,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
            tracep->chgBit(oldp+312,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                       ? 0U : (1U & 
                                               (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
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
                                                          >> 0x13U)))))))));
            tracep->chgSData(oldp+313,((0x1ffU & ((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
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
                                                      : 0U)))),9);
            tracep->chgIData(oldp+314,((0x7fffffU & 
                                        ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                            ? 0x400000U
                                            : 0U) | 
                                          (((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero)) 
                                            & VL_LTES_III(1,32,32, 0x6bU, 
                                                          VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                            ? (0x400000U 
                                               & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                            : 0U)) 
                                         | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                              & (~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero))) 
                                             & VL_LTES_III(1,32,32, 0x6bU, 
                                                           VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))))
                                             ? (0xffbfffffU 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut)
                                             : 0U)))),23);
            tracep->chgIData(oldp+315,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask),27);
            tracep->chgIData(oldp+316,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main),25);
            tracep->chgIData(oldp+317,((0x7ffffffU 
                                        & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                           >> 1U))),27);
            tracep->chgIData(oldp+318,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask),27);
            tracep->chgBit(oldp+319,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit));
            tracep->chgBit(oldp+320,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
            tracep->chgBit(oldp+321,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound));
            tracep->chgIData(oldp+322,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig),26);
            tracep->chgSData(oldp+323,((0x7ffU & VL_EXTENDS_II(11,10, 
                                                               (0x3ffU 
                                                                & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))))),11);
            tracep->chgSData(oldp+324,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp),11);
            tracep->chgBit(oldp+325,((1U & ((0x4000000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                             ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                                >> 2U)
                                             : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                                >> 1U)))));
            tracep->chgBit(oldp+326,((1U & (((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                              >> 0x1aU) 
                                             & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                                >> 2U)) 
                                            | (0U != 
                                               (3U 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig))))));
            tracep->chgBit(oldp+327,((1U & ((0x4000000U 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                             ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                >> 0x19U)
                                             : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                                >> 0x18U)))));
            tracep->chgSData(oldp+328,((0x1ffU & VL_EXTENDS_II(9,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))),9);
            tracep->chgIData(oldp+329,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut),25);
            tracep->chgBit(oldp+330,(((3U == (3U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                        >> 0x17U)) 
                                               >> 7U))) 
                                      & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                 >> 0x1dU)))));
            tracep->chgBit(oldp+331,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf));
            tracep->chgBit(oldp+332,((0U == (7U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                            >> 0x17U)) 
                                                   >> 6U)))));
            tracep->chgBit(oldp+333,((1U & (IData)(
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                    >> 0x20U)))));
            tracep->chgSData(oldp+334,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                          >> 0x17U)))),10);
            tracep->chgIData(oldp+335,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig),25);
            tracep->chgBit(oldp+336,((0x82U > (0x1ffU 
                                               & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                          >> 0x17U))))));
            tracep->chgCData(oldp+337,((0x1fU & ((IData)(1U) 
                                                 - 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                             >> 0x17U)))))),5);
            tracep->chgCData(oldp+338,((0xffU & (((0x82U 
                                                   > 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                               >> 0x17U))))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((0x1ffU 
                                                     & (IData)(
                                                               (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                >> 0x17U))) 
                                                    - (IData)(0x82U)))) 
                                                 | ((((3U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(
                                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                    >> 0x17U)) 
                                                           >> 7U))) 
                                                      & (IData)(
                                                                (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                 >> 0x1dU))) 
                                                     | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf))
                                                     ? 0xffU
                                                     : 0U)))),8);
            tracep->chgIData(oldp+339,((0x7fffffU & 
                                        ((0x82U > (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                              >> 0x17U))))
                                          ? ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig 
                                              >> 1U) 
                                             >> (0x1fU 
                                                 & ((IData)(1U) 
                                                    - 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                                >> 0x17U))))))
                                          : ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf)
                                              ? 0U : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig)))),23);
            tracep->chgSData(oldp+340,((0x1ffU & (IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                          >> 0x17U)))),9);
            tracep->chgIData(oldp+341,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec))),23);
            tracep->chgBit(oldp+342,((3U == (3U & ((IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                            >> 0x17U)) 
                                                   >> 7U)))));
        }
        tracep->chgBit(oldp+343,(vlTOPp->reset));
        tracep->chgBit(oldp+344,(vlTOPp->clk));
        tracep->chgWData(oldp+345,(vlTOPp->req_msg),128);
        tracep->chgBit(oldp+349,(vlTOPp->req_rdy));
        tracep->chgBit(oldp+350,(vlTOPp->req_val));
        tracep->chgWData(oldp+351,(vlTOPp->resp_msg),128);
        tracep->chgBit(oldp+355,(vlTOPp->resp_rdy));
        tracep->chgBit(oldp+356,(vlTOPp->resp_val));
        __Vtemp43[0U] = vlTOPp->req_msg[0U];
        __Vtemp43[1U] = vlTOPp->req_msg[1U];
        __Vtemp43[2U] = vlTOPp->req_msg[2U];
        __Vtemp43[3U] = (0xfffffffU & vlTOPp->req_msg[3U]);
        tracep->chgWData(oldp+357,(__Vtemp43),124);
    }
}

void VFPURetimed_noparam::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
