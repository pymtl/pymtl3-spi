// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPILoopback__pack_size_128__Syms.h"


void VSPILoopback__pack_size_128::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSPILoopback__pack_size_128::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp9[4];
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->reset));
        tracep->chgBit(oldp+1,(vlTOPp->clk));
        tracep->chgWData(oldp+2,(vlTOPp->from_device),128);
        tracep->chgWData(oldp+6,(vlTOPp->from_master),128);
        tracep->chgBit(oldp+10,(vlTOPp->loop_en));
        tracep->chgBit(oldp+11,(vlTOPp->serve));
        tracep->chgWData(oldp+12,(vlTOPp->to_device),128);
        tracep->chgWData(oldp+16,(vlTOPp->to_master),128);
        if (vlTOPp->loop_en) {
            __Vtemp9[0U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[0U]
                             : 0U);
            __Vtemp9[1U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[1U]
                             : 0U);
            __Vtemp9[2U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[2U]
                             : 0U);
            __Vtemp9[3U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[3U]
                             : 0U);
        } else {
            __Vtemp9[0U] = vlTOPp->from_device[0U];
            __Vtemp9[1U] = vlTOPp->from_device[1U];
            __Vtemp9[2U] = vlTOPp->from_device[2U];
            __Vtemp9[3U] = vlTOPp->from_device[3U];
        }
        tracep->chgWData(oldp+20,(__Vtemp9),128);
    }
}

void VSPILoopback__pack_size_128::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
