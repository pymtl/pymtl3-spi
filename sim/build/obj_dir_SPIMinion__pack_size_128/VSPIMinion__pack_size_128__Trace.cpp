// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIMinion__pack_size_128__Syms.h"


void VSPIMinion__pack_size_128::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSPIMinion__pack_size_128::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                          >> 1U))));
            tracep->chgBit(oldp+1,((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                                 >> 1U)))));
            tracep->chgBit(oldp+2,((2U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                                 >> 1U)))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                          >> 1U))));
            tracep->chgBit(oldp+4,((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                                 >> 1U)))));
            tracep->chgBit(oldp+5,((2U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                                 >> 1U)))));
            tracep->chgWData(oldp+6,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out),128);
            tracep->chgWData(oldp+10,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out),128);
            tracep->chgCData(oldp+14,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q),3);
            tracep->chgCData(oldp+15,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q),3);
            tracep->chgBit(oldp+16,(((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                                   >> 1U))) 
                                     & (~ ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                           >> 1U)))));
        }
        tracep->chgBit(oldp+17,(vlTOPp->clk));
        tracep->chgBit(oldp+18,(vlTOPp->cs));
        tracep->chgWData(oldp+19,(vlTOPp->from_device),128);
        tracep->chgBit(oldp+23,(vlTOPp->miso));
        tracep->chgBit(oldp+24,(vlTOPp->mosi));
        tracep->chgBit(oldp+25,(vlTOPp->reset));
        tracep->chgBit(oldp+26,(vlTOPp->sclk));
        tracep->chgBit(oldp+27,(vlTOPp->seize));
        tracep->chgBit(oldp+28,(vlTOPp->serve));
        tracep->chgWData(oldp+29,(vlTOPp->to_device),128);
    }
}

void VSPIMinion__pack_size_128::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
