'''
==========================================================================
LooparoundPRTL.py
==========================================================================
This module is meant to mux around the Router and Arbitrator. We do this as
part of an incremental testing approach, as we will test the SPI return path
before adding the router and arbitrator. This module has an input select bit
that either connects the input and output to another component(i.e. the Router and Arbitrator) or 
connects the input back to the output (effectively a Loopback).

Author: Dilan Lakhani
    February 25, 2022

'''

from pymtl3 import *
from pymtl3.stdlib.stream.ifcs import MinionIfcRTL


class LoopAround( Component ):
    
    def construct( s, nbits=32):
        # Local Parameters
        s.nbits = nbits

        # Ports

        s.sel = InPort() # select bit, if 1 then loopback, if 0 pass through

        # BRGTC5 Specific Info
        # Chip_In MinionIfc:
        # s.chip_in.req is the input from the send queue of the SPI Minion Composite
        # s.chip_in.resp is the output from this module to the Router (this is unconnected if in loopback mode)
        # s.chip_out.req is the input from the Arbitrator to this module (this is unconnected if in loopback mode)
        # s.chip_out.resp is the output from this module to the recv queue of the SPI Minion Composite
        #     This is connected to either the loopback (s.chip_in.req) or the Arbitrator output (s.chip_out.req)
        
        s.chip_in  = MinionIfcRTL( mk_bits(s.nbits), mk_bits(s.nbits) ) 
        s.chip_out = MinionIfcRTL( mk_bits(s.nbits), mk_bits(s.nbits) )

        @update
        def up_comb():
            if s.sel: # Loopback Mode
                # chip out response
                s.chip_out.resp.val @= s.chip_in.req.val
                s.chip_out.resp.msg @= s.chip_in.req.msg
                s.chip_in.req.rdy   @= s.chip_out.resp.rdy
                # tell the arbitrator we are not ready
                s.chip_out.req.rdy @= 0 # tells the arbitrator we are not ready
                # set valid bit to 0 if not connecting to router 
                s.chip_in.resp.val @= 0                

            else: # Chip Mode, connect to Router and Arbitrator
                # chip out 
                s.chip_out.resp.val @= s.chip_out.req.val
                s.chip_out.resp.msg @= s.chip_out.req.msg
                s.chip_out.req.rdy  @= s.chip_out.resp.rdy
                # chip in
                s.chip_in.resp.val  @= s.chip_in.req.val
                s.chip_in.resp.msg  @= s.chip_in.req.msg
                s.chip_in.req.rdy   @= s.chip_in.resp.rdy
        
    def line_trace( s ):
        return f"chip_out.resp.val {s.chip_out.resp.val} chip_out.resp.rdy {s.chip_out.resp.rdy} chip_out.resp.msg {s.chip_out.resp.msg}"