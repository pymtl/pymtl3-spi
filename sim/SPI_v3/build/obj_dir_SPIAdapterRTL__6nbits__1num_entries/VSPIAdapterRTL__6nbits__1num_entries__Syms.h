// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPIADAPTERRTL__6NBITS__1NUM_ENTRIES__SYMS_H_
#define _VSPIADAPTERRTL__6NBITS__1NUM_ENTRIES__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSPIAdapterRTL__6nbits__1num_entries.h"

// SYMS CLASS
class VSPIAdapterRTL__6nbits__1num_entries__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSPIAdapterRTL__6nbits__1num_entries* TOPp;
    
    // CREATORS
    VSPIAdapterRTL__6nbits__1num_entries__Syms(VSPIAdapterRTL__6nbits__1num_entries* topp, const char* namep);
    ~VSPIAdapterRTL__6nbits__1num_entries__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
