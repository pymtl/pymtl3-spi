// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIMinion__pack_size_128__Syms.h"


//======================

void VSPIMinion__pack_size_128::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSPIMinion__pack_size_128::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSPIMinion__pack_size_128::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSPIMinion__pack_size_128::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSPIMinion__pack_size_128::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+18,"clk", false,-1, 0,0);
        tracep->declBus(c+19,"cs", false,-1, 0,0);
        tracep->declArray(c+20,"from_device", false,-1, 127,0);
        tracep->declBus(c+24,"miso", false,-1, 0,0);
        tracep->declBus(c+25,"mosi", false,-1, 0,0);
        tracep->declBus(c+26,"reset", false,-1, 0,0);
        tracep->declBus(c+27,"sclk", false,-1, 0,0);
        tracep->declBus(c+28,"seize", false,-1, 0,0);
        tracep->declBus(c+29,"serve", false,-1, 0,0);
        tracep->declArray(c+30,"to_device", false,-1, 127,0);
        tracep->declBus(c+18,"SPIMinion__pack_size_128 clk", false,-1, 0,0);
        tracep->declBus(c+19,"SPIMinion__pack_size_128 cs", false,-1, 0,0);
        tracep->declArray(c+20,"SPIMinion__pack_size_128 from_device", false,-1, 127,0);
        tracep->declBus(c+24,"SPIMinion__pack_size_128 miso", false,-1, 0,0);
        tracep->declBus(c+25,"SPIMinion__pack_size_128 mosi", false,-1, 0,0);
        tracep->declBus(c+26,"SPIMinion__pack_size_128 reset", false,-1, 0,0);
        tracep->declBus(c+27,"SPIMinion__pack_size_128 sclk", false,-1, 0,0);
        tracep->declBus(c+28,"SPIMinion__pack_size_128 seize", false,-1, 0,0);
        tracep->declBus(c+29,"SPIMinion__pack_size_128 serve", false,-1, 0,0);
        tracep->declArray(c+30,"SPIMinion__pack_size_128 to_device", false,-1, 127,0);
        tracep->declBus(c+34,"SPIMinion__pack_size_128 v pack_size", false,-1, 31,0);
        tracep->declBit(c+18,"SPIMinion__pack_size_128 v clk", false,-1);
        tracep->declBit(c+26,"SPIMinion__pack_size_128 v reset", false,-1);
        tracep->declBit(c+29,"SPIMinion__pack_size_128 v serve", false,-1);
        tracep->declBit(c+28,"SPIMinion__pack_size_128 v seize", false,-1);
        tracep->declArray(c+20,"SPIMinion__pack_size_128 v from_device", false,-1, 127,0);
        tracep->declArray(c+30,"SPIMinion__pack_size_128 v to_device", false,-1, 127,0);
        tracep->declBit(c+27,"SPIMinion__pack_size_128 v sclk", false,-1);
        tracep->declBit(c+19,"SPIMinion__pack_size_128 v cs", false,-1);
        tracep->declBit(c+25,"SPIMinion__pack_size_128 v mosi", false,-1);
        tracep->declBit(c+24,"SPIMinion__pack_size_128 v miso", false,-1);
        tracep->declBit(c+1,"SPIMinion__pack_size_128 v cs_synced", false,-1);
        tracep->declBit(c+2,"SPIMinion__pack_size_128 v cs_posedge", false,-1);
        tracep->declBit(c+3,"SPIMinion__pack_size_128 v cs_negedge", false,-1);
        tracep->declBit(c+4,"SPIMinion__pack_size_128 v sclk_synced", false,-1);
        tracep->declBit(c+5,"SPIMinion__pack_size_128 v sclk_posedge", false,-1);
        tracep->declBit(c+6,"SPIMinion__pack_size_128 v sclk_negedge", false,-1);
        tracep->declArray(c+7,"SPIMinion__pack_size_128 v mosi_shift_reg_out", false,-1, 127,0);
        tracep->declArray(c+11,"SPIMinion__pack_size_128 v miso_reg_out", false,-1, 127,0);
        tracep->declBit(c+18,"SPIMinion__pack_size_128 v cs_sync_shift clk", false,-1);
        tracep->declBit(c+19,"SPIMinion__pack_size_128 v cs_sync_shift sig_in", false,-1);
        tracep->declBit(c+1,"SPIMinion__pack_size_128 v cs_sync_shift sig_synced", false,-1);
        tracep->declBit(c+2,"SPIMinion__pack_size_128 v cs_sync_shift sig_posedge", false,-1);
        tracep->declBit(c+3,"SPIMinion__pack_size_128 v cs_sync_shift sig_negedge", false,-1);
        tracep->declBus(c+15,"SPIMinion__pack_size_128 v cs_sync_shift q", false,-1, 2,0);
        tracep->declBit(c+18,"SPIMinion__pack_size_128 v sclk_sync_shift clk", false,-1);
        tracep->declBit(c+27,"SPIMinion__pack_size_128 v sclk_sync_shift sig_in", false,-1);
        tracep->declBit(c+4,"SPIMinion__pack_size_128 v sclk_sync_shift sig_synced", false,-1);
        tracep->declBit(c+5,"SPIMinion__pack_size_128 v sclk_sync_shift sig_posedge", false,-1);
        tracep->declBit(c+6,"SPIMinion__pack_size_128 v sclk_sync_shift sig_negedge", false,-1);
        tracep->declBus(c+16,"SPIMinion__pack_size_128 v sclk_sync_shift q", false,-1, 2,0);
        tracep->declBus(c+34,"SPIMinion__pack_size_128 v mosi_shift_reg p_nbits", false,-1, 31,0);
        tracep->declBit(c+18,"SPIMinion__pack_size_128 v mosi_shift_reg clk", false,-1);
        tracep->declArray(c+7,"SPIMinion__pack_size_128 v mosi_shift_reg q", false,-1, 127,0);
        tracep->declBit(c+25,"SPIMinion__pack_size_128 v mosi_shift_reg d", false,-1);
        tracep->declBit(c+17,"SPIMinion__pack_size_128 v mosi_shift_reg en", false,-1);
        tracep->declBus(c+34,"SPIMinion__pack_size_128 v miso_shift_reg p_nbits", false,-1, 31,0);
        tracep->declBit(c+18,"SPIMinion__pack_size_128 v miso_shift_reg clk", false,-1);
        tracep->declArray(c+11,"SPIMinion__pack_size_128 v miso_shift_reg q", false,-1, 127,0);
        tracep->declArray(c+20,"SPIMinion__pack_size_128 v miso_shift_reg d", false,-1, 127,0);
        tracep->declBit(c+28,"SPIMinion__pack_size_128 v miso_shift_reg fill", false,-1);
        tracep->declBit(c+6,"SPIMinion__pack_size_128 v miso_shift_reg shift", false,-1);
    }
}

void VSPIMinion__pack_size_128::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSPIMinion__pack_size_128::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSPIMinion__pack_size_128::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSPIMinion__pack_size_128__Syms* __restrict vlSymsp = static_cast<VSPIMinion__pack_size_128__Syms*>(userp);
    VSPIMinion__pack_size_128* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                       >> 1U))));
        tracep->fullBit(oldp+2,((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                              >> 1U)))));
        tracep->fullBit(oldp+3,((2U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                              >> 1U)))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                       >> 1U))));
        tracep->fullBit(oldp+5,((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                              >> 1U)))));
        tracep->fullBit(oldp+6,((2U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                              >> 1U)))));
        tracep->fullWData(oldp+7,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__mosi_shift_reg_out),128);
        tracep->fullWData(oldp+11,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__miso_reg_out),128);
        tracep->fullCData(oldp+15,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q),3);
        tracep->fullCData(oldp+16,(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q),3);
        tracep->fullBit(oldp+17,(((1U == (3U & ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__sclk_sync_shift__DOT__q) 
                                                >> 1U))) 
                                  & (~ ((IData)(vlTOPp->SPIMinion___05Fpack_size_128__DOT__v__DOT__cs_sync_shift__DOT__q) 
                                        >> 1U)))));
        tracep->fullBit(oldp+18,(vlTOPp->clk));
        tracep->fullBit(oldp+19,(vlTOPp->cs));
        tracep->fullWData(oldp+20,(vlTOPp->from_device),128);
        tracep->fullBit(oldp+24,(vlTOPp->miso));
        tracep->fullBit(oldp+25,(vlTOPp->mosi));
        tracep->fullBit(oldp+26,(vlTOPp->reset));
        tracep->fullBit(oldp+27,(vlTOPp->sclk));
        tracep->fullBit(oldp+28,(vlTOPp->seize));
        tracep->fullBit(oldp+29,(vlTOPp->serve));
        tracep->fullWData(oldp+30,(vlTOPp->to_device),128);
        tracep->fullIData(oldp+34,(0x80U),32);
    }
}
