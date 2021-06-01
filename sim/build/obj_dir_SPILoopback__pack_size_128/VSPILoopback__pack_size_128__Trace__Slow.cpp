// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPILoopback__pack_size_128__Syms.h"


//======================

void VSPILoopback__pack_size_128::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSPILoopback__pack_size_128::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSPILoopback__pack_size_128::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSPILoopback__pack_size_128::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSPILoopback__pack_size_128::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"reset", false,-1);
        tracep->declBus(c+2,"clk", false,-1, 0,0);
        tracep->declArray(c+3,"from_device", false,-1, 127,0);
        tracep->declArray(c+7,"from_master", false,-1, 127,0);
        tracep->declBus(c+11,"loop_en", false,-1, 0,0);
        tracep->declBus(c+12,"serve", false,-1, 0,0);
        tracep->declArray(c+13,"to_device", false,-1, 127,0);
        tracep->declArray(c+17,"to_master", false,-1, 127,0);
        tracep->declBit(c+1,"SPILoopback__pack_size_128 reset", false,-1);
        tracep->declBus(c+2,"SPILoopback__pack_size_128 clk", false,-1, 0,0);
        tracep->declArray(c+3,"SPILoopback__pack_size_128 from_device", false,-1, 127,0);
        tracep->declArray(c+7,"SPILoopback__pack_size_128 from_master", false,-1, 127,0);
        tracep->declBus(c+11,"SPILoopback__pack_size_128 loop_en", false,-1, 0,0);
        tracep->declBus(c+12,"SPILoopback__pack_size_128 serve", false,-1, 0,0);
        tracep->declArray(c+13,"SPILoopback__pack_size_128 to_device", false,-1, 127,0);
        tracep->declArray(c+17,"SPILoopback__pack_size_128 to_master", false,-1, 127,0);
        tracep->declBus(c+25,"SPILoopback__pack_size_128 v pack_size", false,-1, 31,0);
        tracep->declBit(c+2,"SPILoopback__pack_size_128 v clk", false,-1);
        tracep->declBit(c+12,"SPILoopback__pack_size_128 v serve", false,-1);
        tracep->declBit(c+11,"SPILoopback__pack_size_128 v loop_en", false,-1);
        tracep->declArray(c+7,"SPILoopback__pack_size_128 v from_master", false,-1, 127,0);
        tracep->declArray(c+17,"SPILoopback__pack_size_128 v to_master", false,-1, 127,0);
        tracep->declArray(c+3,"SPILoopback__pack_size_128 v from_device", false,-1, 127,0);
        tracep->declArray(c+13,"SPILoopback__pack_size_128 v to_device", false,-1, 127,0);
        tracep->declArray(c+21,"SPILoopback__pack_size_128 v output_mux_out", false,-1, 127,0);
        tracep->declBus(c+25,"SPILoopback__pack_size_128 v output_mux p_nbits", false,-1, 31,0);
        tracep->declArray(c+3,"SPILoopback__pack_size_128 v output_mux in0", false,-1, 127,0);
        tracep->declArray(c+7,"SPILoopback__pack_size_128 v output_mux in1", false,-1, 127,0);
        tracep->declBit(c+11,"SPILoopback__pack_size_128 v output_mux sel", false,-1);
        tracep->declArray(c+21,"SPILoopback__pack_size_128 v output_mux out", false,-1, 127,0);
    }
}

void VSPILoopback__pack_size_128::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSPILoopback__pack_size_128::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSPILoopback__pack_size_128::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSPILoopback__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPILoopback__pack_size_128__Syms*>(userp);
    VSPILoopback__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp6[4];
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->reset));
        tracep->fullBit(oldp+2,(vlTOPp->clk));
        tracep->fullWData(oldp+3,(vlTOPp->from_device),128);
        tracep->fullWData(oldp+7,(vlTOPp->from_master),128);
        tracep->fullBit(oldp+11,(vlTOPp->loop_en));
        tracep->fullBit(oldp+12,(vlTOPp->serve));
        tracep->fullWData(oldp+13,(vlTOPp->to_device),128);
        tracep->fullWData(oldp+17,(vlTOPp->to_master),128);
        if (vlTOPp->loop_en) {
            __Vtemp6[0U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[0U]
                             : 0U);
            __Vtemp6[1U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[1U]
                             : 0U);
            __Vtemp6[2U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[2U]
                             : 0U);
            __Vtemp6[3U] = ((IData)(vlTOPp->loop_en)
                             ? vlTOPp->from_master[3U]
                             : 0U);
        } else {
            __Vtemp6[0U] = vlTOPp->from_device[0U];
            __Vtemp6[1U] = vlTOPp->from_device[1U];
            __Vtemp6[2U] = vlTOPp->from_device[2U];
            __Vtemp6[3U] = vlTOPp->from_device[3U];
        }
        tracep->fullWData(oldp+21,(__Vtemp6),128);
        tracep->fullIData(oldp+25,(0x80U),32);
    }
}
