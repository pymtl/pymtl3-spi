// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPIQUEUE__PACK_SIZE_128__NUM_ENTRIES_4__SYMS_H_
#define _VSPIQUEUE__PACK_SIZE_128__NUM_ENTRIES_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSPIQueue__pack_size_128__num_entries_4.h"

// SYMS CLASS
class VSPIQueue__pack_size_128__num_entries_4__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSPIQueue__pack_size_128__num_entries_4* TOPp;
    
    // CREATORS
    VSPIQueue__pack_size_128__num_entries_4__Syms(VSPIQueue__pack_size_128__num_entries_4* topp, const char* namep);
    ~VSPIQueue__pack_size_128__num_entries_4__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
