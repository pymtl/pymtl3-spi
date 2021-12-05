// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPIPUSHPULL2VALRDYADAPTER__NBITS_4__NUM_ENTRIES_2__SYMS_H_
#define _VSPIPUSHPULL2VALRDYADAPTER__NBITS_4__NUM_ENTRIES_2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2.h"
#include "VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2___024unit.h"

// SYMS CLASS
class VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* TOPp;
    
    // CREATORS
    VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms(VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2* topp, const char* namep);
    ~VSPIPushPull2ValRdyAdapter__nbits_4__num_entries_2__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
