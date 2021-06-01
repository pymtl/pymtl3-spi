// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIQueue__pack_size_128__num_entries_4__Syms.h"


//======================

void VSPIQueue__pack_size_128__num_entries_4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSPIQueue__pack_size_128__num_entries_4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSPIQueue__pack_size_128__num_entries_4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSPIQueue__pack_size_128__num_entries_4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+51,"clk", false,-1, 0,0);
        tracep->declArray(c+52,"from_master", false,-1, 127,0);
        tracep->declBus(c+56,"hard_msg", false,-1, 0,0);
        tracep->declArray(c+57,"recv_msg", false,-1, 127,0);
        tracep->declBus(c+61,"recv_rdy", false,-1, 0,0);
        tracep->declBus(c+62,"recv_val", false,-1, 0,0);
        tracep->declBus(c+63,"reset", false,-1, 0,0);
        tracep->declBus(c+64,"seize", false,-1, 0,0);
        tracep->declArray(c+65,"send_msg", false,-1, 127,0);
        tracep->declBus(c+69,"send_rdy", false,-1, 0,0);
        tracep->declBus(c+70,"send_val", false,-1, 0,0);
        tracep->declBus(c+71,"serve", false,-1, 0,0);
        tracep->declArray(c+72,"to_master", false,-1, 127,0);
        tracep->declBus(c+51,"SPIQueue__pack_size_128__num_entries_4 clk", false,-1, 0,0);
        tracep->declArray(c+52,"SPIQueue__pack_size_128__num_entries_4 from_master", false,-1, 127,0);
        tracep->declBus(c+56,"SPIQueue__pack_size_128__num_entries_4 hard_msg", false,-1, 0,0);
        tracep->declArray(c+57,"SPIQueue__pack_size_128__num_entries_4 recv_msg", false,-1, 127,0);
        tracep->declBus(c+61,"SPIQueue__pack_size_128__num_entries_4 recv_rdy", false,-1, 0,0);
        tracep->declBus(c+62,"SPIQueue__pack_size_128__num_entries_4 recv_val", false,-1, 0,0);
        tracep->declBus(c+63,"SPIQueue__pack_size_128__num_entries_4 reset", false,-1, 0,0);
        tracep->declBus(c+64,"SPIQueue__pack_size_128__num_entries_4 seize", false,-1, 0,0);
        tracep->declArray(c+65,"SPIQueue__pack_size_128__num_entries_4 send_msg", false,-1, 127,0);
        tracep->declBus(c+69,"SPIQueue__pack_size_128__num_entries_4 send_rdy", false,-1, 0,0);
        tracep->declBus(c+70,"SPIQueue__pack_size_128__num_entries_4 send_val", false,-1, 0,0);
        tracep->declBus(c+71,"SPIQueue__pack_size_128__num_entries_4 serve", false,-1, 0,0);
        tracep->declArray(c+72,"SPIQueue__pack_size_128__num_entries_4 to_master", false,-1, 127,0);
        tracep->declBus(c+81,"SPIQueue__pack_size_128__num_entries_4 v pack_size", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v num_entries", false,-1, 31,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v addr_width", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v reset", false,-1);
        tracep->declBit(c+71,"SPIQueue__pack_size_128__num_entries_4 v serve", false,-1);
        tracep->declBit(c+64,"SPIQueue__pack_size_128__num_entries_4 v seize", false,-1);
        tracep->declBit(c+56,"SPIQueue__pack_size_128__num_entries_4 v hard_msg", false,-1);
        tracep->declBit(c+70,"SPIQueue__pack_size_128__num_entries_4 v send_val", false,-1);
        tracep->declBit(c+69,"SPIQueue__pack_size_128__num_entries_4 v send_rdy", false,-1);
        tracep->declArray(c+65,"SPIQueue__pack_size_128__num_entries_4 v send_msg", false,-1, 127,0);
        tracep->declBit(c+62,"SPIQueue__pack_size_128__num_entries_4 v recv_val", false,-1);
        tracep->declBit(c+61,"SPIQueue__pack_size_128__num_entries_4 v recv_rdy", false,-1);
        tracep->declArray(c+57,"SPIQueue__pack_size_128__num_entries_4 v recv_msg", false,-1, 127,0);
        tracep->declArray(c+52,"SPIQueue__pack_size_128__num_entries_4 v from_master", false,-1, 127,0);
        tracep->declArray(c+72,"SPIQueue__pack_size_128__num_entries_4 v to_master", false,-1, 127,0);
        tracep->declBit(c+76,"SPIQueue__pack_size_128__num_entries_4 v enq_en", false,-1);
        tracep->declBit(c+1,"SPIQueue__pack_size_128__num_entries_4 v enq_rdy_send", false,-1);
        tracep->declBus(c+2,"SPIQueue__pack_size_128__num_entries_4 v entry_count_send", false,-1, 2,0);
        tracep->declBit(c+3,"SPIQueue__pack_size_128__num_entries_4 v deq_val", false,-1);
        tracep->declBus(c+4,"SPIQueue__pack_size_128__num_entries_4 v entry_count_recv", false,-1, 2,0);
        tracep->declBus(c+81,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ bit_width", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ num_entries", false,-1, 31,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ addr_width", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ reset", false,-1);
        tracep->declBit(c+70,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ deq_val", false,-1);
        tracep->declBit(c+69,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ deq_rdy", false,-1);
        tracep->declArray(c+65,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ deq_msg", false,-1, 127,0);
        tracep->declBit(c+76,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ enq_val", false,-1);
        tracep->declBit(c+1,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ enq_rdy", false,-1);
        tracep->declArray(c+52,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ enq_msg", false,-1, 127,0);
        tracep->declBus(c+2,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_count", false,-1, 2,0);
        tracep->declBit(c+45,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ reg_write_en", false,-1);
        tracep->declBit(c+46,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ reg_read_en", false,-1);
        tracep->declBus(c+5,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer", false,-1, 1,0);
        tracep->declBus(c+6,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer", false,-1, 1,0);
        tracep->declBit(c+7,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_full", false,-1);
        tracep->declBit(c+8,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_empty", false,-1);
        tracep->declBus(c+81,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile p_data_nbits", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile p_num_entries", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile p_reset_value", false,-1, 31,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile c_addr_nbits", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile reset", false,-1);
        tracep->declBus(c+6,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile read_addr", false,-1, 1,0);
        tracep->declArray(c+65,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile read_data", false,-1, 127,0);
        tracep->declBit(c+45,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile write_en", false,-1);
        tracep->declBus(c+5,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile write_addr", false,-1, 1,0);
        tracep->declArray(c+52,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile write_data", false,-1, 127,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+9+i*4,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ queue_regfile rfile", true,(i+0), 127,0);}}
        tracep->declBus(c+85,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter clear", false,-1);
        tracep->declBit(c+45,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter increment", false,-1);
        tracep->declBit(c+46,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter decrement", false,-1);
        tracep->declBus(c+2,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count", false,-1, 2,0);
        tracep->declBus(c+47,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_next", false,-1, 2,0);
        tracep->declBus(c+85,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg reset", false,-1);
        tracep->declBus(c+2,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg q", false,-1, 2,0);
        tracep->declBus(c+47,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ entry_counter count_reg d", false,-1, 2,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter clear", false,-1);
        tracep->declBit(c+45,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter increment", false,-1);
        tracep->declBit(c+86,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter decrement", false,-1);
        tracep->declBus(c+5,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count", false,-1, 1,0);
        tracep->declBus(c+77,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_next", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg reset", false,-1);
        tracep->declBus(c+5,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg q", false,-1, 1,0);
        tracep->declBus(c+77,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ write_pointer_counter count_reg d", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter clear", false,-1);
        tracep->declBit(c+46,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter increment", false,-1);
        tracep->declBit(c+86,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter decrement", false,-1);
        tracep->declBus(c+6,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count", false,-1, 1,0);
        tracep->declBus(c+78,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_next", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg reset", false,-1);
        tracep->declBus(c+6,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg q", false,-1, 1,0);
        tracep->declBus(c+78,"SPIQueue__pack_size_128__num_entries_4 v toDeviceQ read_pointer_counter count_reg d", false,-1, 1,0);
        tracep->declBus(c+81,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ bit_width", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ num_entries", false,-1, 31,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ addr_width", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ reset", false,-1);
        tracep->declBit(c+3,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ deq_val", false,-1);
        tracep->declBit(c+64,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ deq_rdy", false,-1);
        tracep->declArray(c+72,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ deq_msg", false,-1, 127,0);
        tracep->declBit(c+62,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ enq_val", false,-1);
        tracep->declBit(c+61,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ enq_rdy", false,-1);
        tracep->declArray(c+57,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ enq_msg", false,-1, 127,0);
        tracep->declBus(c+4,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_count", false,-1, 2,0);
        tracep->declBit(c+48,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ reg_write_en", false,-1);
        tracep->declBit(c+49,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ reg_read_en", false,-1);
        tracep->declBus(c+25,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer", false,-1, 1,0);
        tracep->declBus(c+26,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer", false,-1, 1,0);
        tracep->declBit(c+27,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_full", false,-1);
        tracep->declBit(c+28,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_empty", false,-1);
        tracep->declBus(c+81,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile p_data_nbits", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile p_num_entries", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile p_reset_value", false,-1, 31,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile c_addr_nbits", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile reset", false,-1);
        tracep->declBus(c+26,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile read_addr", false,-1, 1,0);
        tracep->declArray(c+72,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile read_data", false,-1, 127,0);
        tracep->declBit(c+48,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile write_en", false,-1);
        tracep->declBus(c+25,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile write_addr", false,-1, 1,0);
        tracep->declArray(c+57,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile write_data", false,-1, 127,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+29+i*4,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ queue_regfile rfile", true,(i+0), 127,0);}}
        tracep->declBus(c+85,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter clear", false,-1);
        tracep->declBit(c+48,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter increment", false,-1);
        tracep->declBit(c+49,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter decrement", false,-1);
        tracep->declBus(c+4,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count", false,-1, 2,0);
        tracep->declBus(c+50,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_next", false,-1, 2,0);
        tracep->declBus(c+85,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg reset", false,-1);
        tracep->declBus(c+4,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg q", false,-1, 2,0);
        tracep->declBus(c+50,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ entry_counter count_reg d", false,-1, 2,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter clear", false,-1);
        tracep->declBit(c+48,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter increment", false,-1);
        tracep->declBit(c+86,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter decrement", false,-1);
        tracep->declBus(c+25,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count", false,-1, 1,0);
        tracep->declBus(c+79,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_next", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg reset", false,-1);
        tracep->declBus(c+25,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg q", false,-1, 1,0);
        tracep->declBus(c+79,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ write_pointer_counter count_reg d", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter p_count_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter p_count_clear_value", false,-1, 31,0);
        tracep->declBus(c+82,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter p_count_max_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter reset", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter clear", false,-1);
        tracep->declBit(c+49,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter increment", false,-1);
        tracep->declBit(c+86,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter decrement", false,-1);
        tracep->declBus(c+26,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count", false,-1, 1,0);
        tracep->declBus(c+80,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_next", false,-1, 1,0);
        tracep->declBus(c+83,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg p_nbits", false,-1, 31,0);
        tracep->declBus(c+84,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg p_reset_value", false,-1, 31,0);
        tracep->declBit(c+51,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg clk", false,-1);
        tracep->declBit(c+63,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg reset", false,-1);
        tracep->declBus(c+26,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg q", false,-1, 1,0);
        tracep->declBus(c+80,"SPIQueue__pack_size_128__num_entries_4 v FromDeviceQ read_pointer_counter count_reg d", false,-1, 1,0);
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
        tracep->fullCData(oldp+2,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send),3);
        tracep->fullBit(oldp+3,((0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
        tracep->fullCData(oldp+4,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv),3);
        tracep->fullCData(oldp+5,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer),2);
        tracep->fullCData(oldp+6,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer),2);
        tracep->fullBit(oldp+7,((4U <= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
        tracep->fullBit(oldp+8,((0U >= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
        tracep->fullWData(oldp+9,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0]),128);
        tracep->fullWData(oldp+13,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1]),128);
        tracep->fullWData(oldp+17,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2]),128);
        tracep->fullWData(oldp+21,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3]),128);
        tracep->fullCData(oldp+25,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer),2);
        tracep->fullCData(oldp+26,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer),2);
        tracep->fullBit(oldp+27,((4U <= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
        tracep->fullBit(oldp+28,((0U >= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
        tracep->fullWData(oldp+29,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0]),128);
        tracep->fullWData(oldp+33,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1]),128);
        tracep->fullWData(oldp+37,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2]),128);
        tracep->fullWData(oldp+41,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3]),128);
        tracep->fullBit(oldp+45,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en));
        tracep->fullBit(oldp+46,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en));
        tracep->fullCData(oldp+47,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next),3);
        tracep->fullBit(oldp+48,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en));
        tracep->fullBit(oldp+49,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en));
        tracep->fullCData(oldp+50,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next),3);
        tracep->fullBit(oldp+51,(vlTOPp->clk));
        tracep->fullWData(oldp+52,(vlTOPp->from_master),128);
        tracep->fullBit(oldp+56,(vlTOPp->hard_msg));
        tracep->fullWData(oldp+57,(vlTOPp->recv_msg),128);
        tracep->fullBit(oldp+61,(vlTOPp->recv_rdy));
        tracep->fullBit(oldp+62,(vlTOPp->recv_val));
        tracep->fullBit(oldp+63,(vlTOPp->reset));
        tracep->fullBit(oldp+64,(vlTOPp->seize));
        tracep->fullWData(oldp+65,(vlTOPp->send_msg),128);
        tracep->fullBit(oldp+69,(vlTOPp->send_rdy));
        tracep->fullBit(oldp+70,(vlTOPp->send_val));
        tracep->fullBit(oldp+71,(vlTOPp->serve));
        tracep->fullWData(oldp+72,(vlTOPp->to_master),128);
        tracep->fullBit(oldp+76,(((IData)(vlTOPp->serve) 
                                  & (~ (IData)(vlTOPp->hard_msg)))));
        tracep->fullCData(oldp+77,(((IData)(vlTOPp->reset)
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->reset)) 
                                                       & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en))))
                                                    ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)
                                                    : 
                                                   (((~ (IData)(vlTOPp->reset)) 
                                                     & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer))
                                                     : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer)))))),2);
        tracep->fullCData(oldp+78,(((IData)(vlTOPp->reset)
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->reset)) 
                                                       & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))))
                                                    ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer)
                                                    : 
                                                   (((~ (IData)(vlTOPp->reset)) 
                                                     & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer))
                                                     : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer)))))),2);
        tracep->fullCData(oldp+79,(((IData)(vlTOPp->reset)
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->reset)) 
                                                       & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en))))
                                                    ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)
                                                    : 
                                                   (((~ (IData)(vlTOPp->reset)) 
                                                     & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer))
                                                     : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer)))))),2);
        tracep->fullCData(oldp+80,(((IData)(vlTOPp->reset)
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->reset)) 
                                                       & (~ (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en))))
                                                    ? (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer)
                                                    : 
                                                   (((~ (IData)(vlTOPp->reset)) 
                                                     & (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer))
                                                     : (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer)))))),2);
        tracep->fullIData(oldp+81,(0x80U),32);
        tracep->fullIData(oldp+82,(4U),32);
        tracep->fullIData(oldp+83,(2U),32);
        tracep->fullIData(oldp+84,(0U),32);
        tracep->fullIData(oldp+85,(3U),32);
        tracep->fullBit(oldp+86,(0U));
    }
}
