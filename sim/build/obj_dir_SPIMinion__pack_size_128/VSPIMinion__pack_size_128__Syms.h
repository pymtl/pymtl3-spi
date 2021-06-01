// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPIMINION__PACK_SIZE_128__SYMS_H_
#define _VSPIMINION__PACK_SIZE_128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSPIMinion__pack_size_128.h"

// SYMS CLASS
class VSPIMinion__pack_size_128__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSPIMinion__pack_size_128*     TOPp;
    
    // CREATORS
    VSPIMinion__pack_size_128__Syms(VSPIMinion__pack_size_128* topp, const char* namep);
    ~VSPIMinion__pack_size_128__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
