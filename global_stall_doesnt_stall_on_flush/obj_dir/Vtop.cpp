// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__top__DOT__producer__DOT__reg_address_2;
    CData/*7:0*/ __Vdly__top__DOT__producer__DOT__reg_id_1_old;
    CData/*7:0*/ __Vdly__top__DOT__producer__DOT__reg_id_2;
    CData/*7:0*/ __Vdly__top__DOT__producer__DOT__reg_address_1;
    CData/*5:0*/ __Vdly__top__DOT__producer__DOT__flush_counter;
    CData/*0:0*/ __Vdly__top__DOT__producer__DOT__flush_issued;
    CData/*0:0*/ __Vdly__top__DOT__arbiter__DOT__reg_choice;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    CData/*7:0*/ __Vdly__top__DOT__shared_resource__DOT__reg_id_internal;
    CData/*3:0*/ __Vdly__top__DOT__shared_resource__DOT__counter;
    CData/*3:0*/ __Vdly__top__DOT__shared_resource__DOT__ready_counter;
    IData/*31:0*/ __Vdly__top__DOT__shared_resource__DOT__reg_data_internal;
    // Body
    __Vdly__top__DOT__producer__DOT__reg_id_1_old = vlTOPp->top__DOT__producer__DOT__reg_id_1_old;
    __Vdly__top__DOT__producer__DOT__flush_issued = vlTOPp->top__DOT__producer__DOT__flush_issued;
    __Vdly__top__DOT__producer__DOT__flush_counter 
        = vlTOPp->top__DOT__producer__DOT__flush_counter;
    __Vdly__top__DOT__producer__DOT__reg_address_1 
        = vlTOPp->top__DOT__producer__DOT__reg_address_1;
    __Vdly__top__DOT__producer__DOT__reg_id_2 = vlTOPp->top__DOT__producer__DOT__reg_id_2;
    __Vdly__top__DOT__producer__DOT__reg_address_2 
        = vlTOPp->top__DOT__producer__DOT__reg_address_2;
    __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    __Vdly__top__DOT__shared_resource__DOT__ready_counter 
        = vlTOPp->top__DOT__shared_resource__DOT__ready_counter;
    __Vdly__top__DOT__shared_resource__DOT__counter 
        = vlTOPp->top__DOT__shared_resource__DOT__counter;
    __Vdly__top__DOT__shared_resource__DOT__reg_id_internal 
        = vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal;
    __Vdly__top__DOT__shared_resource__DOT__reg_data_internal 
        = vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal;
    __Vdly__top__DOT__arbiter__DOT__reg_choice = vlTOPp->top__DOT__arbiter__DOT__reg_choice;
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_flush_id_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_flush_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_id_1 = 0U;
        __Vdly__top__DOT__producer__DOT__reg_id_1_old = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            vlTOPp->top__DOT__producer__DOT__reg_id_1 
                = (0x10U | (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__producer__DOT__reg_id_1_old))));
            __Vdly__top__DOT__producer__DOT__reg_id_1_old 
                = (0x10U | (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__producer__DOT__reg_id_1_old))));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__producer__DOT__reg_address_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            __Vdly__top__DOT__producer__DOT__reg_address_1 
                = (0xffU & ((IData)(4U) + (IData)(vlTOPp->top__DOT__producer__DOT__reg_address_1)));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__producer__DOT__reg_id_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            __Vdly__top__DOT__producer__DOT__reg_id_2 
                = (0x20U | (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__producer__DOT__reg_id_2))));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__top__DOT__producer__DOT__reg_address_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            __Vdly__top__DOT__producer__DOT__reg_address_2 
                = (0xffU & ((IData)(4U) + (IData)(vlTOPp->top__DOT__producer__DOT__reg_address_2)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_flush_1 = 0U;
        vlTOPp->top__DOT__producer__DOT__reg_flush_id_1 = 0U;
        __Vdly__top__DOT__producer__DOT__flush_counter = 0x29U;
        __Vdly__top__DOT__producer__DOT__flush_issued = 0U;
    } else {
        if ((1U & ((~ (IData)((0U != (IData)(vlTOPp->top__DOT__producer__DOT__flush_counter)))) 
                   & (~ (IData)(vlTOPp->top__DOT__producer__DOT__flush_issued))))) {
            vlTOPp->top__DOT__producer__DOT__reg_flush_1 = 1U;
            vlTOPp->top__DOT__producer__DOT__reg_flush_id_1 = 0x16U;
            __Vdly__top__DOT__producer__DOT__flush_issued = 1U;
        } else {
            vlTOPp->top__DOT__producer__DOT__reg_flush_1 = 0U;
            vlTOPp->top__DOT__producer__DOT__reg_flush_id_1 = 0U;
        }
        __Vdly__top__DOT__producer__DOT__flush_counter 
            = (0x3fU & ((IData)(vlTOPp->top__DOT__producer__DOT__flush_counter) 
                        - (IData)(1U)));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush
            [2U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush_id
            [2U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush
            [1U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush_id
            [1U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush
            [0U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_2__DOT__flush_id
            [0U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush
            [2U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush_id
            [2U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush
            [1U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush_id
            [1U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush
            [0U];
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id 
            = vlTOPp->top__DOT__pipeline_1__DOT__flush_id
            [0U];
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_valid_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            vlTOPp->top__DOT__producer__DOT__reg_valid_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__producer__DOT__reg_valid_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            vlTOPp->top__DOT__producer__DOT__reg_valid_1 = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            if (vlTOPp->top__DOT__pipeline_2__DOT__valid
                [2U]) {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(9U) + vlTOPp->top__DOT__pipeline_2__DOT__address
                                [2U]));
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_2__DOT__id
                    [2U];
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_2__DOT__flush
             [2U] & (vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                     [2U] == (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            if (vlTOPp->top__DOT__pipeline_2__DOT__valid
                [1U]) {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(6U) + vlTOPp->top__DOT__pipeline_2__DOT__address
                                [1U]));
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_2__DOT__id
                    [1U];
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_2__DOT__flush
             [1U] & (vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                     [1U] == (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_2)))) {
            if (vlTOPp->top__DOT__pipeline_2__DOT__valid
                [0U]) {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(3U) + vlTOPp->top__DOT__pipeline_2__DOT__address
                                [0U]));
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_2__DOT__id
                    [0U];
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_2__DOT__flush
             [0U] & (vlTOPp->top__DOT__pipeline_2__DOT__flush_id
                     [0U] == (IData)(vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            if (vlTOPp->top__DOT__pipeline_1__DOT__valid
                [2U]) {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(9U) + vlTOPp->top__DOT__pipeline_1__DOT__address
                                [2U]));
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_1__DOT__id
                    [2U];
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_1__DOT__flush
             [2U] & (vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                     [2U] == (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            if (vlTOPp->top__DOT__pipeline_1__DOT__valid
                [1U]) {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(6U) + vlTOPp->top__DOT__pipeline_1__DOT__address
                                [1U]));
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_1__DOT__id
                    [1U];
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_1__DOT__flush
             [1U] & (vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                     [1U] == (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
        __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
        vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall_1)))) {
            if (vlTOPp->top__DOT__pipeline_1__DOT__valid
                [0U]) {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address 
                    = (0xffU & ((IData)(3U) + vlTOPp->top__DOT__pipeline_1__DOT__address
                                [0U]));
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
                    = vlTOPp->top__DOT__pipeline_1__DOT__id
                    [0U];
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 1U;
            } else {
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
                __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
                vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
            }
        }
        if ((vlTOPp->top__DOT__pipeline_1__DOT__flush
             [0U] & (vlTOPp->top__DOT__pipeline_1__DOT__flush_id
                     [0U] == (IData)(vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id)))) {
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = 0U;
            __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = 0U;
            vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = 0U;
        }
    }
    vlTOPp->top__DOT__consumer__DOT__valid_reg = ((~ (IData)(vlTOPp->reset)) 
                                                  & (IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_valid));
    if (vlTOPp->reset) {
        __Vdly__top__DOT__arbiter__DOT__reg_choice = 0U;
    } else {
        if (vlTOPp->top__DOT__shared_resource__DOT__reg_ready) {
            if ((vlTOPp->top__DOT__pipeline_1__DOT__valid
                 [3U] & vlTOPp->top__DOT__pipeline_2__DOT__valid
                 [3U])) {
                __Vdly__top__DOT__arbiter__DOT__reg_choice 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)));
            } else {
                if (vlTOPp->top__DOT__pipeline_1__DOT__valid
                    [3U]) {
                    __Vdly__top__DOT__arbiter__DOT__reg_choice = 0U;
                } else {
                    if (vlTOPp->top__DOT__pipeline_2__DOT__valid
                        [3U]) {
                        __Vdly__top__DOT__arbiter__DOT__reg_choice = 1U;
                    }
                }
            }
        } else {
            __Vdly__top__DOT__arbiter__DOT__reg_choice 
                = vlTOPp->top__DOT__arbiter__DOT__reg_choice;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__consumer__DOT__id_reg = 0U;
    } else {
        if (vlTOPp->top__DOT__shared_resource__DOT__reg_valid) {
            vlTOPp->top__DOT__consumer__DOT__id_reg 
                = vlTOPp->top__DOT__shared_resource__DOT__reg_id_external;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->top__DOT__consumer__DOT__data_reg = 0U;
    } else {
        if (vlTOPp->top__DOT__shared_resource__DOT__reg_valid) {
            vlTOPp->top__DOT__consumer__DOT__data_reg 
                = vlTOPp->top__DOT__shared_resource__DOT__reg_data_external;
        }
    }
    vlTOPp->top__DOT__producer__DOT__reg_id_1_old = __Vdly__top__DOT__producer__DOT__reg_id_1_old;
    vlTOPp->top__DOT__producer__DOT__reg_address_1 
        = __Vdly__top__DOT__producer__DOT__reg_address_1;
    vlTOPp->top__DOT__producer__DOT__reg_id_2 = __Vdly__top__DOT__producer__DOT__reg_id_2;
    vlTOPp->top__DOT__producer__DOT__reg_address_2 
        = __Vdly__top__DOT__producer__DOT__reg_address_2;
    vlTOPp->top__DOT__producer__DOT__flush_counter 
        = __Vdly__top__DOT__producer__DOT__flush_counter;
    vlTOPp->top__DOT__producer__DOT__flush_issued = __Vdly__top__DOT__producer__DOT__flush_issued;
    vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id 
        = __Vdly__top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_flush_id_2;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[0U] = vlTOPp->top__DOT__producer__DOT__reg_flush_2;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[0U] = vlTOPp->top__DOT__producer__DOT__reg_flush_1;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_flush_id_1;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[3U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[2U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[1U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[3U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[2U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[1U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
    if (vlTOPp->reset) {
        __Vdly__top__DOT__shared_resource__DOT__reg_data_internal = 0U;
        __Vdly__top__DOT__shared_resource__DOT__reg_id_internal = 0U;
        vlTOPp->top__DOT__shared_resource__DOT__reg_data_external = 0U;
        vlTOPp->top__DOT__shared_resource__DOT__reg_id_external = 0U;
        vlTOPp->top__DOT__shared_resource__DOT__reg_valid = 0U;
        vlTOPp->top__DOT__shared_resource__DOT__reg_ready = 1U;
        __Vdly__top__DOT__shared_resource__DOT__counter = 0U;
        __Vdly__top__DOT__shared_resource__DOT__ready_counter = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->top__DOT__shared_resource__DOT__counter))) {
            if ((vlTOPp->top__DOT__pipeline_1__DOT__valid
                 [3U] | vlTOPp->top__DOT__pipeline_2__DOT__valid
                 [3U])) {
                __Vdly__top__DOT__shared_resource__DOT__reg_data_internal 
                    = ((IData)(0x200U) + ((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                                           ? vlTOPp->top__DOT__pipeline_2__DOT__address
                                          [3U] : vlTOPp->top__DOT__pipeline_1__DOT__address
                                          [3U]));
                __Vdly__top__DOT__shared_resource__DOT__reg_id_internal 
                    = ((IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)
                        ? vlTOPp->top__DOT__pipeline_2__DOT__id
                       [3U] : vlTOPp->top__DOT__pipeline_1__DOT__id
                       [3U]);
                __Vdly__top__DOT__shared_resource__DOT__counter = 1U;
                vlTOPp->top__DOT__shared_resource__DOT__reg_ready = 0U;
            } else {
                __Vdly__top__DOT__shared_resource__DOT__counter = 0U;
            }
            vlTOPp->top__DOT__shared_resource__DOT__reg_valid = 0U;
        } else {
            if ((0xaU > (IData)(vlTOPp->top__DOT__shared_resource__DOT__counter))) {
                __Vdly__top__DOT__shared_resource__DOT__counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__shared_resource__DOT__counter)));
                vlTOPp->top__DOT__shared_resource__DOT__reg_ready = 0U;
                vlTOPp->top__DOT__shared_resource__DOT__reg_valid = 0U;
            } else {
                vlTOPp->top__DOT__shared_resource__DOT__reg_data_external 
                    = vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal;
                vlTOPp->top__DOT__shared_resource__DOT__reg_id_external 
                    = vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal;
                vlTOPp->top__DOT__shared_resource__DOT__reg_ready = 1U;
                vlTOPp->top__DOT__shared_resource__DOT__reg_valid = 1U;
                if ((0xfU > (IData)(vlTOPp->top__DOT__shared_resource__DOT__ready_counter))) {
                    __Vdly__top__DOT__shared_resource__DOT__ready_counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->top__DOT__shared_resource__DOT__ready_counter)));
                } else {
                    __Vdly__top__DOT__shared_resource__DOT__counter = 0U;
                    __Vdly__top__DOT__shared_resource__DOT__ready_counter = 0U;
                }
            }
        }
    }
    vlTOPp->top__DOT__shared_resource__DOT__reg_data_internal 
        = __Vdly__top__DOT__shared_resource__DOT__reg_data_internal;
    vlTOPp->top__DOT__shared_resource__DOT__reg_id_internal 
        = __Vdly__top__DOT__shared_resource__DOT__reg_id_internal;
    vlTOPp->top__DOT__shared_resource__DOT__counter 
        = __Vdly__top__DOT__shared_resource__DOT__counter;
    vlTOPp->top__DOT__shared_resource__DOT__ready_counter 
        = __Vdly__top__DOT__shared_resource__DOT__ready_counter;
    vlTOPp->top__DOT__arbiter__DOT__reg_choice = __Vdly__top__DOT__arbiter__DOT__reg_choice;
    vlTOPp->top__DOT__pipeline_2__DOT__address[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_address_2;
    vlTOPp->top__DOT__pipeline_2__DOT__address[1U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__address[2U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__address[3U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__address[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_address_1;
    vlTOPp->top__DOT__pipeline_1__DOT__address[1U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__address[2U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__address[3U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__id[0U] = vlTOPp->top__DOT__producer__DOT__reg_id_2;
    vlTOPp->top__DOT__pipeline_2__DOT__id[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__id[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__id[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__id[0U] = vlTOPp->top__DOT__producer__DOT__reg_id_1;
    vlTOPp->top__DOT__pipeline_1__DOT__id[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__id[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__id[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[0U] = vlTOPp->top__DOT__producer__DOT__reg_valid_1;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[0U] = vlTOPp->top__DOT__producer__DOT__reg_valid_2;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__stall_1 = (vlTOPp->top__DOT__pipeline_1__DOT__valid
                                 [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                                  & (~ (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)))))
                                  : 0U);
    vlTOPp->top__DOT__stall_2 = (vlTOPp->top__DOT__pipeline_2__DOT__valid
                                 [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                                  & (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice))))
                                  : 0U);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__pipeline_1__DOT__flush[0U] = vlTOPp->top__DOT__producer__DOT__reg_flush_1;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_flush_id_1;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[1U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[2U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__flush_id[3U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_1__DOT__flush[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[0U] = vlTOPp->top__DOT__producer__DOT__reg_flush_2;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_flush_id_2;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[1U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[2U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_2__DOT__flush_id[3U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id;
    vlTOPp->top__DOT__pipeline_2__DOT__flush[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush;
    vlTOPp->top__DOT__pipeline_1__DOT__address[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_address_1;
    vlTOPp->top__DOT__pipeline_1__DOT__id[0U] = vlTOPp->top__DOT__producer__DOT__reg_id_1;
    vlTOPp->top__DOT__pipeline_1__DOT__id[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__address[1U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__id[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__address[2U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__id[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_1__DOT__address[3U] 
        = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__address[0U] 
        = vlTOPp->top__DOT__producer__DOT__reg_address_2;
    vlTOPp->top__DOT__pipeline_2__DOT__id[0U] = vlTOPp->top__DOT__producer__DOT__reg_id_2;
    vlTOPp->top__DOT__pipeline_2__DOT__id[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__address[1U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__id[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__address[2U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_2__DOT__id[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id;
    vlTOPp->top__DOT__pipeline_2__DOT__address[3U] 
        = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[0U] = vlTOPp->top__DOT__producer__DOT__reg_valid_1;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[1U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[2U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_1__DOT__valid[3U] = vlTOPp->top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[0U] = vlTOPp->top__DOT__producer__DOT__reg_valid_2;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[1U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[2U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__pipeline_2__DOT__valid[3U] = vlTOPp->top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid;
    vlTOPp->top__DOT__stall_1 = (vlTOPp->top__DOT__pipeline_1__DOT__valid
                                 [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                                  & (~ (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice)))))
                                  : 0U);
    vlTOPp->top__DOT__stall_2 = (vlTOPp->top__DOT__pipeline_2__DOT__valid
                                 [3U] ? (1U & (~ ((IData)(vlTOPp->top__DOT__shared_resource__DOT__reg_ready) 
                                                  & (IData)(vlTOPp->top__DOT__arbiter__DOT__reg_choice))))
                                  : 0U);
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    top__DOT__stall_1 = VL_RAND_RESET_I(1);
    top__DOT__stall_2 = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_address_1 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__reg_id_1 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__reg_valid_1 = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_address_2 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__reg_id_2 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__reg_valid_2 = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_flush_1 = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_flush_id_1 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__reg_flush_2 = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_flush_id_2 = VL_RAND_RESET_I(8);
    top__DOT__producer__DOT__flush_counter = VL_RAND_RESET_I(6);
    top__DOT__producer__DOT__flush_issued = VL_RAND_RESET_I(1);
    top__DOT__producer__DOT__reg_id_1_old = VL_RAND_RESET_I(8);
    top__DOT__arbiter__DOT__reg_choice = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_1__DOT__address[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_1__DOT__id[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_1__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_1__DOT__flush[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_1__DOT__flush_id[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_1__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_2__DOT__address[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_2__DOT__id[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_2__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_2__DOT__flush[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__pipeline_2__DOT__flush_id[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__0__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__1__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_address = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_id = VL_RAND_RESET_I(8);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush = VL_RAND_RESET_I(1);
    top__DOT__pipeline_2__DOT__PIPELINE__BRA__2__KET____DOT__stage_inst__DOT__reg_flush_id = VL_RAND_RESET_I(8);
    top__DOT__shared_resource__DOT__reg_data_internal = VL_RAND_RESET_I(32);
    top__DOT__shared_resource__DOT__reg_id_internal = VL_RAND_RESET_I(8);
    top__DOT__shared_resource__DOT__reg_data_external = VL_RAND_RESET_I(32);
    top__DOT__shared_resource__DOT__reg_id_external = VL_RAND_RESET_I(8);
    top__DOT__shared_resource__DOT__reg_valid = VL_RAND_RESET_I(1);
    top__DOT__shared_resource__DOT__reg_ready = VL_RAND_RESET_I(1);
    top__DOT__shared_resource__DOT__counter = VL_RAND_RESET_I(4);
    top__DOT__shared_resource__DOT__ready_counter = VL_RAND_RESET_I(4);
    top__DOT__consumer__DOT__data_reg = VL_RAND_RESET_I(32);
    top__DOT__consumer__DOT__id_reg = VL_RAND_RESET_I(8);
    top__DOT__consumer__DOT__valid_reg = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
