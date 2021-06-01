// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIHardbits__pack_size_128__hard_bits_4__Syms.h"


void VSPIHardbits__pack_size_128__hard_bits_4::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgCData(oldp+1,(vlTOPp->detected_bits),4);
        tracep->chgWData(oldp+2,(vlTOPp->from_device),128);
        tracep->chgWData(oldp+6,(vlTOPp->from_master),128);
        tracep->chgBit(oldp+10,(vlTOPp->hard_msg));
        tracep->chgBit(oldp+11,(vlTOPp->reset));
        tracep->chgBit(oldp+12,(vlTOPp->serve));
        tracep->chgWData(oldp+13,(vlTOPp->to_device),128);
        tracep->chgWData(oldp+17,(vlTOPp->to_master),128);
        tracep->chgCData(oldp+21,((0xfU & (vlTOPp->from_master[3U] 
                                           >> 0x1bU))),4);
        tracep->chgBit(oldp+22,(((vlTOPp->from_master[3U] 
                                  >> 0x1fU) & (IData)(vlTOPp->serve))));
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
