// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSPIQueue__pack_size_128__num_entries_4__Syms.h"


void VSPIQueue__pack_size_128__num_entries_4::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((4U > (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
            tracep->chgCData(oldp+1,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send),3);
            tracep->chgBit(oldp+2,((0U < (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
            tracep->chgCData(oldp+3,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv),3);
            tracep->chgCData(oldp+4,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__write_pointer),2);
            tracep->chgCData(oldp+5,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__read_pointer),2);
            tracep->chgBit(oldp+6,((4U <= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
            tracep->chgBit(oldp+7,((0U >= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_send))));
            tracep->chgWData(oldp+8,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[0]),128);
            tracep->chgWData(oldp+12,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[1]),128);
            tracep->chgWData(oldp+16,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[2]),128);
            tracep->chgWData(oldp+20,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__queue_regfile__DOT__rfile[3]),128);
            tracep->chgCData(oldp+24,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__write_pointer),2);
            tracep->chgCData(oldp+25,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__read_pointer),2);
            tracep->chgBit(oldp+26,((4U <= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
            tracep->chgBit(oldp+27,((0U >= (IData)(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__entry_count_recv))));
            tracep->chgWData(oldp+28,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[0]),128);
            tracep->chgWData(oldp+32,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[1]),128);
            tracep->chgWData(oldp+36,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[2]),128);
            tracep->chgWData(oldp+40,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__queue_regfile__DOT__rfile[3]),128);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+44,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_write_en));
            tracep->chgBit(oldp+45,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__reg_read_en));
            tracep->chgCData(oldp+46,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__toDeviceQ__DOT__entry_counter__DOT__count_next),3);
            tracep->chgBit(oldp+47,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_write_en));
            tracep->chgBit(oldp+48,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__reg_read_en));
            tracep->chgCData(oldp+49,(vlTOPp->SPIQueue___05Fpack_size_128___05Fnum_entries_4__DOT__v__DOT__FromDeviceQ__DOT__entry_counter__DOT__count_next),3);
        }
        tracep->chgBit(oldp+50,(vlTOPp->clk));
        tracep->chgWData(oldp+51,(vlTOPp->from_master),128);
        tracep->chgBit(oldp+55,(vlTOPp->hard_msg));
        tracep->chgWData(oldp+56,(vlTOPp->recv_msg),128);
        tracep->chgBit(oldp+60,(vlTOPp->recv_rdy));
        tracep->chgBit(oldp+61,(vlTOPp->recv_val));
        tracep->chgBit(oldp+62,(vlTOPp->reset));
        tracep->chgBit(oldp+63,(vlTOPp->seize));
        tracep->chgWData(oldp+64,(vlTOPp->send_msg),128);
        tracep->chgBit(oldp+68,(vlTOPp->send_rdy));
        tracep->chgBit(oldp+69,(vlTOPp->send_val));
        tracep->chgBit(oldp+70,(vlTOPp->serve));
        tracep->chgWData(oldp+71,(vlTOPp->to_master),128);
        tracep->chgBit(oldp+75,(((IData)(vlTOPp->serve) 
                                 & (~ (IData)(vlTOPp->hard_msg)))));
        tracep->chgCData(oldp+76,(((IData)(vlTOPp->reset)
                                    ? 0U : (3U & ((1U 
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
        tracep->chgCData(oldp+77,(((IData)(vlTOPp->reset)
                                    ? 0U : (3U & ((1U 
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
        tracep->chgCData(oldp+78,(((IData)(vlTOPp->reset)
                                    ? 0U : (3U & ((1U 
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
        tracep->chgCData(oldp+79,(((IData)(vlTOPp->reset)
                                    ? 0U : (3U & ((1U 
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
    }
}

void VSPIQueue__pack_size_128__num_entries_4::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSPIQueue__pack_size_128__num_entries_4__Syms* __restrict vlSymsp = static_cast<VSPIQueue__pack_size_128__num_entries_4__Syms*>(userp);
    VSPIQueue__pack_size_128__num_entries_4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
