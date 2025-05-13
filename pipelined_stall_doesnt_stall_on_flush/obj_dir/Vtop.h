// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ top__DOT__producer__DOT__reg_address_1;
        CData/*7:0*/ top__DOT__producer__DOT__reg_id_1;
        CData/*0:0*/ top__DOT__producer__DOT__reg_valid_1;
        CData/*7:0*/ top__DOT__producer__DOT__reg_address_2;
        CData/*7:0*/ top__DOT__producer__DOT__reg_id_2;
        CData/*0:0*/ top__DOT__producer__DOT__reg_valid_2;
        CData/*0:0*/ top__DOT__producer__DOT__reg_flush_1;
        CData/*7:0*/ top__DOT__producer__DOT__reg_flush_id_1;
        CData/*0:0*/ top__DOT__producer__DOT__reg_flush_2;
        CData/*7:0*/ top__DOT__producer__DOT__reg_flush_id_2;
        CData/*5:0*/ top__DOT__producer__DOT__flush_counter;
        CData/*0:0*/ top__DOT__producer__DOT__flush_issued;
        CData/*1:0*/ top__DOT__producer__DOT__issue_data_counter;
        CData/*7:0*/ top__DOT__producer__DOT__reg_id_1_old;
        CData/*0:0*/ top__DOT__arbiter__DOT__reg_choice;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_id;
    };
    struct {
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_main_valid;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_address;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_overflow_valid;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
        CData/*7:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__main_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_en;
        CData/*0:0*/ top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__overflow_sel;
        CData/*7:0*/ top__DOT__shared_resource__DOT__reg_id_internal;
        CData/*7:0*/ top__DOT__shared_resource__DOT__reg_id_external;
        CData/*0:0*/ top__DOT__shared_resource__DOT__reg_valid;
        CData/*0:0*/ top__DOT__shared_resource__DOT__reg_ready;
        CData/*3:0*/ top__DOT__shared_resource__DOT__counter;
        CData/*3:0*/ top__DOT__shared_resource__DOT__ready_counter;
        CData/*7:0*/ top__DOT__consumer__DOT__id_reg;
        CData/*0:0*/ top__DOT__consumer__DOT__valid_reg;
        IData/*31:0*/ top__DOT__shared_resource__DOT__reg_data_internal;
        IData/*31:0*/ top__DOT__shared_resource__DOT__reg_data_external;
        IData/*31:0*/ top__DOT__consumer__DOT__data_reg;
        CData/*7:0*/ top__DOT__pipeline_1__DOT__address[4];
        CData/*7:0*/ top__DOT__pipeline_1__DOT__id[4];
        CData/*0:0*/ top__DOT__pipeline_1__DOT__valid[4];
        CData/*0:0*/ top__DOT__pipeline_1__DOT__stall[4];
        CData/*0:0*/ top__DOT__pipeline_1__DOT__flush[4];
        CData/*7:0*/ top__DOT__pipeline_1__DOT__flush_id[4];
        CData/*7:0*/ top__DOT__pipeline_2__DOT__address[4];
        CData/*7:0*/ top__DOT__pipeline_2__DOT__id[4];
        CData/*0:0*/ top__DOT__pipeline_2__DOT__valid[4];
        CData/*0:0*/ top__DOT__pipeline_2__DOT__stall[4];
        CData/*0:0*/ top__DOT__pipeline_2__DOT__flush[4];
        CData/*7:0*/ top__DOT__pipeline_2__DOT__flush_id[4];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
