// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSPIAdapterRTL__6nbits__1num_entries__Syms.h"
#include "VSPIAdapterRTL__6nbits__1num_entries.h"



// FUNCTIONS
VSPIAdapterRTL__6nbits__1num_entries__Syms::VSPIAdapterRTL__6nbits__1num_entries__Syms(VSPIAdapterRTL__6nbits__1num_entries* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
