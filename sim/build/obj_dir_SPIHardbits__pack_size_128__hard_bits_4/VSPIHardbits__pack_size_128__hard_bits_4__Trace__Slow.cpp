// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIHardbits__pack_size_128__hard_bits_4__Syms.h"


//======================

void VSPIHardbits__pack_size_128__hard_bits_4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSPIHardbits__pack_size_128__hard_bits_4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSPIHardbits__pack_size_128__hard_bits_4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"clk", false,-1, 0,0);
        tracep->declBus(c+2,"detected_bits", false,-1, 3,0);
        tracep->declArray(c+3,"from_device", false,-1, 127,0);
        tracep->declArray(c+7,"from_master", false,-1, 127,0);
        tracep->declBus(c+11,"hard_msg", false,-1, 0,0);
        tracep->declBus(c+12,"reset", false,-1, 0,0);
        tracep->declBus(c+13,"serve", false,-1, 0,0);
        tracep->declArray(c+14,"to_device", false,-1, 127,0);
        tracep->declArray(c+18,"to_master", false,-1, 127,0);
        tracep->declBus(c+1,"SPIHardbits__pack_size_128__hard_bits_4 clk", false,-1, 0,0);
        tracep->declBus(c+2,"SPIHardbits__pack_size_128__hard_bits_4 detected_bits", false,-1, 3,0);
        tracep->declArray(c+3,"SPIHardbits__pack_size_128__hard_bits_4 from_device", false,-1, 127,0);
        tracep->declArray(c+7,"SPIHardbits__pack_size_128__hard_bits_4 from_master", false,-1, 127,0);
        tracep->declBus(c+11,"SPIHardbits__pack_size_128__hard_bits_4 hard_msg", false,-1, 0,0);
        tracep->declBus(c+12,"SPIHardbits__pack_size_128__hard_bits_4 reset", false,-1, 0,0);
        tracep->declBus(c+13,"SPIHardbits__pack_size_128__hard_bits_4 serve", false,-1, 0,0);
        tracep->declArray(c+14,"SPIHardbits__pack_size_128__hard_bits_4 to_device", false,-1, 127,0);
        tracep->declArray(c+18,"SPIHardbits__pack_size_128__hard_bits_4 to_master", false,-1, 127,0);
        tracep->declBus(c+24,"SPIHardbits__pack_size_128__hard_bits_4 v pack_size", false,-1, 31,0);
        tracep->declBus(c+25,"SPIHardbits__pack_size_128__hard_bits_4 v hard_bits", false,-1, 31,0);
        tracep->declBit(c+1,"SPIHardbits__pack_size_128__hard_bits_4 v clk", false,-1);
        tracep->declBit(c+12,"SPIHardbits__pack_size_128__hard_bits_4 v reset", false,-1);
        tracep->declBit(c+13,"SPIHardbits__pack_size_128__hard_bits_4 v serve", false,-1);
        tracep->declBit(c+11,"SPIHardbits__pack_size_128__hard_bits_4 v hard_msg", false,-1);
        tracep->declArray(c+7,"SPIHardbits__pack_size_128__hard_bits_4 v from_master", false,-1, 127,0);
        tracep->declArray(c+18,"SPIHardbits__pack_size_128__hard_bits_4 v to_master", false,-1, 127,0);
        tracep->declBus(c+2,"SPIHardbits__pack_size_128__hard_bits_4 v detected_bits", false,-1, 3,0);
        tracep->declArray(c+3,"SPIHardbits__pack_size_128__hard_bits_4 v from_device", false,-1, 127,0);
        tracep->declArray(c+14,"SPIHardbits__pack_size_128__hard_bits_4 v to_device", false,-1, 127,0);
        tracep->declBus(c+25,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status p_nbits", false,-1, 31,0);
        tracep->declBus(c+26,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status p_reset_value", false,-1, 31,0);
        tracep->declBit(c+1,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status clk", false,-1);
        tracep->declBit(c+12,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status reset", false,-1);
        tracep->declBus(c+2,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status q", false,-1, 3,0);
        tracep->declBus(c+22,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status d", false,-1, 3,0);
        tracep->declBit(c+23,"SPIHardbits__pack_size_128__hard_bits_4 v bit_status en", false,-1);
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSPIHardbits__pack_size_128__hard_bits_4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSPIHardbits__pack_size_128__hard_bits_4__Syms* __restrict vlSymsp = static_cast<VSPIHardbits__pack_size_128__hard_bits_4__Syms*>(userp);
    VSPIHardbits__pack_size_128__hard_bits_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullCData(oldp+2,(vlTOPp->detected_bits),4);
        tracep->fullWData(oldp+3,(vlTOPp->from_device),128);
        tracep->fullWData(oldp+7,(vlTOPp->from_master),128);
        tracep->fullBit(oldp+11,(vlTOPp->hard_msg));
        tracep->fullBit(oldp+12,(vlTOPp->reset));
        tracep->fullBit(oldp+13,(vlTOPp->serve));
        tracep->fullWData(oldp+14,(vlTOPp->to_device),128);
        tracep->fullWData(oldp+18,(vlTOPp->to_master),128);
        tracep->fullCData(oldp+22,((0xfU & (vlTOPp->from_master[3U] 
                                            >> 0x1bU))),4);
        tracep->fullBit(oldp+23,(((vlTOPp->from_master[3U] 
                                   >> 0x1fU) & (IData)(vlTOPp->serve))));
        tracep->fullIData(oldp+24,(0x80U),32);
        tracep->fullIData(oldp+25,(4U),32);
        tracep->fullIData(oldp+26,(0U),32);
    }
}
