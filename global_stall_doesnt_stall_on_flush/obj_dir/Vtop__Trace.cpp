// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->top__DOT__pipeline_1__DOT__address
                          [3U]),8);
        vcdp->chgBus(c+9,(vlTOPp->top__DOT__pipeline_1__DOT__id
                          [3U]),8);
        vcdp->chgBit(c+17,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                           [3U]));
        vcdp->chgBit(c+25,(vlTOPp->top__DOT__stall_1));
        vcdp->chgBus(c+33,(vlTOPp->top__DOT__pipeline_2__DOT__address
                           [3U]),8);
        vcdp->chgBus(c+41,(vlTOPp->top__DOT__pipeline_2__DOT__id
                           [3U]),8);
        vcdp->chgBit(c+49,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                           [3U]));
        vcdp->chgBit(c+57,(vlTOPp->top__DOT__stall_2));
        vcdp->chgBit(c+65,((vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [3U] | vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [3U])));
        vcdp->chgBus(c+73,(vlTOPp->top__DOT__pipeline_1__DOT__address[0]),8);
        vcdp->chgBus(c+74,(vlTOPp->top__DOT__pipeline_1__DOT__address[1]),8);
        vcdp->chgBus(c+75,(vlTOPp->top__DOT__pipeline_1__DOT__address[2]),8);
        vcdp->chgBus(c+76,(vlTOPp->top__DOT__pipeline_1__DOT__address[3]),8);
        vcdp->chgBus(c+105,(vlTOPp->top__DOT__pipeline_1__DOT__id[0]),8);
        vcdp->chgBus(c+106,(vlTOPp->top__DOT__pipeline_1__DOT__id[1]),8);
        vcdp->chgBus(c+107,(vlTOPp->top__DOT__pipeline_1__DOT__id[2]),8);
        vcdp->chgBus(c+108,(vlTOPp->top__DOT__pipeline_1__DOT__id[3]),8);
        vcdp->chgBit(c+137,(vlTOPp->top__DOT__pipeline_1__DOT__valid[0]));
        vcdp->chgBit(c+138,(vlTOPp->top__DOT__pipeline_1__DOT__valid[1]));
        vcdp->chgBit(c+139,(vlTOPp->top__DOT__pipeline_1__DOT__valid[2]));
        vcdp->chgBit(c+140,(vlTOPp->top__DOT__pipeline_1__DOT__valid[3]));
        vcdp->chgBit(c+169,(vlTOPp->top__DOT__pipeline_1__DOT__flush[0]));
        vcdp->chgBit(c+170,(vlTOPp->top__DOT__pipeline_1__DOT__flush[1]));
        vcdp->chgBit(c+171,(vlTOPp->top__DOT__pipeline_1__DOT__flush[2]));
        vcdp->chgBit(c+172,(vlTOPp->top__DOT__pipeline_1__DOT__flush[3]));
        vcdp->chgBus(c+201,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[0]),8);
        vcdp->chgBus(c+202,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[1]),8);
        vcdp->chgBus(c+203,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[2]),8);
        vcdp->chgBus(c+204,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[3]),8);
        vcdp->chgBus(c+233,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+241,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+249,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [0U]));
        vcdp->chgBit(c+257,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [0U]));
        vcdp->chgBus(c+265,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [0U]),8);
        vcdp->chgBus(c+273,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+281,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+289,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [1U]));
        vcdp->chgBit(c+297,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [1U]));
        vcdp->chgBus(c+305,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [1U]),8);
        vcdp->chgBus(c+313,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+321,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+329,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [2U]));
        vcdp->chgBit(c+337,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [2U]));
        vcdp->chgBus(c+345,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [2U]),8);
        vcdp->chgBus(c+353,(vlTOPp->top__DOT__pipeline_2__DOT__address[0]),8);
        vcdp->chgBus(c+354,(vlTOPp->top__DOT__pipeline_2__DOT__address[1]),8);
        vcdp->chgBus(c+355,(vlTOPp->top__DOT__pipeline_2__DOT__address[2]),8);
        vcdp->chgBus(c+356,(vlTOPp->top__DOT__pipeline_2__DOT__address[3]),8);
        vcdp->chgBus(c+385,(vlTOPp->top__DOT__pipeline_2__DOT__id[0]),8);
        vcdp->chgBus(c+386,(vlTOPp->top__DOT__pipeline_2__DOT__id[1]),8);
        vcdp->chgBus(c+387,(vlTOPp->top__DOT__pipeline_2__DOT__id[2]),8);
        vcdp->chgBus(c+388,(vlTOPp->top__DOT__pipeline_2__DOT__id[3]),8);
        vcdp->chgBit(c+417,(vlTOPp->top__DOT__pipeline_2__DOT__valid[0]));
        vcdp->chgBit(c+418,(vlTOPp->top__DOT__pipeline_2__DOT__valid[1]));
        vcdp->chgBit(c+419,(vlTOPp->top__DOT__pipeline_2__DOT__valid[2]));
        vcdp->chgBit(c+420,(vlTOPp->top__DOT__pipeline_2__DOT__valid[3]));
        vcdp->chgBit(c+449,(vlTOPp->top__DOT__pipeline_2__DOT__flush[0]));
        vcdp->chgBit(c+450,(vlTOPp->top__DOT__pipeline_2__DOT__flush[1]));
        vcdp->chgBit(c+451,(vlTOPp->top__DOT__pipeline_2__DOT__flush[2]));
        vcdp->chgBit(c+452,(vlTOPp->top__DOT__pipeline_2__DOT__flush[3]));
        vcdp->chgBus(c+481,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[0]),8);
        vcdp->chgBus(c+482,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[1]),8);
        vcdp->chgBus(c+483,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[2]),8);
        vcdp->chgBus(c+484,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[3]),8);
        vcdp->chgBus(c+513,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+521,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+529,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [0U]));
        vcdp->chgBit(c+537,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [0U]));
        vcdp->chgBus(c+545,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [0U]),8);
        vcdp->chgBus(c+553,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+561,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+569,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [1U]));
        vcdp->chgBit(c+577,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [1U]));
        vcdp->chgBus(c+585,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [1U]),8);
        vcdp->chgBus(c+593,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+601,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+609,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [2U]));
        vcdp->chgBit(c+617,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [2U]));
        vcdp->chgBus(c+625,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [2U]),8);
        vcdp->chgBus(c+633,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                              ? vlTOPp->top__DOT__pipeline_2__DOT__address
                             [3U] : vlTOPp->top__DOT__pipeline_1__DOT__address
                             [3U])),8);
        vcdp->chgBus(c+641,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                              ? vlTOPp->top__DOT__pipeline_2__DOT__id
                             [3U] : vlTOPp->top__DOT__pipeline_1__DOT__id
                             [3U])),8);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+649,(vlTOPp->top__DOT__producer__DOT__reg_address_1),8);
        vcdp->chgBus(c+657,(vlTOPp->top__DOT__producer__DOT__reg_id_1),8);
        vcdp->chgBit(c+665,(vlTOPp->top__DOT__producer__DOT__reg_valid_1));
        vcdp->chgBus(c+673,(vlTOPp->top__DOT__producer__DOT__reg_address_2),8);
        vcdp->chgBus(c+681,(vlTOPp->top__DOT__producer__DOT__reg_id_2),8);
        vcdp->chgBit(c+689,(vlTOPp->top__DOT__producer__DOT__reg_valid_2));
        vcdp->chgBit(c+697,(vlTOPp->top__DOT__arbiter__DOT__reg_choice));
        vcdp->chgBit(c+705,(vlTOPp->top__DOT__producer__DOT__reg_flush_1));
        vcdp->chgBus(c+713,(vlTOPp->top__DOT__producer__DOT__reg_flush_id_1),8);
        vcdp->chgBit(c+721,(vlTOPp->top__DOT__producer__DOT__reg_flush_2));
        vcdp->chgBus(c+729,(vlTOPp->top__DOT__producer__DOT__reg_flush_id_2),8);
        vcdp->chgBus(c+737,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_external),32);
        vcdp->chgBus(c+745,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_external),8);
        vcdp->chgBit(c+753,(vlTOPp->top__DOT__shared_resource__DOT__reg_valid));
        vcdp->chgBit(c+761,(vlTOPp->top__DOT__shared_resource__DOT__reg_ready));
        vcdp->chgBus(c+769,(vlTOPp->top__DOT__producer__DOT__flush_counter),6);
        vcdp->chgBit(c+777,(vlTOPp->top__DOT__producer__DOT__flush_issued));
        vcdp->chgBus(c+785,(vlTOPp->top__DOT__producer__DOT__reg_id_1_old),8);
        vcdp->chgBus(c+793,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+801,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+809,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+817,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+825,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+833,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+841,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+849,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+857,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+873,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+881,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+889,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+897,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+905,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+913,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+921,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+929,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+937,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+953,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+961,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+969,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+977,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+985,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+993,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address),8);
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id),8);
        vcdp->chgBit(c+1009,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid));
        vcdp->chgBit(c+1017,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1033,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal),32);
        vcdp->chgBus(c+1041,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal),8);
        vcdp->chgBus(c+1049,(vlTOPp->top__DOT__shared_resource__DOT__counter),4);
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__shared_resource__DOT__ready_counter),4);
        vcdp->chgBus(c+1065,(vlTOPp->top__DOT__consumer__DOT__data_reg),32);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT__consumer__DOT__id_reg),8);
        vcdp->chgBit(c+1081,(vlTOPp->top__DOT__consumer__DOT__valid_reg));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1089,(vlTOPp->clk));
        vcdp->chgBit(c+1097,(vlTOPp->reset));
    }
}
