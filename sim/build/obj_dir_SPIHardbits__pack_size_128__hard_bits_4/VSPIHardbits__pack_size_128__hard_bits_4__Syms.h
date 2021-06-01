// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSPIHARDBITS__PACK_SIZE_128__HARD_BITS_4__SYMS_H_
#define _VSPIHARDBITS__PACK_SIZE_128__HARD_BITS_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSPIHardbits__pack_size_128__hard_bits_4.h"

// SYMS CLASS
class VSPIHardbits__pack_size_128__hard_bits_4__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSPIHardbits__pack_size_128__hard_bits_4* TOPp;
    
    // CREATORS
    VSPIHardbits__pack_size_128__hard_bits_4__Syms(VSPIHardbits__pack_size_128__hard_bits_4* topp, const char* namep);
    ~VSPIHardbits__pack_size_128__hard_bits_4__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
