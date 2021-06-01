// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPURetimed_noparam__Syms.h"


//======================

void VFPURetimed_noparam::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFPURetimed_noparam::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFPURetimed_noparam::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFPURetimed_noparam::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFPURetimed_noparam::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+344,"reset", false,-1);
        tracep->declBus(c+345,"clk", false,-1, 0,0);
        tracep->declArray(c+346,"req_msg", false,-1, 127,0);
        tracep->declBus(c+350,"req_rdy", false,-1, 0,0);
        tracep->declBus(c+351,"req_val", false,-1, 0,0);
        tracep->declArray(c+352,"resp_msg", false,-1, 127,0);
        tracep->declBus(c+356,"resp_rdy", false,-1, 0,0);
        tracep->declBus(c+357,"resp_val", false,-1, 0,0);
        tracep->declBit(c+344,"FPURetimed_noparam reset", false,-1);
        tracep->declBus(c+345,"FPURetimed_noparam clk", false,-1, 0,0);
        tracep->declArray(c+346,"FPURetimed_noparam req_msg", false,-1, 127,0);
        tracep->declBus(c+350,"FPURetimed_noparam req_rdy", false,-1, 0,0);
        tracep->declBus(c+351,"FPURetimed_noparam req_val", false,-1, 0,0);
        tracep->declArray(c+352,"FPURetimed_noparam resp_msg", false,-1, 127,0);
        tracep->declBus(c+356,"FPURetimed_noparam resp_rdy", false,-1, 0,0);
        tracep->declBus(c+357,"FPURetimed_noparam resp_val", false,-1, 0,0);
        tracep->declBus(c+362,"FPURetimed_noparam v expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v sigWidth", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v clk", false,-1);
        tracep->declBit(c+350,"FPURetimed_noparam v req_rdy", false,-1);
        tracep->declBit(c+351,"FPURetimed_noparam v req_val", false,-1);
        tracep->declArray(c+346,"FPURetimed_noparam v req_msg", false,-1, 127,0);
        tracep->declBit(c+356,"FPURetimed_noparam v resp_rdy", false,-1);
        tracep->declBit(c+357,"FPURetimed_noparam v resp_val", false,-1);
        tracep->declArray(c+352,"FPURetimed_noparam v resp_msg", false,-1, 127,0);
        tracep->declArray(c+22,"FPURetimed_noparam v input_msg", false,-1, 123,0);
        tracep->declBit(c+364,"FPURetimed_noparam v control", false,-1);
        tracep->declBus(c+365,"FPURetimed_noparam v op", false,-1, 1,0);
        tracep->declBus(c+26,"FPURetimed_noparam v a", false,-1, 31,0);
        tracep->declBus(c+27,"FPURetimed_noparam v b", false,-1, 31,0);
        tracep->declBus(c+28,"FPURetimed_noparam v c", false,-1, 31,0);
        tracep->declBus(c+366,"FPURetimed_noparam v roundingMode", false,-1, 2,0);
        tracep->declBus(c+29,"FPURetimed_noparam v out", false,-1, 31,0);
        tracep->declBus(c+30,"FPURetimed_noparam v exceptionFlags", false,-1, 4,0);
        tracep->declBus(c+31,"FPURetimed_noparam v out_pass1", false,-1, 31,0);
        tracep->declBus(c+32,"FPURetimed_noparam v out_pass2", false,-1, 31,0);
        tracep->declBit(c+33,"FPURetimed_noparam v val_pass1", false,-1);
        tracep->declBit(c+34,"FPURetimed_noparam v val_pass2", false,-1);
        tracep->declBus(c+367,"FPURetimed_noparam v inputReg p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v inputReg clk", false,-1);
        tracep->declArray(c+22,"FPURetimed_noparam v inputReg q", false,-1, 123,0);
        tracep->declArray(c+358,"FPURetimed_noparam v inputReg d", false,-1, 123,0);
        tracep->declBit(c+351,"FPURetimed_noparam v inputReg en", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component sigWidth", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component control", false,-1, 0,0);
        tracep->declBus(c+365,"FPURetimed_noparam v fpu_component op", false,-1, 1,0);
        tracep->declBus(c+26,"FPURetimed_noparam v fpu_component a", false,-1, 31,0);
        tracep->declBus(c+27,"FPURetimed_noparam v fpu_component b", false,-1, 31,0);
        tracep->declBus(c+28,"FPURetimed_noparam v fpu_component c", false,-1, 31,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component roundingMode", false,-1, 2,0);
        tracep->declBus(c+31,"FPURetimed_noparam v fpu_component out", false,-1, 31,0);
        tracep->declBus(c+30,"FPURetimed_noparam v fpu_component exceptionFlags", false,-1, 4,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component a_rec", false,-1, 32,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component b_rec", false,-1, 32,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component c_rec", false,-1, 32,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component out_rec", false,-1, 32,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component a_convert expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component a_convert sigWidth", false,-1, 31,0);
        tracep->declBus(c+26,"FPURetimed_noparam v fpu_component a_convert in", false,-1, 31,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component a_convert out", false,-1, 32,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component a_convert normDistWidth", false,-1, 31,0);
        tracep->declBit(c+43,"FPURetimed_noparam v fpu_component a_convert sign", false,-1);
        tracep->declBus(c+44,"FPURetimed_noparam v fpu_component a_convert expIn", false,-1, 7,0);
        tracep->declBus(c+45,"FPURetimed_noparam v fpu_component a_convert fractIn", false,-1, 22,0);
        tracep->declBit(c+46,"FPURetimed_noparam v fpu_component a_convert isZeroExpIn", false,-1);
        tracep->declBit(c+47,"FPURetimed_noparam v fpu_component a_convert isZeroFractIn", false,-1);
        tracep->declBus(c+48,"FPURetimed_noparam v fpu_component a_convert normDist", false,-1, 4,0);
        tracep->declBus(c+49,"FPURetimed_noparam v fpu_component a_convert subnormFract", false,-1, 22,0);
        tracep->declBus(c+50,"FPURetimed_noparam v fpu_component a_convert adjustedExp", false,-1, 8,0);
        tracep->declBit(c+51,"FPURetimed_noparam v fpu_component a_convert isZero", false,-1);
        tracep->declBit(c+52,"FPURetimed_noparam v fpu_component a_convert isSpecial", false,-1);
        tracep->declBus(c+53,"FPURetimed_noparam v fpu_component a_convert exp", false,-1, 8,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros inWidth", false,-1, 31,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros countWidth", false,-1, 31,0);
        tracep->declBus(c+45,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros in", false,-1, 22,0);
        tracep->declBus(c+48,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros count", false,-1, 4,0);
        tracep->declBus(c+54,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros reverseIn", false,-1, 22,0);
        tracep->declBus(c+55,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros oneLeastReverseIn", false,-1, 23,0);
        tracep->declBus(c+370,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[0] countSoFar", false,-1, 4,0);
        tracep->declBus(c+56,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[1] countSoFar", false,-1, 4,0);
        tracep->declBus(c+57,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[2] countSoFar", false,-1, 4,0);
        tracep->declBus(c+58,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[3] countSoFar", false,-1, 4,0);
        tracep->declBus(c+59,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[4] countSoFar", false,-1, 4,0);
        tracep->declBus(c+60,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[5] countSoFar", false,-1, 4,0);
        tracep->declBus(c+61,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[6] countSoFar", false,-1, 4,0);
        tracep->declBus(c+62,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[7] countSoFar", false,-1, 4,0);
        tracep->declBus(c+63,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[8] countSoFar", false,-1, 4,0);
        tracep->declBus(c+64,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[9] countSoFar", false,-1, 4,0);
        tracep->declBus(c+65,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[10] countSoFar", false,-1, 4,0);
        tracep->declBus(c+66,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[11] countSoFar", false,-1, 4,0);
        tracep->declBus(c+67,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[12] countSoFar", false,-1, 4,0);
        tracep->declBus(c+68,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[13] countSoFar", false,-1, 4,0);
        tracep->declBus(c+69,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[14] countSoFar", false,-1, 4,0);
        tracep->declBus(c+70,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[15] countSoFar", false,-1, 4,0);
        tracep->declBus(c+71,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[16] countSoFar", false,-1, 4,0);
        tracep->declBus(c+72,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[17] countSoFar", false,-1, 4,0);
        tracep->declBus(c+73,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[18] countSoFar", false,-1, 4,0);
        tracep->declBus(c+74,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[19] countSoFar", false,-1, 4,0);
        tracep->declBus(c+75,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[20] countSoFar", false,-1, 4,0);
        tracep->declBus(c+76,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[21] countSoFar", false,-1, 4,0);
        tracep->declBus(c+77,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[22] countSoFar", false,-1, 4,0);
        tracep->declBus(c+48,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros Bit[23] countSoFar", false,-1, 4,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros reverse_in width", false,-1, 31,0);
        tracep->declBus(c+45,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros reverse_in in", false,-1, 22,0);
        tracep->declBus(c+54,"FPURetimed_noparam v fpu_component a_convert countLeadingZeros reverse_in out", false,-1, 22,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component b_convert expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component b_convert sigWidth", false,-1, 31,0);
        tracep->declBus(c+27,"FPURetimed_noparam v fpu_component b_convert in", false,-1, 31,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component b_convert out", false,-1, 32,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component b_convert normDistWidth", false,-1, 31,0);
        tracep->declBit(c+78,"FPURetimed_noparam v fpu_component b_convert sign", false,-1);
        tracep->declBus(c+79,"FPURetimed_noparam v fpu_component b_convert expIn", false,-1, 7,0);
        tracep->declBus(c+80,"FPURetimed_noparam v fpu_component b_convert fractIn", false,-1, 22,0);
        tracep->declBit(c+81,"FPURetimed_noparam v fpu_component b_convert isZeroExpIn", false,-1);
        tracep->declBit(c+82,"FPURetimed_noparam v fpu_component b_convert isZeroFractIn", false,-1);
        tracep->declBus(c+83,"FPURetimed_noparam v fpu_component b_convert normDist", false,-1, 4,0);
        tracep->declBus(c+84,"FPURetimed_noparam v fpu_component b_convert subnormFract", false,-1, 22,0);
        tracep->declBus(c+85,"FPURetimed_noparam v fpu_component b_convert adjustedExp", false,-1, 8,0);
        tracep->declBit(c+86,"FPURetimed_noparam v fpu_component b_convert isZero", false,-1);
        tracep->declBit(c+87,"FPURetimed_noparam v fpu_component b_convert isSpecial", false,-1);
        tracep->declBus(c+88,"FPURetimed_noparam v fpu_component b_convert exp", false,-1, 8,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros inWidth", false,-1, 31,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros countWidth", false,-1, 31,0);
        tracep->declBus(c+80,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros in", false,-1, 22,0);
        tracep->declBus(c+83,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros count", false,-1, 4,0);
        tracep->declBus(c+89,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros reverseIn", false,-1, 22,0);
        tracep->declBus(c+90,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros oneLeastReverseIn", false,-1, 23,0);
        tracep->declBus(c+370,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[0] countSoFar", false,-1, 4,0);
        tracep->declBus(c+91,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[1] countSoFar", false,-1, 4,0);
        tracep->declBus(c+92,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[2] countSoFar", false,-1, 4,0);
        tracep->declBus(c+93,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[3] countSoFar", false,-1, 4,0);
        tracep->declBus(c+94,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[4] countSoFar", false,-1, 4,0);
        tracep->declBus(c+95,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[5] countSoFar", false,-1, 4,0);
        tracep->declBus(c+96,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[6] countSoFar", false,-1, 4,0);
        tracep->declBus(c+97,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[7] countSoFar", false,-1, 4,0);
        tracep->declBus(c+98,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[8] countSoFar", false,-1, 4,0);
        tracep->declBus(c+99,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[9] countSoFar", false,-1, 4,0);
        tracep->declBus(c+100,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[10] countSoFar", false,-1, 4,0);
        tracep->declBus(c+101,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[11] countSoFar", false,-1, 4,0);
        tracep->declBus(c+102,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[12] countSoFar", false,-1, 4,0);
        tracep->declBus(c+103,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[13] countSoFar", false,-1, 4,0);
        tracep->declBus(c+104,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[14] countSoFar", false,-1, 4,0);
        tracep->declBus(c+105,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[15] countSoFar", false,-1, 4,0);
        tracep->declBus(c+106,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[16] countSoFar", false,-1, 4,0);
        tracep->declBus(c+107,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[17] countSoFar", false,-1, 4,0);
        tracep->declBus(c+108,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[18] countSoFar", false,-1, 4,0);
        tracep->declBus(c+109,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[19] countSoFar", false,-1, 4,0);
        tracep->declBus(c+110,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[20] countSoFar", false,-1, 4,0);
        tracep->declBus(c+111,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[21] countSoFar", false,-1, 4,0);
        tracep->declBus(c+112,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[22] countSoFar", false,-1, 4,0);
        tracep->declBus(c+83,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros Bit[23] countSoFar", false,-1, 4,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros reverse_in width", false,-1, 31,0);
        tracep->declBus(c+80,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros reverse_in in", false,-1, 22,0);
        tracep->declBus(c+89,"FPURetimed_noparam v fpu_component b_convert countLeadingZeros reverse_in out", false,-1, 22,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component c_convert expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component c_convert sigWidth", false,-1, 31,0);
        tracep->declBus(c+28,"FPURetimed_noparam v fpu_component c_convert in", false,-1, 31,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component c_convert out", false,-1, 32,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component c_convert normDistWidth", false,-1, 31,0);
        tracep->declBit(c+113,"FPURetimed_noparam v fpu_component c_convert sign", false,-1);
        tracep->declBus(c+114,"FPURetimed_noparam v fpu_component c_convert expIn", false,-1, 7,0);
        tracep->declBus(c+115,"FPURetimed_noparam v fpu_component c_convert fractIn", false,-1, 22,0);
        tracep->declBit(c+116,"FPURetimed_noparam v fpu_component c_convert isZeroExpIn", false,-1);
        tracep->declBit(c+117,"FPURetimed_noparam v fpu_component c_convert isZeroFractIn", false,-1);
        tracep->declBus(c+118,"FPURetimed_noparam v fpu_component c_convert normDist", false,-1, 4,0);
        tracep->declBus(c+119,"FPURetimed_noparam v fpu_component c_convert subnormFract", false,-1, 22,0);
        tracep->declBus(c+120,"FPURetimed_noparam v fpu_component c_convert adjustedExp", false,-1, 8,0);
        tracep->declBit(c+121,"FPURetimed_noparam v fpu_component c_convert isZero", false,-1);
        tracep->declBit(c+122,"FPURetimed_noparam v fpu_component c_convert isSpecial", false,-1);
        tracep->declBus(c+123,"FPURetimed_noparam v fpu_component c_convert exp", false,-1, 8,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros inWidth", false,-1, 31,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros countWidth", false,-1, 31,0);
        tracep->declBus(c+115,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros in", false,-1, 22,0);
        tracep->declBus(c+118,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros count", false,-1, 4,0);
        tracep->declBus(c+124,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros reverseIn", false,-1, 22,0);
        tracep->declBus(c+125,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros oneLeastReverseIn", false,-1, 23,0);
        tracep->declBus(c+370,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[0] countSoFar", false,-1, 4,0);
        tracep->declBus(c+126,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[1] countSoFar", false,-1, 4,0);
        tracep->declBus(c+127,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[2] countSoFar", false,-1, 4,0);
        tracep->declBus(c+128,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[3] countSoFar", false,-1, 4,0);
        tracep->declBus(c+129,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[4] countSoFar", false,-1, 4,0);
        tracep->declBus(c+130,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[5] countSoFar", false,-1, 4,0);
        tracep->declBus(c+131,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[6] countSoFar", false,-1, 4,0);
        tracep->declBus(c+132,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[7] countSoFar", false,-1, 4,0);
        tracep->declBus(c+133,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[8] countSoFar", false,-1, 4,0);
        tracep->declBus(c+134,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[9] countSoFar", false,-1, 4,0);
        tracep->declBus(c+135,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[10] countSoFar", false,-1, 4,0);
        tracep->declBus(c+136,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[11] countSoFar", false,-1, 4,0);
        tracep->declBus(c+137,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[12] countSoFar", false,-1, 4,0);
        tracep->declBus(c+138,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[13] countSoFar", false,-1, 4,0);
        tracep->declBus(c+139,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[14] countSoFar", false,-1, 4,0);
        tracep->declBus(c+140,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[15] countSoFar", false,-1, 4,0);
        tracep->declBus(c+141,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[16] countSoFar", false,-1, 4,0);
        tracep->declBus(c+142,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[17] countSoFar", false,-1, 4,0);
        tracep->declBus(c+143,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[18] countSoFar", false,-1, 4,0);
        tracep->declBus(c+144,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[19] countSoFar", false,-1, 4,0);
        tracep->declBus(c+145,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[20] countSoFar", false,-1, 4,0);
        tracep->declBus(c+146,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[21] countSoFar", false,-1, 4,0);
        tracep->declBus(c+147,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[22] countSoFar", false,-1, 4,0);
        tracep->declBus(c+118,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros Bit[23] countSoFar", false,-1, 4,0);
        tracep->declBus(c+369,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros reverse_in width", false,-1, 31,0);
        tracep->declBus(c+115,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros reverse_in in", false,-1, 22,0);
        tracep->declBus(c+124,"FPURetimed_noparam v fpu_component c_convert countLeadingZeros reverse_in out", false,-1, 22,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec sigWidth", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component mulAddRec control", false,-1, 0,0);
        tracep->declBus(c+365,"FPURetimed_noparam v fpu_component mulAddRec op", false,-1, 1,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component mulAddRec a", false,-1, 32,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component mulAddRec b", false,-1, 32,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component mulAddRec c", false,-1, 32,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec roundingMode", false,-1, 2,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component mulAddRec out", false,-1, 32,0);
        tracep->declBus(c+30,"FPURetimed_noparam v fpu_component mulAddRec exceptionFlags", false,-1, 4,0);
        tracep->declBit(c+148,"FPURetimed_noparam v fpu_component mulAddRec invalidExc", false,-1);
        tracep->declBit(c+149,"FPURetimed_noparam v fpu_component mulAddRec out_isNaN", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec out_isInf", false,-1);
        tracep->declBit(c+151,"FPURetimed_noparam v fpu_component mulAddRec out_isZero", false,-1);
        tracep->declBit(c+152,"FPURetimed_noparam v fpu_component mulAddRec out_sign", false,-1);
        tracep->declBus(c+153,"FPURetimed_noparam v fpu_component mulAddRec out_sExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec out_sig", false,-1, 26,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw sigWidth", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw control", false,-1, 0,0);
        tracep->declBus(c+365,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw op", false,-1, 1,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw a", false,-1, 32,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw b", false,-1, 32,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw c", false,-1, 32,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw roundingMode", false,-1, 2,0);
        tracep->declBit(c+148,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw invalidExc", false,-1);
        tracep->declBit(c+149,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_isNaN", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_isInf", false,-1);
        tracep->declBit(c+151,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_isZero", false,-1);
        tracep->declBit(c+152,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_sign", false,-1);
        tracep->declBus(c+153,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_sExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw out_sig", false,-1, 26,0);
        tracep->declBus(c+155,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddA", false,-1, 23,0);
        tracep->declBus(c+156,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddB", false,-1, 23,0);
        tracep->declQuad(c+157,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddC", false,-1, 47,0);
        tracep->declBus(c+159,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw intermed_compactState", false,-1, 5,0);
        tracep->declBus(c+160,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw intermed_sExp", false,-1, 9,0);
        tracep->declBus(c+161,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw intermed_CDom_CAlignDist", false,-1, 4,0);
        tracep->declBus(c+162,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw intermed_highAlignedSigC", false,-1, 25,0);
        tracep->declQuad(c+163,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddResult", false,-1, 48,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sigWidth", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul control", false,-1, 0,0);
        tracep->declBus(c+365,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul op", false,-1, 1,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul a", false,-1, 32,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul b", false,-1, 32,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul c", false,-1, 32,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul roundingMode", false,-1, 2,0);
        tracep->declBus(c+155,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul mulAddA", false,-1, 23,0);
        tracep->declBus(c+156,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul mulAddB", false,-1, 23,0);
        tracep->declQuad(c+157,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul mulAddC", false,-1, 47,0);
        tracep->declBus(c+159,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul intermed_compactState", false,-1, 5,0);
        tracep->declBus(c+160,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul intermed_sExp", false,-1, 9,0);
        tracep->declBus(c+161,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul intermed_CDom_CAlignDist", false,-1, 4,0);
        tracep->declBus(c+162,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul intermed_highAlignedSigC", false,-1, 25,0);
        tracep->declBus(c+371,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul prodWidth", false,-1, 31,0);
        tracep->declBus(c+372,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sigSumWidth", false,-1, 31,0);
        tracep->declBit(c+165,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isNaNA", false,-1);
        tracep->declBit(c+166,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isInfA", false,-1);
        tracep->declBit(c+167,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isZeroA", false,-1);
        tracep->declBit(c+168,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul signA", false,-1);
        tracep->declBus(c+169,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sExpA", false,-1, 9,0);
        tracep->declBus(c+170,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sigA", false,-1, 24,0);
        tracep->declBit(c+171,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaNA", false,-1);
        tracep->declBit(c+172,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isNaNB", false,-1);
        tracep->declBit(c+173,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isInfB", false,-1);
        tracep->declBit(c+174,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isZeroB", false,-1);
        tracep->declBit(c+175,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul signB", false,-1);
        tracep->declBus(c+176,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sExpB", false,-1, 9,0);
        tracep->declBus(c+177,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sigB", false,-1, 24,0);
        tracep->declBit(c+178,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaNB", false,-1);
        tracep->declBit(c+179,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isNaNC", false,-1);
        tracep->declBit(c+180,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isInfC", false,-1);
        tracep->declBit(c+181,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isZeroC", false,-1);
        tracep->declBit(c+182,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul signC", false,-1);
        tracep->declBus(c+183,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sExpC", false,-1, 9,0);
        tracep->declBus(c+184,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sigC", false,-1, 24,0);
        tracep->declBit(c+185,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaNC", false,-1);
        tracep->declBit(c+186,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul signProd", false,-1);
        tracep->declBus(c+187,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sExpAlignedProd", false,-1, 10,0);
        tracep->declBit(c+188,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul doSubMags", false,-1);
        tracep->declBit(c+189,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul opSignC", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul roundingMode_min", false,-1);
        tracep->declBus(c+190,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sNatCAlignDist", false,-1, 10,0);
        tracep->declBus(c+191,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul posNatCAlignDist", false,-1, 9,0);
        tracep->declBit(c+192,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isMinCAlign", false,-1);
        tracep->declBit(c+193,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CIsDominant", false,-1);
        tracep->declBus(c+160,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul sExpSum", false,-1, 9,0);
        tracep->declBus(c+194,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CAlignDist", false,-1, 6,0);
        tracep->declArray(c+195,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul extComplSigC", false,-1, 77,0);
        tracep->declArray(c+198,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul mainAlignedSigC", false,-1, 76,0);
        tracep->declBus(c+373,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CGrainAlign", false,-1, 31,0);
        tracep->declBus(c+201,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul grainAlignedSigC", false,-1, 26,0);
        tracep->declBus(c+202,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul reduced4SigC", false,-1, 6,0);
        tracep->declBus(c+374,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CExtraMaskHiBound", false,-1, 31,0);
        tracep->declBus(c+375,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CExtraMaskLoBound", false,-1, 31,0);
        tracep->declBus(c+203,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul CExtraMask", false,-1, 5,0);
        tracep->declBit(c+204,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul reduced4CExtra", false,-1);
        tracep->declArray(c+205,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul alignedSigC", false,-1, 74,0);
        tracep->declBit(c+208,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isNaNAOrB", false,-1);
        tracep->declBit(c+209,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isNaNAny", false,-1);
        tracep->declBit(c+210,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isInfAOrB", false,-1);
        tracep->declBit(c+211,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul invalidProd", false,-1);
        tracep->declBit(c+212,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul notSigNaN_invalidExc", false,-1);
        tracep->declBit(c+213,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul invalidExc", false,-1);
        tracep->declBit(c+214,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul notNaN_addZeros", false,-1);
        tracep->declBit(c+215,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul specialCase", false,-1);
        tracep->declBit(c+216,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul specialNotNaN_signOut", false,-1);
        tracep->declBit(c+216,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul special_signOut", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a sigWidth", false,-1, 31,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a in", false,-1, 32,0);
        tracep->declBit(c+165,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a isNaN", false,-1);
        tracep->declBit(c+166,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a isInf", false,-1);
        tracep->declBit(c+167,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a isZero", false,-1);
        tracep->declBit(c+168,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a sign", false,-1);
        tracep->declBus(c+169,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a sExp", false,-1, 9,0);
        tracep->declBus(c+170,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a sig", false,-1, 24,0);
        tracep->declBus(c+217,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a exp", false,-1, 8,0);
        tracep->declBus(c+218,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a fract", false,-1, 22,0);
        tracep->declBit(c+219,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_a isSpecial", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_a expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_a sigWidth", false,-1, 31,0);
        tracep->declQuad(c+35,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_a in", false,-1, 32,0);
        tracep->declBit(c+171,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_a isSigNaN", false,-1);
        tracep->declBit(c+220,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_a isNaN", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b sigWidth", false,-1, 31,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b in", false,-1, 32,0);
        tracep->declBit(c+172,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b isNaN", false,-1);
        tracep->declBit(c+173,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b isInf", false,-1);
        tracep->declBit(c+174,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b isZero", false,-1);
        tracep->declBit(c+175,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b sign", false,-1);
        tracep->declBus(c+176,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b sExp", false,-1, 9,0);
        tracep->declBus(c+177,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b sig", false,-1, 24,0);
        tracep->declBus(c+221,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b exp", false,-1, 8,0);
        tracep->declBus(c+222,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b fract", false,-1, 22,0);
        tracep->declBit(c+223,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_b isSpecial", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_b expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_b sigWidth", false,-1, 31,0);
        tracep->declQuad(c+37,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_b in", false,-1, 32,0);
        tracep->declBit(c+178,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_b isSigNaN", false,-1);
        tracep->declBit(c+224,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_b isNaN", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c sigWidth", false,-1, 31,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c in", false,-1, 32,0);
        tracep->declBit(c+179,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c isNaN", false,-1);
        tracep->declBit(c+180,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c isInf", false,-1);
        tracep->declBit(c+181,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c isZero", false,-1);
        tracep->declBit(c+182,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c sign", false,-1);
        tracep->declBus(c+183,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c sExp", false,-1, 9,0);
        tracep->declBus(c+184,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c sig", false,-1, 24,0);
        tracep->declBus(c+225,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c exp", false,-1, 8,0);
        tracep->declBus(c+226,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c fract", false,-1, 22,0);
        tracep->declBit(c+227,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul recFNToRawFN_c isSpecial", false,-1);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_c expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_c sigWidth", false,-1, 31,0);
        tracep->declQuad(c+39,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_c in", false,-1, 32,0);
        tracep->declBit(c+185,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_c isSigNaN", false,-1);
        tracep->declBit(c+228,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul isSigNaN_c isNaN", false,-1);
        tracep->declBus(c+376,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul compressBy4_sigC inWidth", false,-1, 31,0);
        tracep->declBus(c+201,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul compressBy4_sigC in", false,-1, 26,0);
        tracep->declBus(c+202,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul compressBy4_sigC out", false,-1, 6,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul compressBy4_sigC maxBitNumReduced", false,-1, 31,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask inWidth", false,-1, 31,0);
        tracep->declBus(c+374,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask topBound", false,-1, 31,0);
        tracep->declBus(c+375,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask bottomBound", false,-1, 31,0);
        tracep->declBus(c+229,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask in", false,-1, 4,0);
        tracep->declBus(c+203,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask out", false,-1, 5,0);
        tracep->declBus(c+378,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask numInVals", false,-1, 31,0);
        tracep->declQuad(c+1,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask c", false,-1, 32,0);
        tracep->declBus(c+230,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask reverseOut", false,-1, 5,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask reverse width", false,-1, 31,0);
        tracep->declBus(c+230,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask reverse in", false,-1, 5,0);
        tracep->declBus(c+203,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_preMul lowMask_CExtraMask reverse out", false,-1, 5,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul sigWidth", false,-1, 31,0);
        tracep->declBus(c+159,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul intermed_compactState", false,-1, 5,0);
        tracep->declBus(c+160,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul intermed_sExp", false,-1, 9,0);
        tracep->declBus(c+161,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul intermed_CDom_CAlignDist", false,-1, 4,0);
        tracep->declBus(c+162,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul intermed_highAlignedSigC", false,-1, 25,0);
        tracep->declQuad(c+163,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul mulAddResult", false,-1, 48,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul roundingMode", false,-1, 2,0);
        tracep->declBit(c+148,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul invalidExc", false,-1);
        tracep->declBit(c+149,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_isNaN", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_isInf", false,-1);
        tracep->declBit(c+151,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_isZero", false,-1);
        tracep->declBit(c+152,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_sign", false,-1);
        tracep->declBus(c+153,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_sExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul out_sig", false,-1, 26,0);
        tracep->declBus(c+371,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul prodWidth", false,-1, 31,0);
        tracep->declBus(c+372,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul sigSumWidth", false,-1, 31,0);
        tracep->declBit(c+231,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul specialCase", false,-1);
        tracep->declBit(c+232,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notNaN_addZeros", false,-1);
        tracep->declBit(c+233,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul signProd", false,-1);
        tracep->declBit(c+234,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul doSubMags", false,-1);
        tracep->declBit(c+235,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CIsDominant", false,-1);
        tracep->declBit(c+236,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul bit0AlignedSigC", false,-1);
        tracep->declBit(c+237,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul special_signOut", false,-1);
        tracep->declBit(c+238,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul opSignC", false,-1);
        tracep->declBus(c+239,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul incHighAlignedSigC", false,-1, 25,0);
        tracep->declArray(c+240,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul sigSum", false,-1, 74,0);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul roundingMode_min", false,-1);
        tracep->declBit(c+238,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_sign", false,-1);
        tracep->declBus(c+243,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_sExp", false,-1, 9,0);
        tracep->declQuad(c+244,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_absSigSum", false,-1, 49,0);
        tracep->declBit(c+246,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_absSigSumExtra", false,-1);
        tracep->declBus(c+247,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_mainSig", false,-1, 28,0);
        tracep->declBus(c+248,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_grainAlignedLowSig", false,-1, 26,0);
        tracep->declBus(c+249,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_reduced4LowSig", false,-1, 6,0);
        tracep->declBus(c+250,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_sigExtraMask", false,-1, 5,0);
        tracep->declBit(c+251,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_reduced4SigExtra", false,-1);
        tracep->declBus(c+252,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_sig", false,-1, 26,0);
        tracep->declBit(c+253,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_signSigSum", false,-1);
        tracep->declQuad(c+254,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_absSigSum", false,-1, 50,0);
        tracep->declBus(c+256,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_reduced2AbsSigSum", false,-1, 25,0);
        tracep->declBus(c+257,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_normDistReduced2", false,-1, 4,0);
        tracep->declBus(c+258,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_nearNormDist", false,-1, 5,0);
        tracep->declBus(c+259,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_sExp", false,-1, 9,0);
        tracep->declBus(c+260,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_mainSig", false,-1, 28,0);
        tracep->declBus(c+261,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul CDom_grainAlignedLowReduced2Sig", false,-1, 12,0);
        tracep->declBus(c+262,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_reduced4AbsSigSum", false,-1, 6,0);
        tracep->declBus(c+263,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_sigExtraMask", false,-1, 5,0);
        tracep->declBit(c+264,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_reduced4SigExtra", false,-1);
        tracep->declBus(c+265,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_sig", false,-1, 26,0);
        tracep->declBit(c+266,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_completeCancellation", false,-1);
        tracep->declBit(c+267,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul notCDom_sign", false,-1);
        tracep->declBus(c+376,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy4_CDom_absSigSum inWidth", false,-1, 31,0);
        tracep->declBus(c+248,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy4_CDom_absSigSum in", false,-1, 26,0);
        tracep->declBus(c+249,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy4_CDom_absSigSum out", false,-1, 6,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy4_CDom_absSigSum maxBitNumReduced", false,-1, 31,0);
        tracep->declBus(c+379,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask inWidth", false,-1, 31,0);
        tracep->declBus(c+380,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask topBound", false,-1, 31,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask bottomBound", false,-1, 31,0);
        tracep->declBus(c+268,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask in", false,-1, 2,0);
        tracep->declBus(c+250,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask out", false,-1, 5,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask numInVals", false,-1, 31,0);
        tracep->declBus(c+3,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask c", false,-1, 8,0);
        tracep->declBus(c+269,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask reverseOut", false,-1, 5,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask reverse width", false,-1, 31,0);
        tracep->declBus(c+269,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask reverse in", false,-1, 5,0);
        tracep->declBus(c+250,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_CDom_sigExtraMask reverse out", false,-1, 5,0);
        tracep->declBus(c+381,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_absSigSum inWidth", false,-1, 31,0);
        tracep->declQuad(c+254,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_absSigSum in", false,-1, 50,0);
        tracep->declBus(c+256,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_absSigSum out", false,-1, 25,0);
        tracep->declBus(c+382,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_absSigSum maxBitNumReduced", false,-1, 31,0);
        tracep->declBus(c+383,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom inWidth", false,-1, 31,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom countWidth", false,-1, 31,0);
        tracep->declBus(c+256,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom in", false,-1, 25,0);
        tracep->declBus(c+257,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom count", false,-1, 4,0);
        tracep->declBus(c+270,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom reverseIn", false,-1, 25,0);
        tracep->declBus(c+271,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom oneLeastReverseIn", false,-1, 26,0);
        tracep->declBus(c+370,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[0] countSoFar", false,-1, 4,0);
        tracep->declBus(c+272,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[1] countSoFar", false,-1, 4,0);
        tracep->declBus(c+273,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[2] countSoFar", false,-1, 4,0);
        tracep->declBus(c+274,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[3] countSoFar", false,-1, 4,0);
        tracep->declBus(c+275,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[4] countSoFar", false,-1, 4,0);
        tracep->declBus(c+276,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[5] countSoFar", false,-1, 4,0);
        tracep->declBus(c+277,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[6] countSoFar", false,-1, 4,0);
        tracep->declBus(c+278,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[7] countSoFar", false,-1, 4,0);
        tracep->declBus(c+279,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[8] countSoFar", false,-1, 4,0);
        tracep->declBus(c+280,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[9] countSoFar", false,-1, 4,0);
        tracep->declBus(c+281,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[10] countSoFar", false,-1, 4,0);
        tracep->declBus(c+282,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[11] countSoFar", false,-1, 4,0);
        tracep->declBus(c+283,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[12] countSoFar", false,-1, 4,0);
        tracep->declBus(c+284,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[13] countSoFar", false,-1, 4,0);
        tracep->declBus(c+285,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[14] countSoFar", false,-1, 4,0);
        tracep->declBus(c+286,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[15] countSoFar", false,-1, 4,0);
        tracep->declBus(c+287,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[16] countSoFar", false,-1, 4,0);
        tracep->declBus(c+288,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[17] countSoFar", false,-1, 4,0);
        tracep->declBus(c+289,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[18] countSoFar", false,-1, 4,0);
        tracep->declBus(c+290,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[19] countSoFar", false,-1, 4,0);
        tracep->declBus(c+291,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[20] countSoFar", false,-1, 4,0);
        tracep->declBus(c+292,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[21] countSoFar", false,-1, 4,0);
        tracep->declBus(c+293,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[22] countSoFar", false,-1, 4,0);
        tracep->declBus(c+294,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[23] countSoFar", false,-1, 4,0);
        tracep->declBus(c+295,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[24] countSoFar", false,-1, 4,0);
        tracep->declBus(c+296,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[25] countSoFar", false,-1, 4,0);
        tracep->declBus(c+257,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom Bit[26] countSoFar", false,-1, 4,0);
        tracep->declBus(c+383,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom reverse_in width", false,-1, 31,0);
        tracep->declBus(c+256,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom reverse_in in", false,-1, 25,0);
        tracep->declBus(c+270,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul countLeadingZeros_notCDom reverse_in out", false,-1, 25,0);
        tracep->declBus(c+384,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_reduced2AbsSigSum inWidth", false,-1, 31,0);
        tracep->declBus(c+261,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_reduced2AbsSigSum in", false,-1, 12,0);
        tracep->declBus(c+262,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_reduced2AbsSigSum out", false,-1, 6,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul compressBy2_notCDom_reduced2AbsSigSum maxBitNumReduced", false,-1, 31,0);
        tracep->declBus(c+385,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask inWidth", false,-1, 31,0);
        tracep->declBus(c+380,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask topBound", false,-1, 31,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask bottomBound", false,-1, 31,0);
        tracep->declBus(c+297,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask in", false,-1, 3,0);
        tracep->declBus(c+263,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask out", false,-1, 5,0);
        tracep->declBus(c+386,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask numInVals", false,-1, 31,0);
        tracep->declBus(c+4,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask c", false,-1, 16,0);
        tracep->declBus(c+298,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask reverseOut", false,-1, 5,0);
        tracep->declBus(c+377,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask reverse width", false,-1, 31,0);
        tracep->declBus(c+298,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask reverse in", false,-1, 5,0);
        tracep->declBus(c+263,"FPURetimed_noparam v fpu_component mulAddRec mulAddRecFNToRaw mulAddToRaw_postMul lowMask_notCDom_sigExtraMask reverse out", false,-1, 5,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut sigWidth", false,-1, 31,0);
        tracep->declBus(c+380,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut options", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut control", false,-1, 0,0);
        tracep->declBit(c+148,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut invalidExc", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut infiniteExc", false,-1);
        tracep->declBit(c+149,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_isNaN", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_isInf", false,-1);
        tracep->declBit(c+151,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_isZero", false,-1);
        tracep->declBit(c+152,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_sign", false,-1);
        tracep->declBus(c+153,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_sExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut in_sig", false,-1, 26,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundingMode", false,-1, 2,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut out", false,-1, 32,0);
        tracep->declBus(c+30,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut exceptionFlags", false,-1, 4,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN inExpWidth", false,-1, 31,0);
        tracep->declBus(c+383,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN inSigWidth", false,-1, 31,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outExpWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outSigWidth", false,-1, 31,0);
        tracep->declBus(c+380,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN options", false,-1, 31,0);
        tracep->declBus(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN control", false,-1, 0,0);
        tracep->declBit(c+148,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN invalidExc", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN infiniteExc", false,-1);
        tracep->declBit(c+149,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_isNaN", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_isInf", false,-1);
        tracep->declBit(c+151,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_isZero", false,-1);
        tracep->declBit(c+152,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_sign", false,-1);
        tracep->declBus(c+153,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_sExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN in_sig", false,-1, 26,0);
        tracep->declBus(c+366,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode", false,-1, 2,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN out", false,-1, 32,0);
        tracep->declBus(c+30,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN exceptionFlags", false,-1, 4,0);
        tracep->declBus(c+387,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN sigMSBitAlwaysZero", false,-1, 0,0);
        tracep->declBus(c+376,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN effectiveInSigWidth", false,-1, 31,0);
        tracep->declBus(c+387,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN neverUnderflows", false,-1, 0,0);
        tracep->declBus(c+387,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN neverOverflows", false,-1, 0,0);
        tracep->declBus(c+388,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN adjustedExpWidth", false,-1, 31,0);
        tracep->declBus(c+389,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outNaNExp", false,-1, 31,0);
        tracep->declBus(c+390,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outInfExp", false,-1, 31,0);
        tracep->declBus(c+391,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outMaxFiniteExp", false,-1, 31,0);
        tracep->declBus(c+392,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outMinNormExp", false,-1, 31,0);
        tracep->declBus(c+393,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN outMinNonzeroExp", false,-1, 31,0);
        tracep->declBit(c+394,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_near_even", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_minMag", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_min", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_max", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_near_maxMag", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundingMode_odd", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN roundMagUp", false,-1);
        tracep->declBit(c+299,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN isNaNOut", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN propagateNaNPayload", false,-1);
        tracep->declBus(c+300,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN sAdjustedExp", false,-1, 9,0);
        tracep->declBus(c+154,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN adjustedSig", false,-1, 26,0);
        tracep->declBit(c+301,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN doShiftSigDown1", false,-1);
        tracep->declBus(c+302,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_expOut", false,-1, 8,0);
        tracep->declBus(c+303,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_fractOut", false,-1, 22,0);
        tracep->declBit(c+304,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_overflow", false,-1);
        tracep->declBit(c+305,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_totalUnderflow", false,-1);
        tracep->declBit(c+306,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_underflow", false,-1);
        tracep->declBit(c+307,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN common_inexact", false,-1);
        tracep->declBit(c+150,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN notNaN_isSpecialInfOut", false,-1);
        tracep->declBit(c+308,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN commonCase", false,-1);
        tracep->declBit(c+309,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN overflow", false,-1);
        tracep->declBit(c+310,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN underflow", false,-1);
        tracep->declBit(c+311,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN inexact", false,-1);
        tracep->declBit(c+394,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN overflow_roundMagUp", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN pegMinNonzeroMagOut", false,-1);
        tracep->declBit(c+364,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN pegMaxFiniteMagOut", false,-1);
        tracep->declBit(c+312,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN notNaN_isInfOut", false,-1);
        tracep->declBit(c+313,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN signOut", false,-1);
        tracep->declBus(c+314,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN expOut", false,-1, 8,0);
        tracep->declBus(c+315,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN fractOut", false,-1, 22,0);
        tracep->declBus(c+316,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundMask", false,-1, 26,0);
        tracep->declBus(c+317,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 roundMask_main", false,-1, 24,0);
        tracep->declBus(c+318,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 shiftedRoundMask", false,-1, 26,0);
        tracep->declBus(c+319,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundPosMask", false,-1, 26,0);
        tracep->declBit(c+320,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundPosBit", false,-1);
        tracep->declBit(c+321,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 anyRoundExtra", false,-1);
        tracep->declBit(c+322,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 anyRound", false,-1);
        tracep->declBit(c+320,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundIncr", false,-1);
        tracep->declBus(c+323,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundedSig", false,-1, 25,0);
        tracep->declBus(c+324,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 sExtAdjustedExp", false,-1, 10,0);
        tracep->declBus(c+325,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 sRoundedExp", false,-1, 10,0);
        tracep->declBit(c+326,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 unboundedRange_roundPosBit", false,-1);
        tracep->declBit(c+327,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 unboundedRange_anyRound", false,-1);
        tracep->declBit(c+326,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 unboundedRange_roundIncr", false,-1);
        tracep->declBit(c+328,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 roundCarry", false,-1);
        tracep->declBus(c+395,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask inWidth", false,-1, 31,0);
        tracep->declBus(c+396,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask topBound", false,-1, 31,0);
        tracep->declBus(c+392,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask bottomBound", false,-1, 31,0);
        tracep->declBus(c+329,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask in", false,-1, 8,0);
        tracep->declBus(c+317,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask out", false,-1, 24,0);
        tracep->declBus(c+397,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask numInVals", false,-1, 31,0);
        tracep->declArray(c+5,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask c", false,-1, 512,0);
        tracep->declBus(c+330,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask reverseOut", false,-1, 24,0);
        tracep->declBus(c+382,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask reverse width", false,-1, 31,0);
        tracep->declBus(c+330,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask reverse in", false,-1, 24,0);
        tracep->declBus(c+317,"FPURetimed_noparam v fpu_component mulAddRec roundRawOut roundAnyRawFNToRecFN genblk4 genblk2 lowMask_roundMask reverse out", false,-1, 24,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component out_convert expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component out_convert sigWidth", false,-1, 31,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component out_convert in", false,-1, 32,0);
        tracep->declBus(c+31,"FPURetimed_noparam v fpu_component out_convert out", false,-1, 31,0);
        tracep->declBus(c+398,"FPURetimed_noparam v fpu_component out_convert minNormExp", false,-1, 8,0);
        tracep->declBus(c+368,"FPURetimed_noparam v fpu_component out_convert normDistWidth", false,-1, 31,0);
        tracep->declBit(c+331,"FPURetimed_noparam v fpu_component out_convert isNaN", false,-1);
        tracep->declBit(c+332,"FPURetimed_noparam v fpu_component out_convert isInf", false,-1);
        tracep->declBit(c+333,"FPURetimed_noparam v fpu_component out_convert isZero", false,-1);
        tracep->declBit(c+334,"FPURetimed_noparam v fpu_component out_convert sign", false,-1);
        tracep->declBus(c+335,"FPURetimed_noparam v fpu_component out_convert sExp", false,-1, 9,0);
        tracep->declBus(c+336,"FPURetimed_noparam v fpu_component out_convert sig", false,-1, 24,0);
        tracep->declBit(c+337,"FPURetimed_noparam v fpu_component out_convert isSubnormal", false,-1);
        tracep->declBus(c+338,"FPURetimed_noparam v fpu_component out_convert denormShiftDist", false,-1, 4,0);
        tracep->declBus(c+339,"FPURetimed_noparam v fpu_component out_convert expOut", false,-1, 7,0);
        tracep->declBus(c+340,"FPURetimed_noparam v fpu_component out_convert fractOut", false,-1, 22,0);
        tracep->declBus(c+362,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN expWidth", false,-1, 31,0);
        tracep->declBus(c+363,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN sigWidth", false,-1, 31,0);
        tracep->declQuad(c+41,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN in", false,-1, 32,0);
        tracep->declBit(c+331,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN isNaN", false,-1);
        tracep->declBit(c+332,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN isInf", false,-1);
        tracep->declBit(c+333,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN isZero", false,-1);
        tracep->declBit(c+334,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN sign", false,-1);
        tracep->declBus(c+335,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN sExp", false,-1, 9,0);
        tracep->declBus(c+336,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN sig", false,-1, 24,0);
        tracep->declBus(c+341,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN exp", false,-1, 8,0);
        tracep->declBus(c+342,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN fract", false,-1, 22,0);
        tracep->declBit(c+343,"FPURetimed_noparam v fpu_component out_convert recFNToRawFN isSpecial", false,-1);
        tracep->declBus(c+378,"FPURetimed_noparam v out_pass_reg1 p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v out_pass_reg1 clk", false,-1);
        tracep->declBus(c+32,"FPURetimed_noparam v out_pass_reg1 q", false,-1, 31,0);
        tracep->declBus(c+31,"FPURetimed_noparam v out_pass_reg1 d", false,-1, 31,0);
        tracep->declBit(c+394,"FPURetimed_noparam v out_pass_reg1 en", false,-1);
        tracep->declBus(c+378,"FPURetimed_noparam v out_pass_reg2 p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v out_pass_reg2 clk", false,-1);
        tracep->declBus(c+29,"FPURetimed_noparam v out_pass_reg2 q", false,-1, 31,0);
        tracep->declBus(c+32,"FPURetimed_noparam v out_pass_reg2 d", false,-1, 31,0);
        tracep->declBit(c+394,"FPURetimed_noparam v out_pass_reg2 en", false,-1);
        tracep->declBus(c+399,"FPURetimed_noparam v en_reg1 p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v en_reg1 clk", false,-1);
        tracep->declBus(c+33,"FPURetimed_noparam v en_reg1 q", false,-1, 0,0);
        tracep->declBus(c+351,"FPURetimed_noparam v en_reg1 d", false,-1, 0,0);
        tracep->declBit(c+394,"FPURetimed_noparam v en_reg1 en", false,-1);
        tracep->declBus(c+399,"FPURetimed_noparam v en_reg2 p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v en_reg2 clk", false,-1);
        tracep->declBus(c+34,"FPURetimed_noparam v en_reg2 q", false,-1, 0,0);
        tracep->declBus(c+33,"FPURetimed_noparam v en_reg2 d", false,-1, 0,0);
        tracep->declBit(c+394,"FPURetimed_noparam v en_reg2 en", false,-1);
        tracep->declBus(c+399,"FPURetimed_noparam v en_reg3 p_nbits", false,-1, 31,0);
        tracep->declBit(c+345,"FPURetimed_noparam v en_reg3 clk", false,-1);
        tracep->declBus(c+357,"FPURetimed_noparam v en_reg3 q", false,-1, 0,0);
        tracep->declBus(c+34,"FPURetimed_noparam v en_reg3 d", false,-1, 0,0);
        tracep->declBit(c+394,"FPURetimed_noparam v en_reg3 en", false,-1);
    }
}

void VFPURetimed_noparam::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFPURetimed_noparam::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFPURetimed_noparam::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFPURetimed_noparam__Syms* __restrict vlSymsp = static_cast<VFPURetimed_noparam__Syms*>(userp);
    VFPURetimed_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp36[3];
    WData/*127:0*/ __Vtemp39[4];
    // Body
    {
        tracep->fullQData(oldp+1,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__c),33);
        tracep->fullSData(oldp+3,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__c),9);
        tracep->fullIData(oldp+4,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__c),17);
        tracep->fullWData(oldp+5,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__c),513);
        tracep->fullWData(oldp+22,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg),124);
        tracep->fullIData(oldp+26,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]),32);
        tracep->fullIData(oldp+27,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]),32);
        tracep->fullIData(oldp+28,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]),32);
        tracep->fullIData(oldp+29,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__out),32);
        tracep->fullCData(oldp+30,(((0x10U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))) 
                                    | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                        << 2U) | ((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        tracep->fullIData(oldp+31,(((0x80000000U & 
                                     ((IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                               >> 0x20U)) 
                                      << 0x1fU)) | 
                                    ((0x7f800000U & 
                                      ((((0x82U > (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                              >> 0x17U))))
                                          ? 0U : ((IData)(1U) 
                                                  + 
                                                  ((0x1ffU 
                                                    & (IData)(
                                                              (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                               >> 0x17U))) 
                                                   - (IData)(0x82U)))) 
                                        | ((((3U == 
                                              (3U & 
                                               ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                         >> 0x17U)) 
                                                >> 7U))) 
                                             & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                        >> 0x1dU))) 
                                            | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf))
                                            ? 0xffU
                                            : 0U)) 
                                       << 0x17U)) | 
                                     (0x7fffffU & (
                                                   (0x82U 
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
        tracep->fullIData(oldp+32,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__out_pass2),32);
        tracep->fullBit(oldp+33,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass1));
        tracep->fullBit(oldp+34,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__val_pass2));
        tracep->fullQData(oldp+35,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec),33);
        tracep->fullQData(oldp+37,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec),33);
        tracep->fullQData(oldp+39,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec),33);
        tracep->fullQData(oldp+41,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec),33);
        tracep->fullBit(oldp+43,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                        >> 0x1fU))));
        tracep->fullCData(oldp+44,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                >> 0x17U)))),8);
        tracep->fullIData(oldp+45,((0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])),23);
        tracep->fullBit(oldp+46,((0U == (0xffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                   << 9U) 
                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+47,((0U == (0x7fffffU 
                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U]))));
        tracep->fullCData(oldp+48,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
        tracep->fullIData(oldp+49,((0x7fffffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                  << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                 << 1U))),23);
        tracep->fullSData(oldp+50,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp),9);
        tracep->fullBit(oldp+51,(((0U == (0xffU & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                    << 9U) 
                                                   | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U] 
                                                      >> 0x17U)))) 
                                  & (0U == (0x7fffffU 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[0U])))));
        tracep->fullBit(oldp+52,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__adjustedExp) 
                                               >> 7U)))));
        tracep->fullSData(oldp+53,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__exp),9);
        tracep->fullIData(oldp+54,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
        tracep->fullIData(oldp+55,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
        tracep->fullCData(oldp+56,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                     ? 1U : 0U)),5);
        tracep->fullCData(oldp+57,((0x1fU & (((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 1U
                                               : 0U) 
                                             | ((4U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)))),5);
        tracep->fullCData(oldp+58,((0x1fU & ((((2U 
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
        tracep->fullCData(oldp+59,((0x1fU & (((((2U 
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
        tracep->fullCData(oldp+60,((0x1fU & ((((((2U 
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
        tracep->fullCData(oldp+61,((0x1fU & (((((((2U 
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
        tracep->fullCData(oldp+62,((0x1fU & (((((((
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
        tracep->fullCData(oldp+63,((0x1fU & (((((((
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
        tracep->fullCData(oldp+64,((0x1fU & (((((((
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
        tracep->fullCData(oldp+65,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+66,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                             | ((0x800U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)))),5);
        tracep->fullCData(oldp+67,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                              | ((0x800U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0xbU
                                                  : 0U)) 
                                             | ((0x1000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0xcU
                                                 : 0U)))),5);
        tracep->fullCData(oldp+68,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+69,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+70,((0x1fU & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+71,((0x1fU & (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+72,((0x1fU & ((((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+73,((0x1fU & (((((((
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
        tracep->fullCData(oldp+74,((0x1fU & (((((((
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
        tracep->fullCData(oldp+75,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+76,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                             | ((0x200000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0x15U
                                                 : 0U)))),5);
        tracep->fullCData(oldp+77,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                              | ((0x200000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0x15U
                                                  : 0U)) 
                                             | ((0x400000U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 0x16U
                                                 : 0U)))),5);
        tracep->fullBit(oldp+78,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                        >> 0x1fU))));
        tracep->fullCData(oldp+79,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                              << 9U) 
                                             | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                >> 0x17U)))),8);
        tracep->fullIData(oldp+80,((0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])),23);
        tracep->fullBit(oldp+81,((0U == (0xffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                   << 9U) 
                                                  | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                     >> 0x17U))))));
        tracep->fullBit(oldp+82,((0U == (0x7fffffU 
                                         & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U]))));
        tracep->fullCData(oldp+83,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
        tracep->fullIData(oldp+84,((0x7fffffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                  << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                 << 1U))),23);
        tracep->fullSData(oldp+85,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp),9);
        tracep->fullBit(oldp+86,(((0U == (0xffU & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                    << 9U) 
                                                   | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U] 
                                                      >> 0x17U)))) 
                                  & (0U == (0x7fffffU 
                                            & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[1U])))));
        tracep->fullBit(oldp+87,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__adjustedExp) 
                                               >> 7U)))));
        tracep->fullSData(oldp+88,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__exp),9);
        tracep->fullIData(oldp+89,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
        tracep->fullIData(oldp+90,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
        tracep->fullCData(oldp+91,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                     ? 1U : 0U)),5);
        tracep->fullCData(oldp+92,((0x1fU & (((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 1U
                                               : 0U) 
                                             | ((4U 
                                                 & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)))),5);
        tracep->fullCData(oldp+93,((0x1fU & ((((2U 
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
        tracep->fullCData(oldp+94,((0x1fU & (((((2U 
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
        tracep->fullCData(oldp+95,((0x1fU & ((((((2U 
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
        tracep->fullCData(oldp+96,((0x1fU & (((((((2U 
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
        tracep->fullCData(oldp+97,((0x1fU & (((((((
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
        tracep->fullCData(oldp+98,((0x1fU & (((((((
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
        tracep->fullCData(oldp+99,((0x1fU & (((((((
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
        tracep->fullCData(oldp+100,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+101,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                              | ((0x800U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0xbU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+102,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                               | ((0x800U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xbU
                                                   : 0U)) 
                                              | ((0x1000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0xcU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+103,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+104,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+105,((0x1fU & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+106,((0x1fU & (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+107,((0x1fU & ((((((
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
        tracep->fullCData(oldp+108,((0x1fU & ((((((
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
        tracep->fullCData(oldp+109,((0x1fU & ((((((
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
        tracep->fullCData(oldp+110,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+111,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                              | ((0x200000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0x15U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+112,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                               | ((0x200000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0x15U
                                                   : 0U)) 
                                              | ((0x400000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0x16U
                                                  : 0U)))),5);
        tracep->fullBit(oldp+113,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                         >> 0x1fU))));
        tracep->fullCData(oldp+114,((0xffU & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                               << 9U) 
                                              | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                 >> 0x17U)))),8);
        tracep->fullIData(oldp+115,((0x7fffffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])),23);
        tracep->fullBit(oldp+116,((0U == (0xffU & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                                    << 9U) 
                                                   | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                      >> 0x17U))))));
        tracep->fullBit(oldp+117,((0U == (0x7fffffU 
                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U]))));
        tracep->fullCData(oldp+118,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar),5);
        tracep->fullIData(oldp+119,((0x7fffffU & ((
                                                   vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                                   << (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)) 
                                                  << 1U))),23);
        tracep->fullSData(oldp+120,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp),9);
        tracep->fullBit(oldp+121,(((0U == (0xffU & 
                                           ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[3U] 
                                             << 9U) 
                                            | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U] 
                                               >> 0x17U)))) 
                                   & (0U == (0x7fffffU 
                                             & vlTOPp->FPURetimed_noparam__DOT__v__DOT__input_msg[2U])))));
        tracep->fullBit(oldp+122,((3U == (3U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__adjustedExp) 
                                                >> 7U)))));
        tracep->fullSData(oldp+123,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__exp),9);
        tracep->fullIData(oldp+124,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__reverseIn),23);
        tracep->fullIData(oldp+125,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn),24);
        tracep->fullCData(oldp+126,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 1U : 0U)),5);
        tracep->fullCData(oldp+127,((0x1fU & (((2U 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                ? 1U
                                                : 0U) 
                                              | ((4U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 2U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+128,((0x1fU & ((((2U 
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
        tracep->fullCData(oldp+129,((0x1fU & (((((2U 
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
        tracep->fullCData(oldp+130,((0x1fU & ((((((2U 
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
        tracep->fullCData(oldp+131,((0x1fU & ((((((
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
        tracep->fullCData(oldp+132,((0x1fU & ((((((
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
        tracep->fullCData(oldp+133,((0x1fU & ((((((
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
        tracep->fullCData(oldp+134,((0x1fU & ((((((
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
        tracep->fullCData(oldp+135,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+136,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                              | ((0x800U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0xbU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+137,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                               | ((0x800U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0xbU
                                                   : 0U)) 
                                              | ((0x1000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0xcU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+138,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+139,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+140,((0x1fU & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+141,((0x1fU & (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+142,((0x1fU & ((((((
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
        tracep->fullCData(oldp+143,((0x1fU & ((((((
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
        tracep->fullCData(oldp+144,((0x1fU & ((((((
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
        tracep->fullCData(oldp+145,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+146,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                              | ((0x200000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0x15U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+147,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                               | ((0x200000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 0x15U
                                                   : 0U)) 
                                              | ((0x400000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_convert__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                  ? 0x16U
                                                  : 0U)))),5);
        tracep->fullBit(oldp+148,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 5U) & 
                                         ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 4U)))));
        tracep->fullBit(oldp+149,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 5U) & 
                                         ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 3U)))));
        tracep->fullBit(oldp+150,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isInf));
        tracep->fullBit(oldp+151,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_isZero));
        tracep->fullBit(oldp+152,((1U & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                            >> 5U) 
                                           & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState)) 
                                          | (((~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                  >> 5U)) 
                                              & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 2U)) 
                                             & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 4U) 
                                                ^ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                   >> 3U)))) 
                                         | (((~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                 >> 5U)) 
                                             & (~ ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
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
        tracep->fullSData(oldp+153,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp),10);
        tracep->fullIData(oldp+154,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig),27);
        tracep->fullIData(oldp+155,((((0U != (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec)))),24);
        tracep->fullIData(oldp+156,((((0U != (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec)))),24);
        tracep->fullQData(oldp+157,((0xffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                              >> 1U))))),48);
        tracep->fullCData(oldp+159,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState),6);
        tracep->fullSData(oldp+160,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum),10);
        tracep->fullCData(oldp+161,((0x1fU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist))),5);
        tracep->fullIData(oldp+162,((0x3ffffffU & (
                                                   (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                                    << 0xfU) 
                                                   | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                                      >> 0x11U)))),26);
        tracep->fullQData(oldp+163,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddResult),49);
        tracep->fullBit(oldp+165,(((3U == (3U & ((IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                          >> 0x17U)) 
                                                 >> 7U))) 
                                   & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+166,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA));
        tracep->fullBit(oldp+167,((0U == (7U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))));
        tracep->fullBit(oldp+168,((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                 >> 0x20U)))));
        tracep->fullSData(oldp+169,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                       >> 0x17U)))),10);
        tracep->fullIData(oldp+170,((((0U != (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec)))),25);
        tracep->fullBit(oldp+171,(((7U == (7U & (IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                         >> 0x1dU)))) 
                                   & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+172,(((3U == (3U & ((IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                          >> 0x17U)) 
                                                 >> 7U))) 
                                   & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+173,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
        tracep->fullBit(oldp+174,((0U == (7U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))));
        tracep->fullBit(oldp+175,((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                 >> 0x20U)))));
        tracep->fullSData(oldp+176,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                       >> 0x17U)))),10);
        tracep->fullIData(oldp+177,((((0U != (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec)))),25);
        tracep->fullBit(oldp+178,(((7U == (7U & (IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x1dU)))) 
                                   & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+179,(((3U == (3U & ((IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                          >> 0x17U)) 
                                                 >> 7U))) 
                                   & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+180,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC));
        tracep->fullBit(oldp+181,((0U == (7U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))));
        tracep->fullBit(oldp+182,((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                 >> 0x20U)))));
        tracep->fullSData(oldp+183,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                       >> 0x17U)))),10);
        tracep->fullIData(oldp+184,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC),25);
        tracep->fullBit(oldp+185,(((7U == (7U & (IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                         >> 0x1dU)))) 
                                   & (~ (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                 >> 0x16U))))));
        tracep->fullBit(oldp+186,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd));
        tracep->fullSData(oldp+187,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd),11);
        tracep->fullBit(oldp+188,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
        tracep->fullBit(oldp+189,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC));
        tracep->fullSData(oldp+190,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist),11);
        tracep->fullSData(oldp+191,((0x3ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))),10);
        tracep->fullBit(oldp+192,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign));
        tracep->fullBit(oldp+193,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant));
        tracep->fullCData(oldp+194,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist),7);
        __Vtemp36[0U] = (IData)((0x1fffffffffffffULL 
                                 & (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
        __Vtemp36[1U] = ((0xffe00000U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                           ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                           : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                         << 0x15U)) 
                         | (IData)(((0x1fffffffffffffULL 
                                     & (- (QData)((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                    >> 0x20U)));
        __Vtemp36[2U] = (0x3fffU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                      ? (~ vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                      : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC) 
                                    >> 0xbU));
        tracep->fullWData(oldp+195,(__Vtemp36),78);
        tracep->fullWData(oldp+198,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC),77);
        tracep->fullIData(oldp+201,((0x7ffffffU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC 
                                                   << 2U))),27);
        tracep->fullCData(oldp+202,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC),7);
        tracep->fullCData(oldp+203,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask),6);
        tracep->fullBit(oldp+204,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra));
        tracep->fullWData(oldp+205,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC),75);
        tracep->fullBit(oldp+208,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB));
        tracep->fullBit(oldp+209,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny));
        tracep->fullBit(oldp+210,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB));
        tracep->fullBit(oldp+211,((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                    & (0U == (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x17U)) 
                                               >> 6U)))) 
                                   | ((0U == (7U & 
                                              ((IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB)))));
        tracep->fullBit(oldp+212,(((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                     & (0U == (7U & 
                                               ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))) 
                                    | ((0U == (7U & 
                                               ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                         >> 0x17U)) 
                                                >> 6U))) 
                                       & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB))) 
                                   | ((((~ (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                                        & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
                                       & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
        tracep->fullBit(oldp+213,((((((7U == (7U & (IData)(
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
                                    | ((7U == (7U & (IData)(
                                                            (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                             >> 0x1dU)))) 
                                       & (~ (IData)(
                                                    (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                     >> 0x16U))))) 
                                   | ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
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
                                         & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))))));
        tracep->fullBit(oldp+214,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros));
        tracep->fullBit(oldp+215,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase));
        tracep->fullBit(oldp+216,(((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                     & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                    | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                       & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                   | (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                       & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                      & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))));
        tracep->fullSData(oldp+217,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                       >> 0x17U)))),9);
        tracep->fullIData(oldp+218,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec))),23);
        tracep->fullBit(oldp+219,((3U == (3U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                         >> 0x17U)) 
                                                >> 7U)))));
        tracep->fullBit(oldp+220,((7U == (7U & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__a_rec 
                                                        >> 0x1dU))))));
        tracep->fullSData(oldp+221,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                       >> 0x17U)))),9);
        tracep->fullIData(oldp+222,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec))),23);
        tracep->fullBit(oldp+223,((3U == (3U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                         >> 0x17U)) 
                                                >> 7U)))));
        tracep->fullBit(oldp+224,((7U == (7U & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__b_rec 
                                                        >> 0x1dU))))));
        tracep->fullSData(oldp+225,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                       >> 0x17U)))),9);
        tracep->fullIData(oldp+226,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec))),23);
        tracep->fullBit(oldp+227,((3U == (3U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                         >> 0x17U)) 
                                                >> 7U)))));
        tracep->fullBit(oldp+228,((7U == (7U & (IData)(
                                                       (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__c_rec 
                                                        >> 0x1dU))))));
        tracep->fullCData(oldp+229,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                              >> 2U))),5);
        tracep->fullCData(oldp+230,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__lowMask_CExtraMask__DOT__reverseOut),6);
        tracep->fullBit(oldp+231,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 5U))));
        tracep->fullBit(oldp+232,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 5U) & 
                                         ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 1U)))));
        tracep->fullBit(oldp+233,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 4U))));
        tracep->fullBit(oldp+234,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 3U))));
        tracep->fullBit(oldp+235,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 2U))));
        tracep->fullBit(oldp+236,((1U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                         >> 1U))));
        tracep->fullBit(oldp+237,((1U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))));
        tracep->fullBit(oldp+238,((1U & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 4U) ^ 
                                         ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                          >> 3U)))));
        tracep->fullIData(oldp+239,((0x3ffffffU & ((IData)(1U) 
                                                   + 
                                                   ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                                     << 0xfU) 
                                                    | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                                                       >> 0x11U))))),26);
        tracep->fullWData(oldp+240,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum),75);
        tracep->fullSData(oldp+243,((0x3ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                               - (1U 
                                                  & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                                     >> 3U))))),10);
        tracep->fullQData(oldp+244,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum),50);
        tracep->fullBit(oldp+246,((1U & ((8U & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState))
                                          ? (~ (IData)(
                                                       (0xffffffU 
                                                        == 
                                                        (0xffffffU 
                                                         & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                               >> 1U))))))
                                          : (0U != 
                                             (0x1ffffffU 
                                              & ((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
                                                    >> 1U))))))));
        tracep->fullIData(oldp+247,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig),29);
        tracep->fullIData(oldp+248,((0x7fffff8U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum) 
                                                   << 3U))),27);
        tracep->fullCData(oldp+249,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig),7);
        tracep->fullCData(oldp+250,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask),6);
        tracep->fullBit(oldp+251,((0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)))));
        tracep->fullIData(oldp+252,(((0x7fffffeU & 
                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
                                       >> 2U)) | (1U 
                                                  & (((0U 
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
        tracep->fullBit(oldp+253,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                         >> 0x13U))));
        tracep->fullQData(oldp+254,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum),51);
        tracep->fullIData(oldp+256,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum),26);
        tracep->fullCData(oldp+257,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+258,((0x3fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                              << 1U))),6);
        tracep->fullSData(oldp+259,((0x3ffU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpSum) 
                                               - (0x3fU 
                                                  & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                     << 1U))))),10);
        tracep->fullIData(oldp+260,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_mainSig),29);
        tracep->fullSData(oldp+261,((0x1fffU & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)),13);
        tracep->fullCData(oldp+262,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum),7);
        tracep->fullCData(oldp+263,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask),6);
        tracep->fullBit(oldp+264,((0U != ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum) 
                                          & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask)))));
        tracep->fullIData(oldp+265,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig),27);
        tracep->fullBit(oldp+266,((0U == (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+267,(((0U != (3U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_sig 
                                                 >> 0x19U))) 
                                   & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
                                       >> 4U) ^ (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                                                 >> 0x13U)))));
        tracep->fullCData(oldp+268,((7U & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                                           >> 2U))),3);
        tracep->fullCData(oldp+269,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_CDom_sigExtraMask__DOT__reverseOut),6);
        tracep->fullIData(oldp+270,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn),26);
        tracep->fullIData(oldp+271,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn),27);
        tracep->fullCData(oldp+272,(((2U & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 1U : 0U)),5);
        tracep->fullCData(oldp+273,((0x1fU & (((2U 
                                                & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                ? 1U
                                                : 0U) 
                                              | ((4U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                  ? 2U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+274,((0x1fU & ((((2U 
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
        tracep->fullCData(oldp+275,((0x1fU & (((((2U 
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
        tracep->fullCData(oldp+276,((0x1fU & ((((((2U 
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
        tracep->fullCData(oldp+277,((0x1fU & ((((((
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
        tracep->fullCData(oldp+278,((0x1fU & ((((((
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
        tracep->fullCData(oldp+279,((0x1fU & ((((((
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
        tracep->fullCData(oldp+280,((0x1fU & ((((((
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
        tracep->fullCData(oldp+281,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+282,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                              | ((0x800U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                  ? 0xbU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+283,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
                                               | ((0x800U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 0xbU
                                                   : 0U)) 
                                              | ((0x1000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                  ? 0xcU
                                                  : 0U)))),5);
        tracep->fullCData(oldp+284,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+285,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+286,((0x1fU & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+287,((0x1fU & (((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__10__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+288,((0x1fU & ((((((
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
        tracep->fullCData(oldp+289,((0x1fU & ((((((
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
        tracep->fullCData(oldp+290,((0x1fU & ((((((
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
        tracep->fullCData(oldp+291,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar),5);
        tracep->fullCData(oldp+292,((0x1fU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                              | ((0x200000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                  ? 0x15U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+293,((0x1fU & (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
                                               | ((0x200000U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 0x15U
                                                   : 0U)) 
                                              | ((0x400000U 
                                                  & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                  ? 0x16U
                                                  : 0U)))),5);
        tracep->fullCData(oldp+294,((0x1fU & ((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+295,((0x1fU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+296,((0x1fU & ((((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__20__KET____DOT__countSoFar) 
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
        tracep->fullCData(oldp+297,((0xfU & ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                             >> 1U))),4);
        tracep->fullCData(oldp+298,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__lowMask_notCDom_sigExtraMask__DOT__reverseOut),6);
        tracep->fullBit(oldp+299,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut));
        tracep->fullSData(oldp+300,((0x3ffU & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))),10);
        tracep->fullBit(oldp+301,((1U & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                         >> 0x1aU))));
        tracep->fullSData(oldp+302,((0x1ffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))),9);
        tracep->fullIData(oldp+303,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_fractOut),23);
        tracep->fullBit(oldp+304,(VL_LTES_III(1,32,32, 3U, 
                                              VL_SHIFTRS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)), 7U))));
        tracep->fullBit(oldp+305,(VL_GTS_III(1,32,32, 0x6bU, 
                                             VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp)))));
        tracep->fullBit(oldp+306,((VL_GTS_III(1,32,32, 0x6bU, 
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
        tracep->fullBit(oldp+307,((VL_GTS_III(1,32,32, 0x6bU, 
                                              VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                   | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))));
        tracep->fullBit(oldp+308,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase));
        tracep->fullBit(oldp+309,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow));
        tracep->fullBit(oldp+310,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
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
        tracep->fullBit(oldp+311,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                   | ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                      & (VL_GTS_III(1,32,32, 0x6bU, 
                                                    VL_EXTENDS_II(32,11, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp))) 
                                         | (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound))))));
        tracep->fullBit(oldp+312,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut));
        tracep->fullBit(oldp+313,(((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                    ? 0U : (1U & ((
                                                   (((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__mulAddRecFNToRaw__DOT__intermed_compactState) 
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
        tracep->fullSData(oldp+314,((0x1ffU & (((((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp) 
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
        tracep->fullIData(oldp+315,((0x7fffffU & ((
                                                   ((IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
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
                                                      : 0U)))),23);
        tracep->fullIData(oldp+316,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask),27);
        tracep->fullIData(oldp+317,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__roundMask_main),25);
        tracep->fullIData(oldp+318,((0x7ffffffU & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundMask 
                                                   >> 1U))),27);
        tracep->fullIData(oldp+319,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosMask),27);
        tracep->fullBit(oldp+320,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundPosBit));
        tracep->fullBit(oldp+321,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRoundExtra));
        tracep->fullBit(oldp+322,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__anyRound));
        tracep->fullIData(oldp+323,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig),26);
        tracep->fullSData(oldp+324,((0x7ffU & VL_EXTENDS_II(11,10, 
                                                            (0x3ffU 
                                                             & VL_EXTENDS_II(10,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))))),11);
        tracep->fullSData(oldp+325,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__sRoundedExp),11);
        tracep->fullBit(oldp+326,((1U & ((0x4000000U 
                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                          ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                             >> 2U)
                                          : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                             >> 1U)))));
        tracep->fullBit(oldp+327,((1U & (((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                           >> 0x1aU) 
                                          & (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig 
                                             >> 2U)) 
                                         | (0U != (3U 
                                                   & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig))))));
        tracep->fullBit(oldp+328,((1U & ((0x4000000U 
                                          & vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sig)
                                          ? (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                             >> 0x19U)
                                          : (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__roundedSig 
                                             >> 0x18U)))));
        tracep->fullSData(oldp+329,((0x1ffU & VL_EXTENDS_II(9,10, (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__out_sExp)))),9);
        tracep->fullIData(oldp+330,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__mulAddRec__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk4__DOT__genblk2__DOT__lowMask_roundMask__DOT__reverseOut),25);
        tracep->fullBit(oldp+331,(((3U == (3U & ((IData)(
                                                         (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                          >> 0x17U)) 
                                                 >> 7U))) 
                                   & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+332,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__isInf));
        tracep->fullBit(oldp+333,((0U == (7U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                         >> 0x17U)) 
                                                >> 6U)))));
        tracep->fullBit(oldp+334,((1U & (IData)((vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                 >> 0x20U)))));
        tracep->fullSData(oldp+335,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                       >> 0x17U)))),10);
        tracep->fullIData(oldp+336,(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig),25);
        tracep->fullBit(oldp+337,((0x82U > (0x1ffU 
                                            & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                       >> 0x17U))))));
        tracep->fullCData(oldp+338,((0x1fU & ((IData)(1U) 
                                              - (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                            >> 0x17U)))))),5);
        tracep->fullCData(oldp+339,((0xffU & (((0x82U 
                                                > (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                              >> 0x17U))))
                                                ? 0U
                                                : ((IData)(1U) 
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
        tracep->fullIData(oldp+340,((0x7fffffU & ((0x82U 
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
                                                    : vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_convert__DOT__sig)))),23);
        tracep->fullSData(oldp+341,((0x1ffU & (IData)(
                                                      (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                       >> 0x17U)))),9);
        tracep->fullIData(oldp+342,((0x7fffffU & (IData)(vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec))),23);
        tracep->fullBit(oldp+343,((3U == (3U & ((IData)(
                                                        (vlTOPp->FPURetimed_noparam__DOT__v__DOT__fpu_component__DOT__out_rec 
                                                         >> 0x17U)) 
                                                >> 7U)))));
        tracep->fullBit(oldp+344,(vlTOPp->reset));
        tracep->fullBit(oldp+345,(vlTOPp->clk));
        tracep->fullWData(oldp+346,(vlTOPp->req_msg),128);
        tracep->fullBit(oldp+350,(vlTOPp->req_rdy));
        tracep->fullBit(oldp+351,(vlTOPp->req_val));
        tracep->fullWData(oldp+352,(vlTOPp->resp_msg),128);
        tracep->fullBit(oldp+356,(vlTOPp->resp_rdy));
        tracep->fullBit(oldp+357,(vlTOPp->resp_val));
        __Vtemp39[0U] = vlTOPp->req_msg[0U];
        __Vtemp39[1U] = vlTOPp->req_msg[1U];
        __Vtemp39[2U] = vlTOPp->req_msg[2U];
        __Vtemp39[3U] = (0xfffffffU & vlTOPp->req_msg[3U]);
        tracep->fullWData(oldp+358,(__Vtemp39),124);
        tracep->fullIData(oldp+362,(8U),32);
        tracep->fullIData(oldp+363,(0x18U),32);
        tracep->fullBit(oldp+364,(0U));
        tracep->fullCData(oldp+365,(0U),2);
        tracep->fullCData(oldp+366,(0U),3);
        tracep->fullIData(oldp+367,(0x7cU),32);
        tracep->fullIData(oldp+368,(5U),32);
        tracep->fullIData(oldp+369,(0x17U),32);
        tracep->fullCData(oldp+370,(0U),5);
        tracep->fullIData(oldp+371,(0x30U),32);
        tracep->fullIData(oldp+372,(0x4bU),32);
        tracep->fullIData(oldp+373,(2U),32);
        tracep->fullIData(oldp+374,(0x12U),32);
        tracep->fullIData(oldp+375,(0xcU),32);
        tracep->fullIData(oldp+376,(0x1bU),32);
        tracep->fullIData(oldp+377,(6U),32);
        tracep->fullIData(oldp+378,(0x20U),32);
        tracep->fullIData(oldp+379,(3U),32);
        tracep->fullIData(oldp+380,(0U),32);
        tracep->fullIData(oldp+381,(0x33U),32);
        tracep->fullIData(oldp+382,(0x19U),32);
        tracep->fullIData(oldp+383,(0x1aU),32);
        tracep->fullIData(oldp+384,(0xdU),32);
        tracep->fullIData(oldp+385,(4U),32);
        tracep->fullIData(oldp+386,(0x10U),32);
        tracep->fullBit(oldp+387,(0U));
        tracep->fullIData(oldp+388,(0xaU),32);
        tracep->fullIData(oldp+389,(0x1c0U),32);
        tracep->fullIData(oldp+390,(0x180U),32);
        tracep->fullIData(oldp+391,(0x17fU),32);
        tracep->fullIData(oldp+392,(0x82U),32);
        tracep->fullIData(oldp+393,(0x6bU),32);
        tracep->fullBit(oldp+394,(1U));
        tracep->fullIData(oldp+395,(9U),32);
        tracep->fullIData(oldp+396,(0x69U),32);
        tracep->fullIData(oldp+397,(0x200U),32);
        tracep->fullSData(oldp+398,(0x82U),9);
        tracep->fullIData(oldp+399,(1U),32);
    }
}
