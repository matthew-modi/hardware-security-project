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
        vcdp->chgBit(c+217,(vlTOPp->top__DOT__pipeline_1__DOT__flush[0]));
        vcdp->chgBit(c+218,(vlTOPp->top__DOT__pipeline_1__DOT__flush[1]));
        vcdp->chgBit(c+219,(vlTOPp->top__DOT__pipeline_1__DOT__flush[2]));
        vcdp->chgBit(c+220,(vlTOPp->top__DOT__pipeline_1__DOT__flush[3]));
        vcdp->chgBus(c+249,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[0]),8);
        vcdp->chgBus(c+250,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[1]),8);
        vcdp->chgBus(c+251,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[2]),8);
        vcdp->chgBus(c+252,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id[3]),8);
        vcdp->chgBus(c+281,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+289,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+297,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [0U]));
        vcdp->chgBit(c+305,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [0U]));
        vcdp->chgBus(c+313,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [0U]),8);
        vcdp->chgBit(c+321,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [1U]));
        vcdp->chgBit(c+329,((1U & (~ (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                      [1U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+337,((((((~ vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [1U]) & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                  [1U] & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [1U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+345,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+353,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+361,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+369,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [1U]));
        vcdp->chgBit(c+377,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [1U]));
        vcdp->chgBus(c+385,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [1U]),8);
        vcdp->chgBit(c+393,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [2U]));
        vcdp->chgBit(c+401,((1U & (~ (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                      [2U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+409,((((((~ vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [2U]) & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                  [2U] & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [2U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+417,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+425,(vlTOPp->top__DOT__pipeline_1__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+433,(vlTOPp->top__DOT__pipeline_1__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+441,(vlTOPp->top__DOT__pipeline_1__DOT__valid
                            [2U]));
        vcdp->chgBit(c+449,(vlTOPp->top__DOT__pipeline_1__DOT__flush
                            [2U]));
        vcdp->chgBus(c+457,(vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                            [2U]),8);
        vcdp->chgBit(c+465,(vlTOPp->top__DOT__pipeline_1__DOT__stall
                            [3U]));
        vcdp->chgBit(c+473,((1U & (~ (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                      [3U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+481,((((((~ vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [3U]) & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_1__DOT__stall
                                  [3U] & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_1__DOT__stall
                                 [3U] & (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+489,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+497,(vlTOPp->top__DOT__pipeline_2__DOT__address[0]),8);
        vcdp->chgBus(c+498,(vlTOPp->top__DOT__pipeline_2__DOT__address[1]),8);
        vcdp->chgBus(c+499,(vlTOPp->top__DOT__pipeline_2__DOT__address[2]),8);
        vcdp->chgBus(c+500,(vlTOPp->top__DOT__pipeline_2__DOT__address[3]),8);
        vcdp->chgBus(c+529,(vlTOPp->top__DOT__pipeline_2__DOT__id[0]),8);
        vcdp->chgBus(c+530,(vlTOPp->top__DOT__pipeline_2__DOT__id[1]),8);
        vcdp->chgBus(c+531,(vlTOPp->top__DOT__pipeline_2__DOT__id[2]),8);
        vcdp->chgBus(c+532,(vlTOPp->top__DOT__pipeline_2__DOT__id[3]),8);
        vcdp->chgBit(c+561,(vlTOPp->top__DOT__pipeline_2__DOT__valid[0]));
        vcdp->chgBit(c+562,(vlTOPp->top__DOT__pipeline_2__DOT__valid[1]));
        vcdp->chgBit(c+563,(vlTOPp->top__DOT__pipeline_2__DOT__valid[2]));
        vcdp->chgBit(c+564,(vlTOPp->top__DOT__pipeline_2__DOT__valid[3]));
        vcdp->chgBit(c+593,(vlTOPp->top__DOT__pipeline_2__DOT__stall[0]));
        vcdp->chgBit(c+594,(vlTOPp->top__DOT__pipeline_2__DOT__stall[1]));
        vcdp->chgBit(c+595,(vlTOPp->top__DOT__pipeline_2__DOT__stall[2]));
        vcdp->chgBit(c+596,(vlTOPp->top__DOT__pipeline_2__DOT__stall[3]));
        vcdp->chgBit(c+625,(vlTOPp->top__DOT__pipeline_2__DOT__flush[0]));
        vcdp->chgBit(c+626,(vlTOPp->top__DOT__pipeline_2__DOT__flush[1]));
        vcdp->chgBit(c+627,(vlTOPp->top__DOT__pipeline_2__DOT__flush[2]));
        vcdp->chgBit(c+628,(vlTOPp->top__DOT__pipeline_2__DOT__flush[3]));
        vcdp->chgBus(c+657,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[0]),8);
        vcdp->chgBus(c+658,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[1]),8);
        vcdp->chgBus(c+659,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[2]),8);
        vcdp->chgBus(c+660,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id[3]),8);
        vcdp->chgBus(c+689,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [0U]),8);
        vcdp->chgBus(c+697,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [0U]),8);
        vcdp->chgBit(c+705,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [0U]));
        vcdp->chgBit(c+713,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [0U]));
        vcdp->chgBus(c+721,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [0U]),8);
        vcdp->chgBit(c+729,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [1U]));
        vcdp->chgBit(c+737,((1U & (~ (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                      [1U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+745,((((((~ vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [1U]) & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                  [1U] & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [1U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+753,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+761,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [1U]),8);
        vcdp->chgBus(c+769,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [1U]),8);
        vcdp->chgBit(c+777,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [1U]));
        vcdp->chgBit(c+785,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [1U]));
        vcdp->chgBus(c+793,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [1U]),8);
        vcdp->chgBit(c+801,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [2U]));
        vcdp->chgBit(c+809,((1U & (~ (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                      [2U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+817,((((((~ vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [2U]) & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                  [2U] & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [2U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+825,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+833,(vlTOPp->top__DOT__pipeline_2__DOT__address
                            [2U]),8);
        vcdp->chgBus(c+841,(vlTOPp->top__DOT__pipeline_2__DOT__id
                            [2U]),8);
        vcdp->chgBit(c+849,(vlTOPp->top__DOT__pipeline_2__DOT__valid
                            [2U]));
        vcdp->chgBit(c+857,(vlTOPp->top__DOT__pipeline_2__DOT__flush
                            [2U]));
        vcdp->chgBus(c+865,(vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                            [2U]),8);
        vcdp->chgBit(c+873,(vlTOPp->top__DOT__pipeline_2__DOT__stall
                            [3U]));
        vcdp->chgBit(c+881,((1U & (~ (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                      [3U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+889,((((((~ vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [3U]) & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                               | (vlTOPp->top__DOT__pipeline_2__DOT__stall
                                  [3U] & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)))) 
                              & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid)) 
                             | ((vlTOPp->top__DOT__pipeline_2__DOT__stall
                                 [3U] & (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid)) 
                                & (~ (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid))))));
        vcdp->chgBit(c+897,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_sel));
        vcdp->chgBus(c+905,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                              ? vlTOPp->top__DOT__pipeline_2__DOT__address
                             [3U] : vlTOPp->top__DOT__pipeline_1__DOT__address
                             [3U])),8);
        vcdp->chgBus(c+913,(((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
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
        vcdp->chgBus(c+921,(vlTOPp->top__DOT__producer__DOT__reg_address_1),8);
        vcdp->chgBus(c+929,(vlTOPp->top__DOT__producer__DOT__reg_id_1),8);
        vcdp->chgBit(c+937,(vlTOPp->top__DOT__producer__DOT__reg_valid_1));
        vcdp->chgBus(c+945,(vlTOPp->top__DOT__producer__DOT__reg_address_2),8);
        vcdp->chgBus(c+953,(vlTOPp->top__DOT__producer__DOT__reg_id_2),8);
        vcdp->chgBit(c+961,(vlTOPp->top__DOT__producer__DOT__reg_valid_2));
        vcdp->chgBit(c+969,(vlTOPp->top__DOT__arbiter__DOT__reg_choice));
        vcdp->chgBit(c+977,(vlTOPp->top__DOT__producer__DOT__reg_flush_1));
        vcdp->chgBus(c+985,(vlTOPp->top__DOT__producer__DOT__reg_flush_id_1),8);
        vcdp->chgBit(c+993,(vlTOPp->top__DOT__producer__DOT__reg_flush_2));
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT__producer__DOT__reg_flush_id_2),8);
        vcdp->chgBus(c+1009,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_external),32);
        vcdp->chgBus(c+1017,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_external),8);
        vcdp->chgBit(c+1025,(vlTOPp->top__DOT__shared_resource__DOT__reg_valid));
        vcdp->chgBit(c+1033,(vlTOPp->top__DOT__shared_resource__DOT__reg_ready));
        vcdp->chgBus(c+1041,(vlTOPp->top__DOT__producer__DOT__flush_counter),6);
        vcdp->chgBit(c+1049,(vlTOPp->top__DOT__producer__DOT__flush_issued));
        vcdp->chgBus(c+1057,(vlTOPp->top__DOT__producer__DOT__reg_id_1_old),8);
        vcdp->chgBit(c+1065,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1081,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1089,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1097,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1105,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1113,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1121,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+1129,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1137,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1145,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1153,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1161,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1169,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1177,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+1193,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1209,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1217,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1225,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1233,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1241,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1249,(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+1257,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1265,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1273,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1281,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1289,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1297,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1305,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1313,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+1321,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1329,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1337,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1345,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1353,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1361,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1369,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1377,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBit(c+1385,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid));
        vcdp->chgBus(c+1393,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address),8);
        vcdp->chgBus(c+1401,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id),8);
        vcdp->chgBit(c+1409,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid));
        vcdp->chgBit(c+1417,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush));
        vcdp->chgBus(c+1425,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id),8);
        vcdp->chgBus(c+1433,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address),8);
        vcdp->chgBus(c+1441,(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id),8);
        vcdp->chgBus(c+1449,(vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal),32);
        vcdp->chgBus(c+1457,(vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal),8);
        vcdp->chgBus(c+1465,(vlTOPp->top__DOT__shared_resource__DOT__counter),4);
        vcdp->chgBus(c+1473,(vlTOPp->top__DOT__shared_resource__DOT__ready_counter),4);
        vcdp->chgBus(c+1481,(vlTOPp->top__DOT__consumer__DOT__data_reg),32);
        vcdp->chgBus(c+1489,(vlTOPp->top__DOT__consumer__DOT__id_reg),8);
        vcdp->chgBit(c+1497,(vlTOPp->top__DOT__consumer__DOT__valid_reg));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1505,(vlTOPp->clk));
        vcdp->chgBit(c+1513,(vlTOPp->reset));
    }
}
