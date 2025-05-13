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
        vcdp->chgBit(c+1,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                          [0U]));
        vcdp->chgBit(c+9,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                          [0U]));
        vcdp->chgBus(c+17,(vlTOPp->top__DOT__pipeline_1__DOT__address
                           [3U]),8);
        vcdp->chgBus(c+25,(vlTOPp->top__DOT__pipeline_1__DOT__id
                           [3U]),8);
        vcdp->chgBit(c+33,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                           [3U]));
        vcdp->chgBit(c+41,((vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                             & (~ (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)))))
                             : 0U)));
        vcdp->chgBus(c+49,(vlTOPp->top__DOT__pipeline_2__DOT__address
                           [3U]),8);
        vcdp->chgBus(c+57,(vlTOPp->top__DOT__pipeline_2__DOT__id
                           [3U]),8);
        vcdp->chgBit(c+65,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                           [3U]));
        vcdp->chgBit(c+73,((vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                             & (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice))))
                             : 0U)));
        vcdp->chgBit(c+81,((vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [3U] | vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [3U])));
        vcdp->chgBus(c+89,(vlTOPp->top__DOT__pipeline_1__DOT__address[0]),8);
        vcdp->chgBus(c+90,(vlTOPp->top__DOT__pipeline_1__DOT__address[1]),8);
        vcdp->chgBus(c+91,(vlTOPp->top__DOT__pipeline_1__DOT__address[2]),8);
        vcdp->chgBus(c+92,(vlTOPp->top__DOT__pipeline_1__DOT__address[3]),8);
        vcdp->chgBus(c+121,(vlTOPp->top__DOT__pipeline_1__DOT__id[0]),8);
        vcdp->chgBus(c+122,(vlTOPp->top__DOT__pipeline_1__DOT__id[1]),8);
        vcdp->chgBus(c+123,(vlTOPp->top__DOT__pipeline_1__DOT__id[2]),8);
        vcdp->chgBus(c+124,(vlTOPp->top__DOT__pipeline_1__DOT__id[3]),8);
        vcdp->chgBit(c+153,(vlTOPp->top__DOT__pipeline_1__DOT__valid[0]));
        vcdp->chgBit(c+154,(vlTOPp->top__DOT__pipeline_1__DOT__valid[1]));
        vcdp->chgBit(c+155,(vlTOPp->top__DOT__pipeline_1__DOT__valid[2]));
        vcdp->chgBit(c+156,(vlTOPp->top__DOT__pipeline_1__DOT__valid[3]));
        vcdp->chgBit(c+185,(vlTOPp->top__DOT__pipeline_1__DOT__stall[0]));
        vcdp->chgBit(c+186,(vlTOPp->top__DOT__pipeline_1__DOT__stall[1]));
        vcdp->chgBit(c+187,(vlTOPp->top__DOT__pipeline_1__DOT__stall[2]));
        vcdp->chgBit(c+188,(vlTOPp->top__DOT__pipeline_1__DOT__stall[3]));
        vcdp->chgBus(c+217,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+225,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+233,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [0U]));
        vcdp->chgBit(c+241,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [1U]));
        vcdp->chgBit(c+249,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+257,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->chgBus(c+265,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+273,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+281,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [1U]));
        vcdp->chgBit(c+289,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [2U]));
        vcdp->chgBit(c+297,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+305,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->chgBus(c+313,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+321,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+329,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [2U]));
        vcdp->chgBit(c+337,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [3U]));
        vcdp->chgBit(c+345,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+353,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->chgBus(c+361,(vlTOPp->top__DOT__pipeline_2__DOT__address[0]),8);
        vcdp->chgBus(c+362,(vlTOPp->top__DOT__pipeline_2__DOT__address[1]),8);
        vcdp->chgBus(c+363,(vlTOPp->top__DOT__pipeline_2__DOT__address[2]),8);
        vcdp->chgBus(c+364,(vlTOPp->top__DOT__pipeline_2__DOT__address[3]),8);
        vcdp->chgBus(c+393,(vlTOPp->top__DOT__pipeline_2__DOT__id[0]),8);
        vcdp->chgBus(c+394,(vlTOPp->top__DOT__pipeline_2__DOT__id[1]),8);
        vcdp->chgBus(c+395,(vlTOPp->top__DOT__pipeline_2__DOT__id[2]),8);
        vcdp->chgBus(c+396,(vlTOPp->top__DOT__pipeline_2__DOT__id[3]),8);
        vcdp->chgBit(c+425,(vlTOPp->top__DOT__pipeline_2__DOT__valid[0]));
        vcdp->chgBit(c+426,(vlTOPp->top__DOT__pipeline_2__DOT__valid[1]));
        vcdp->chgBit(c+427,(vlTOPp->top__DOT__pipeline_2__DOT__valid[2]));
        vcdp->chgBit(c+428,(vlTOPp->top__DOT__pipeline_2__DOT__valid[3]));
        vcdp->chgBit(c+457,(vlTOPp->top__DOT__pipeline_2__DOT__stall[0]));
        vcdp->chgBit(c+458,(vlTOPp->top__DOT__pipeline_2__DOT__stall[1]));
        vcdp->chgBit(c+459,(vlTOPp->top__DOT__pipeline_2__DOT__stall[2]));
        vcdp->chgBit(c+460,(vlTOPp->top__DOT__pipeline_2__DOT__stall[3]));
        vcdp->chgBus(c+489,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+497,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+505,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [0U]));
        vcdp->chgBit(c+513,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [1U]));
        vcdp->chgBit(c+521,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+529,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->chgBus(c+537,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+545,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+553,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [1U]));
        vcdp->chgBit(c+561,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [2U]));
        vcdp->chgBit(c+569,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+577,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en));
        vcdp->chgBus(c+585,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+593,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+601,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [2U]));
        vcdp->chgBit(c+609,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [3U]));
        vcdp->chgBit(c+617,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en));
        vcdp->chgBit(c+625,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en));
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
        vcdp->chgBus(c+705,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_external),32);
        vcdp->chgBus(c+713,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_external),8);
        vcdp->chgBit(c+721,(vlTOPp->top__DOT__shared_resource__DOT__reg_valid));
        vcdp->chgBit(c+729,(vlTOPp->top__DOT__shared_resource__DOT__reg_ready));
        vcdp->chgBit(c+737,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+745,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+753,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+761,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+769,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+777,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+785,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+793,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+801,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+809,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+817,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+825,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+833,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+841,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+849,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+857,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+873,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+881,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+889,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+897,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+905,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+913,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+921,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+929,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+937,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+953,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+961,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+969,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+977,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+985,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+993,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1001,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBus(c+1009,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1017,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal),32);
        vcdp->chgBus(c+1033,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal),8);
        vcdp->chgBus(c+1041,(vlTOPp->top__DOT__shared_resource__DOT__counter),4);
        vcdp->chgBus(c+1049,(vlTOPp->top__DOT__consumer__DOT__data_reg),32);
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__consumer__DOT__id_reg),8);
        vcdp->chgBit(c+1065,(vlTOPp->top__DOT__consumer__DOT__valid_reg));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1073,(vlTOPp->clk));
        vcdp->chgBit(c+1081,(vlTOPp->reset));
    }
}
