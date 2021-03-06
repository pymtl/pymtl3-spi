
/* ============= HardFloat_consts ================== */

`define round_near_even   3'b000
`define round_minMag      3'b001
`define round_min         3'b010
`define round_max         3'b011
`define round_near_maxMag 3'b100
`define round_odd         3'b110


`define floatControlWidth 1
`define flControl_tininessBeforeRounding 1'b0
`define flControl_tininessAfterRounding  1'b1

`define flRoundOpt_sigMSBitAlwaysZero  1
`define flRoundOpt_subnormsAlwaysExact 2
`define flRoundOpt_neverUnderflows     4
`define flRoundOpt_neverOverflows      8

/* ============= HardFloat_consts ================== */


/* ============= RISCV/HardFloat_specialize.vi ================== */

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
`define flControl_default `flControl_tininessAfterRounding

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
//`define HardFloat_propagateNaNPayloads

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
`define HardFloat_signDefaultNaN 0
`define HardFloat_fractDefaultNaN(sigWidth) {1'b1, {((sigWidth) - 2){1'b0}}}

/* ============= RISCV/HardFloat_specialize.vi ================== */

/* ============= HardFloat_rawFN ================== */

module
    recFNToRawFN#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(expWidth + sigWidth):0] in,
        output isNaN,
        output isInf,
        output isZero,
        output sign,
        output signed [(expWidth + 1):0] sExp,
        output [sigWidth:0] sig
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire [expWidth:0] exp;
    wire [(sigWidth - 2):0] fract;
    assign {sign, exp, fract} = in;
    wire isSpecial = (exp>>(expWidth - 1) == 'b11);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    assign isNaN = isSpecial &&  exp[expWidth - 2];
    assign isInf = isSpecial && !exp[expWidth - 2];
    assign isZero = (exp>>(expWidth - 2) == 'b000);
    assign sExp = exp;
    assign sig = {1'b0, !isZero, fract};

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    roundAnyRawFNToRecFN#(
        parameter inExpWidth = 8,
        parameter inSigWidth = 26,
        parameter outExpWidth = 8,
        parameter outSigWidth = 24,
        parameter options = 2
    ) (
        input [(`floatControlWidth - 1):0] control,
        input invalidExc,     // overrides 'infiniteExc' and 'in_*' inputs
        input infiniteExc,    // overrides 'in_*' inputs except 'in_sign'
        input in_isNaN,
        input in_isInf,
        input in_isZero,
        input in_sign,
        input signed [(inExpWidth + 1):0] in_sExp,   // limited range allowed
        input [inSigWidth:0] in_sig,
        input [2:0] roundingMode,
        output [(outExpWidth + outSigWidth):0] out,
        output [4:0] exceptionFlags
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam sigMSBitAlwaysZero =
        ((options & `flRoundOpt_sigMSBitAlwaysZero) != 0);
    localparam effectiveInSigWidth =
        sigMSBitAlwaysZero ? inSigWidth : inSigWidth + 1;
    localparam neverUnderflows =
        ((options
              & (`flRoundOpt_neverUnderflows
                     | `flRoundOpt_subnormsAlwaysExact))
             != 0)
            || (inExpWidth < outExpWidth);
    localparam neverOverflows =
        ((options & `flRoundOpt_neverOverflows) != 0)
            || (inExpWidth < outExpWidth);
    localparam adjustedExpWidth =
          (inExpWidth < outExpWidth) ? outExpWidth + 1
        : (inExpWidth == outExpWidth) ? inExpWidth + 2
        : inExpWidth + 3;
    localparam outNaNExp = 7<<(outExpWidth - 2);
    localparam outInfExp = 6<<(outExpWidth - 2);
    localparam outMaxFiniteExp = outInfExp - 1;
    localparam outMinNormExp = (1<<(outExpWidth - 1)) + 2;
    localparam outMinNonzeroExp = outMinNormExp - outSigWidth + 1;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire roundingMode_near_even   = (roundingMode == `round_near_even);
    wire roundingMode_minMag      = (roundingMode == `round_minMag);
    wire roundingMode_min         = (roundingMode == `round_min);
    wire roundingMode_max         = (roundingMode == `round_max);
    wire roundingMode_near_maxMag = (roundingMode == `round_near_maxMag);
    wire roundingMode_odd         = (roundingMode == `round_odd);
    wire roundMagUp =
        (roundingMode_min && in_sign) || (roundingMode_max && !in_sign);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire isNaNOut = invalidExc || (!infiniteExc && in_isNaN);
`ifdef HardFloat_propagateNaNPayloads
    wire propagateNaNPayload = isNaNOut;
`else
    wire propagateNaNPayload = 0;
`endif
    wire signed [(adjustedExpWidth - 1):0] sAdjustedExp =
        in_sExp + ((1<<outExpWidth) - (1<<inExpWidth));
    wire [(outSigWidth + 2):0] adjustedSig;
    generate
        if (inSigWidth <= outSigWidth + 2) begin
            assign adjustedSig = in_sig<<(outSigWidth - inSigWidth + 2);
        end else begin
            assign adjustedSig =
                {in_sig[inSigWidth:(inSigWidth - outSigWidth - 1)],
                 |in_sig[(inSigWidth - outSigWidth - 2):0]};
        end
    endgenerate
    wire doShiftSigDown1 =
        sigMSBitAlwaysZero ? 0 : adjustedSig[outSigWidth + 2];
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire [outExpWidth:0] common_expOut;
    wire [(outSigWidth - 2):0] common_fractOut;
    wire common_overflow, common_totalUnderflow, common_underflow;
    wire common_inexact;
    generate
        if (
            neverOverflows && neverUnderflows
                && (effectiveInSigWidth <= outSigWidth)
        ) begin
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            assign common_expOut = sAdjustedExp + doShiftSigDown1;
            assign common_fractOut =
                doShiftSigDown1 ? adjustedSig>>3 : adjustedSig>>2;
            assign common_overflow       = 0;
            assign common_totalUnderflow = 0;
            assign common_underflow      = 0;
            assign common_inexact        = 0;
        end else begin
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            wire [(outSigWidth + 2):0] roundMask;
            if (neverUnderflows) begin
                assign roundMask = {doShiftSigDown1, 2'b11};
            end else begin
                wire [outSigWidth:0] roundMask_main;
                lowMaskLoHi#(
                    outExpWidth + 1,
                    outMinNormExp - outSigWidth - 1,
                    outMinNormExp
                ) lowMask_roundMask(
                        sAdjustedExp[outExpWidth:0]
                            | (propagateNaNPayload ? 1'b1<<outExpWidth : 1'b0),
                        roundMask_main
                    );
                assign roundMask = {roundMask_main | doShiftSigDown1, 2'b11};
            end
            wire [(outSigWidth + 2):0] shiftedRoundMask = roundMask>>1;
            wire [(outSigWidth + 2):0] roundPosMask =
                ~shiftedRoundMask & roundMask;
            wire roundPosBit =
                (|(adjustedSig[(outSigWidth + 2):3]
                       & roundPosMask[(outSigWidth + 2):3]))
                    || ((|(adjustedSig[2:0] & roundPosMask[2:0]))
                            && !propagateNaNPayload);
            wire anyRoundExtra =
                (|(adjustedSig[(outSigWidth + 2):3]
                       & shiftedRoundMask[(outSigWidth + 2):3]))
                    || ((|(adjustedSig[2:0] & shiftedRoundMask[2:0]))
                            && !propagateNaNPayload);
            wire anyRound = roundPosBit || anyRoundExtra;
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            wire roundIncr =
                ((roundingMode_near_even || roundingMode_near_maxMag)
                     && roundPosBit)
                    || (roundMagUp && anyRound);
            wire [(outSigWidth + 1):0] roundedSig =
                roundIncr
                    ? (((adjustedSig | roundMask)>>2) + 1)
                          & ~(roundingMode_near_even && roundPosBit
                                  && !anyRoundExtra
                                  ? roundMask>>1 : 0)
                    : (adjustedSig & ~roundMask)>>2
                          | (roundingMode_odd && anyRound
                                 ? roundPosMask>>1 : 0);
            wire signed [adjustedExpWidth:0] sExtAdjustedExp = sAdjustedExp;
            wire signed [adjustedExpWidth:0] sRoundedExp =
                sExtAdjustedExp + (roundedSig>>outSigWidth);
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            assign common_expOut = sRoundedExp;
            assign common_fractOut =
                doShiftSigDown1 ? roundedSig>>1 : roundedSig;
            assign common_overflow =
                neverOverflows ? 0 : (sRoundedExp>>>(outExpWidth - 1) >= 3);
            assign common_totalUnderflow =
                neverUnderflows ? 0 : (sRoundedExp < outMinNonzeroExp);
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            wire unboundedRange_roundPosBit =
                doShiftSigDown1 ? adjustedSig[2] : adjustedSig[1];
            wire unboundedRange_anyRound =
                (doShiftSigDown1 && adjustedSig[2]) || (|adjustedSig[1:0]);
            wire unboundedRange_roundIncr =
                ((roundingMode_near_even || roundingMode_near_maxMag)
                     && unboundedRange_roundPosBit)
                    || (roundMagUp && unboundedRange_anyRound);
            wire roundCarry =
                doShiftSigDown1
                    ? roundedSig[outSigWidth + 1] : roundedSig[outSigWidth];
            assign common_underflow =
                neverUnderflows ? 0
                    : common_totalUnderflow
                          || (anyRound && (sAdjustedExp>>>outExpWidth <= 0)
                                  && (doShiftSigDown1
                                          ? roundMask[3] : roundMask[2])
                                  && !(((control
                                           & `flControl_tininessAfterRounding)
                                            != 0)
                                           && !(doShiftSigDown1 ? roundMask[4]
                                                    : roundMask[3])
                                           && roundCarry && roundPosBit
                                           && unboundedRange_roundIncr));
            /*----------------------------------------------------------------
            *----------------------------------------------------------------*/
            assign common_inexact = common_totalUnderflow || anyRound;
        end
    endgenerate
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire notNaN_isSpecialInfOut = infiniteExc || in_isInf;
    wire commonCase = !isNaNOut && !notNaN_isSpecialInfOut && !in_isZero;
    wire overflow  = commonCase && common_overflow;
    wire underflow = commonCase && common_underflow;
    wire inexact = overflow || (commonCase && common_inexact);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire overflow_roundMagUp =
        roundingMode_near_even || roundingMode_near_maxMag || roundMagUp;
    wire pegMinNonzeroMagOut =
        commonCase && common_totalUnderflow
            && (roundMagUp || roundingMode_odd);
    wire pegMaxFiniteMagOut = overflow && !overflow_roundMagUp;
    wire notNaN_isInfOut =
        notNaN_isSpecialInfOut || (overflow && overflow_roundMagUp);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
`ifdef HardFloat_propagateNaNPayloads
    wire signOut = in_sign;
`else
    wire signOut = isNaNOut ? `HardFloat_signDefaultNaN : in_sign;
`endif
    wire [outExpWidth:0] expOut =
        (common_expOut
             & ~(in_isZero || common_totalUnderflow ? 7<<(outExpWidth - 2) : 0)
             & ~(pegMinNonzeroMagOut               ? ~outMinNonzeroExp    : 0)
             & ~(pegMaxFiniteMagOut                ? 1<<(outExpWidth - 1) : 0)
             & ~(notNaN_isInfOut                   ? 1<<(outExpWidth - 2) : 0))
            | (pegMinNonzeroMagOut ? outMinNonzeroExp : 0)
            | (pegMaxFiniteMagOut  ? outMaxFiniteExp  : 0)
            | (notNaN_isInfOut     ? outInfExp        : 0)
            | (isNaNOut            ? outNaNExp        : 0);
`ifdef HardFloat_propagateNaNPayloads
    wire [(outSigWidth - 2):0] fractOut =
        {isNaNOut
             || (!in_isZero && !common_totalUnderflow
                     && common_fractOut[outSigWidth - 2]),
         isNaNOut || (!in_isZero && !common_totalUnderflow)
             ? common_fractOut[(outSigWidth - 3):0] : 1'b0}
            | {(outSigWidth - 1){pegMaxFiniteMagOut}};
`else
    wire [(outSigWidth - 2):0] fractOut =
          (isNaNOut ? `HardFloat_fractDefaultNaN(outSigWidth) : 0)
        | (!in_isZero && !common_totalUnderflow
               ? common_fractOut & `HardFloat_fractDefaultNaN(outSigWidth) : 0)
        | (!isNaNOut && !in_isZero && !common_totalUnderflow
               ? common_fractOut & ~`HardFloat_fractDefaultNaN(outSigWidth)
               : 0)
        | {(outSigWidth - 1){pegMaxFiniteMagOut}};
`endif
    assign out = {signOut, expOut, fractOut};
    assign exceptionFlags =
        {invalidExc, infiniteExc, overflow, underflow, inexact};

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    roundRawFNToRecFN#(
        parameter expWidth = 8,
        parameter sigWidth = 24,
        parameter options = 2
    ) (
        input [(`floatControlWidth - 1):0] control,
        input invalidExc,     // overrides 'infiniteExc' and 'in_*' inputs
        input infiniteExc,    // overrides 'in_*' inputs except 'in_sign'
        input in_isNaN,
        input in_isInf,
        input in_isZero,
        input in_sign,
        input signed [(expWidth + 1):0] in_sExp,   // limited range allowed
        input [(sigWidth + 2):0] in_sig,
        input [2:0] roundingMode,
        output [(expWidth + sigWidth):0] out,
        output [4:0] exceptionFlags
    );

    roundAnyRawFNToRecFN#(expWidth, sigWidth + 2, expWidth, sigWidth, options)
        roundAnyRawFNToRecFN(
            control,
            invalidExc,
            infiniteExc,
            in_isNaN,
            in_isInf,
            in_isZero,
            in_sign,
            in_sExp,
            in_sig,
            roundingMode,
            out,
            exceptionFlags
        );

endmodule

/* ============= HardFloat_rawFN ================== */


/* ============= isSigNaNRecFN ================== */

module
    isSigNaNRecFN#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(expWidth + sigWidth):0] in, output isSigNaN
    );

    wire isNaN =
        (in[(expWidth + sigWidth - 1):(expWidth + sigWidth - 3)] == 'b111);
    assign isSigNaN = isNaN && !in[sigWidth - 2];

endmodule

/* ============= isSigNaNRecFN ================== */


/* ============= HardFloat_primitives ================== */

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    reverse#(parameter width = 13) (
        input [(width - 1):0] in, output [(width - 1):0] out
    );

    genvar ix;
    generate
        for (ix = 0; ix < width; ix = ix + 1) begin :Bit
            assign out[ix] = in[width - 1 - ix];
        end
    endgenerate

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    lowMaskHiLo#(
        parameter inWidth = 3,
        parameter topBound = 7,
        parameter bottomBound = 0
    ) (
        input [(inWidth - 1):0] in,
        output [(topBound - bottomBound - 1):0] out
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam numInVals = 1<<inWidth;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire signed [numInVals:0] c;
    assign c[numInVals] = 1;
    assign c[(numInVals - 1):0] = 0;
    wire [(topBound - bottomBound - 1):0] reverseOut =
        (c>>>in)>>(numInVals - topBound);
    reverse#(topBound - bottomBound) reverse(reverseOut, out);

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    lowMaskLoHi#(
        parameter inWidth = 9,
        parameter topBound = 5,
        parameter bottomBound = 30
    ) (
        input [(inWidth - 1):0] in,
        output [(bottomBound - topBound - 1):0] out
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam numInVals = 1<<inWidth;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire signed [numInVals:0] c;
    assign c[numInVals] = 1;
    assign c[(numInVals - 1):0] = 0;
    wire [(bottomBound - topBound - 1):0] reverseOut =
        (c>>>~in)>>(topBound + 1);
    reverse#(bottomBound - topBound) reverse(reverseOut, out);

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    countLeadingZeros#(parameter inWidth = 13, parameter countWidth = 5) (
        input [(inWidth - 1):0] in, output [(countWidth - 1):0] count
    );

    wire [(inWidth - 1):0] reverseIn;
    reverse#(inWidth) reverse_in(in, reverseIn);
    wire [inWidth:0] oneLeastReverseIn =
        {1'b1, reverseIn} & ({1'b0, ~reverseIn} + 1);
    genvar ix;
    generate
        for (ix = 0; ix <= inWidth; ix = ix + 1) begin :Bit
            wire [(countWidth - 1):0] countSoFar;
            if (ix == 0) begin
                assign countSoFar = 0;
            end else begin
                assign countSoFar =
                    Bit[ix - 1].countSoFar | (oneLeastReverseIn[ix] ? ix : 0);
                if (ix == inWidth) assign count = countSoFar;
            end
        end
    endgenerate

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    compressBy2#(parameter inWidth = 26) (
        input [(inWidth - 1):0] in, output [((inWidth - 1)/2):0] out
    );

    localparam maxBitNumReduced = (inWidth - 1)/2;
    genvar ix;
    generate
        for (ix = 0; ix < maxBitNumReduced; ix = ix + 1) begin :Bit
            assign out[ix] = |in[(ix*2 + 1):ix*2];
        end
    endgenerate
    assign out[maxBitNumReduced] = |in[(inWidth - 1):maxBitNumReduced*2];

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    compressBy4#(parameter inWidth = 26) (
        input [(inWidth - 1):0] in, output [(inWidth - 1)/4:0] out
    );

    localparam maxBitNumReduced = (inWidth - 1)/4;
    genvar ix;
    generate
        for (ix = 0; ix < maxBitNumReduced; ix = ix + 1) begin :Bit
            assign out[ix] = |in[(ix*4 + 3):ix*4];
        end
    endgenerate
    assign out[maxBitNumReduced] = |in[(inWidth - 1):maxBitNumReduced*4];

endmodule

/* ============= HardFloat_primitives ================== */

/* ============= mulAddRecFN ================== */

module
    mulAddRecFNToRaw_preMul#(
        parameter expWidth = 8, parameter sigWidth = 24
    ) (
        control,
        op,
        a,
        b,
        c,
        roundingMode,
        mulAddA,
        mulAddB,
        mulAddC,
        intermed_compactState,
        intermed_sExp,
        intermed_CDom_CAlignDist,
        intermed_highAlignedSigC
    );
    input [(`floatControlWidth - 1):0] control;
    input [1:0] op;
    input [(expWidth + sigWidth):0] a;
    input [(expWidth + sigWidth):0] b;
    input [(expWidth + sigWidth):0] c;
    input [2:0] roundingMode;
    output [(sigWidth - 1):0] mulAddA;
    output [(sigWidth - 1):0] mulAddB;
    output [(sigWidth*2 - 1):0] mulAddC;
    output [5:0] intermed_compactState;
    output signed [(expWidth + 1):0] intermed_sExp;
    output [($clog2(sigWidth + 1) - 1):0] intermed_CDom_CAlignDist;
    output [(sigWidth + 1):0] intermed_highAlignedSigC;

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam prodWidth = sigWidth*2;
    localparam sigSumWidth = sigWidth + prodWidth + 3;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire isNaNA, isInfA, isZeroA, signA;
    wire signed [(expWidth + 1):0] sExpA;
    wire [sigWidth:0] sigA;
    recFNToRawFN#(expWidth, sigWidth)
        recFNToRawFN_a(a, isNaNA, isInfA, isZeroA, signA, sExpA, sigA);
    wire isSigNaNA;
    isSigNaNRecFN#(expWidth, sigWidth) isSigNaN_a(a, isSigNaNA);
    wire isNaNB, isInfB, isZeroB, signB;
    wire signed [(expWidth + 1):0] sExpB;
    wire [sigWidth:0] sigB;
    recFNToRawFN#(expWidth, sigWidth)
        recFNToRawFN_b(b, isNaNB, isInfB, isZeroB, signB, sExpB, sigB);
    wire isSigNaNB;
    isSigNaNRecFN#(expWidth, sigWidth) isSigNaN_b(b, isSigNaNB);
    wire isNaNC, isInfC, isZeroC, signC;
    wire signed [(expWidth + 1):0] sExpC;
    wire [sigWidth:0] sigC;
    recFNToRawFN#(expWidth, sigWidth)
        recFNToRawFN_c(c, isNaNC, isInfC, isZeroC, signC, sExpC, sigC);
    wire isSigNaNC;
    isSigNaNRecFN#(expWidth, sigWidth) isSigNaN_c(c, isSigNaNC);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire signProd = signA ^ signB ^ op[1];
    wire signed [(expWidth + 2):0] sExpAlignedProd =
        sExpA + sExpB + (-(1<<expWidth) + sigWidth + 3);
    wire doSubMags = signProd ^ signC ^ op[0];
    wire opSignC = signProd ^ doSubMags;
    wire roundingMode_min = (roundingMode == `round_min);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire signed [(expWidth + 2):0] sNatCAlignDist = sExpAlignedProd - sExpC;
    wire [(expWidth + 1):0] posNatCAlignDist =
        sNatCAlignDist[(expWidth + 1):0];
    wire isMinCAlign = isZeroA || isZeroB || (sNatCAlignDist < 0);
    wire CIsDominant =
        !isZeroC && (isMinCAlign || (posNatCAlignDist <= sigWidth));
    wire signed [(expWidth + 1):0] sExpSum =
        CIsDominant ? sExpC : sExpAlignedProd - sigWidth;
    wire [($clog2(sigSumWidth) - 1):0] CAlignDist =
        isMinCAlign ? 0
            : (posNatCAlignDist < sigSumWidth - 1)
                  ? posNatCAlignDist[($clog2(sigSumWidth) - 1):0]
                  : sigSumWidth - 1;
    wire signed [(sigSumWidth + 2):0] extComplSigC =
        {doSubMags ? ~sigC : sigC, {(sigSumWidth - sigWidth + 2){doSubMags}}};
    wire [(sigSumWidth + 1):0] mainAlignedSigC = extComplSigC>>>CAlignDist;
    localparam CGrainAlign = (sigSumWidth - sigWidth - 1) & 3;
    wire [(sigWidth + CGrainAlign):0] grainAlignedSigC = sigC<<CGrainAlign;
    wire [(sigWidth + CGrainAlign)/4:0] reduced4SigC;
    compressBy4#(sigWidth + 1 + CGrainAlign)
        compressBy4_sigC(grainAlignedSigC, reduced4SigC);
    localparam CExtraMaskHiBound = (sigSumWidth - 1)/4;
    localparam CExtraMaskLoBound = (sigSumWidth - sigWidth - 1)/4;
    wire [(CExtraMaskHiBound - CExtraMaskLoBound - 1):0] CExtraMask;
    lowMaskHiLo#($clog2(sigSumWidth) - 2, CExtraMaskHiBound, CExtraMaskLoBound)
        lowMask_CExtraMask(CAlignDist[($clog2(sigSumWidth) - 1):2], CExtraMask);
    wire reduced4CExtra = |(reduced4SigC & CExtraMask);
    wire [(sigSumWidth - 1):0] alignedSigC =
        {mainAlignedSigC>>3,
         doSubMags ? (&mainAlignedSigC[2:0]) && !reduced4CExtra
             : (|mainAlignedSigC[2:0]) || reduced4CExtra};
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire isNaNAOrB = isNaNA || isNaNB;
    wire isNaNAny = isNaNAOrB || isNaNC;
    wire isInfAOrB = isInfA || isInfB;
    wire invalidProd = (isInfA && isZeroB) || (isZeroA && isInfB);
    wire notSigNaN_invalidExc =
        invalidProd || (!isNaNAOrB && isInfAOrB && isInfC && doSubMags);
    wire invalidExc =
        isSigNaNA || isSigNaNB || isSigNaNC || notSigNaN_invalidExc;
    wire notNaN_addZeros = (isZeroA || isZeroB) && isZeroC;
    wire specialCase = isNaNAny || isInfAOrB || isInfC || notNaN_addZeros;
    wire specialNotNaN_signOut =
        (isInfAOrB && signProd) || (isInfC && opSignC)
            || (notNaN_addZeros && !roundingMode_min && signProd && opSignC)
            || (notNaN_addZeros && roundingMode_min && (signProd || opSignC));
`ifdef HardFloat_propagateNaNPayloads
    wire signNaN;
    wire [(sigWidth - 2):0] fractNaN;
    propagateFloatNaN_mulAdd#(sigWidth)
        propagateNaN(
            control,
            op,
            isNaNA,
            signA,
            sigA[(sigWidth - 2):0],
            isNaNB,
            signB,
            sigB[(sigWidth - 2):0],
            invalidProd,
            isNaNC,
            signC,
            sigC[(sigWidth - 2):0],
            signNaN,
            fractNaN
        );
    wire isNaNOut = isNaNAny || notSigNaN_invalidExc;
    wire special_signOut =
        isNaNAny || notSigNaN_invalidExc ? signNaN : specialNotNaN_signOut;
`else
    wire special_signOut = specialNotNaN_signOut;
`endif
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    assign mulAddA = sigA;
    assign mulAddB = sigB;
    assign mulAddC = alignedSigC[prodWidth:1];
    assign intermed_compactState =
        {specialCase,
         invalidExc          || (!specialCase && signProd      ),
`ifdef HardFloat_propagateNaNPayloads
         isNaNOut            || (!specialCase && doSubMags     ),
`else
         isNaNAny            || (!specialCase && doSubMags     ),
`endif
         isInfAOrB || isInfC || (!specialCase && CIsDominant   ),
         notNaN_addZeros     || (!specialCase && alignedSigC[0]),
         special_signOut};
    assign intermed_sExp = sExpSum;
    assign intermed_CDom_CAlignDist = CAlignDist[($clog2(sigWidth + 1) - 1):0];
    assign intermed_highAlignedSigC =
`ifdef HardFloat_propagateNaNPayloads
         isNaNOut ? fractNaN :
`endif
          alignedSigC[(sigSumWidth - 1):(prodWidth + 1)];

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    mulAddRecFNToRaw_postMul#(parameter expWidth = 8, parameter sigWidth = 24) (
        intermed_compactState,
        intermed_sExp,
        intermed_CDom_CAlignDist,
        intermed_highAlignedSigC,
        mulAddResult,
        roundingMode,
        invalidExc,
        out_isNaN,
        out_isInf,
        out_isZero,
        out_sign,
        out_sExp,
        out_sig
    );
    input [5:0] intermed_compactState;
    input signed [(expWidth + 1):0] intermed_sExp;
    input [($clog2(sigWidth + 1) - 1):0] intermed_CDom_CAlignDist;
    input [(sigWidth + 1):0] intermed_highAlignedSigC;
    input [sigWidth*2:0] mulAddResult;
    input [2:0] roundingMode;
    output invalidExc;
    output out_isNaN;
    output out_isInf;
    output out_isZero;
    output out_sign;
    output signed [(expWidth + 1):0] out_sExp;
    output [(sigWidth + 2):0] out_sig;

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam prodWidth = sigWidth*2;
    localparam sigSumWidth = sigWidth + prodWidth + 3;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire specialCase     = intermed_compactState[5];
    assign invalidExc    = specialCase && intermed_compactState[4];
    assign out_isNaN     = specialCase && intermed_compactState[3];
    assign out_isInf     = specialCase && intermed_compactState[2];
    wire notNaN_addZeros = specialCase && intermed_compactState[1];
    wire signProd        = intermed_compactState[4];
    wire doSubMags       = intermed_compactState[3];
    wire CIsDominant     = intermed_compactState[2];
    wire bit0AlignedSigC = intermed_compactState[1];
    wire special_signOut = intermed_compactState[0];
`ifdef HardFloat_propagateNaNPayloads
    wire [(sigWidth - 2):0] fractNaN = intermed_highAlignedSigC;
`endif
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire opSignC = signProd ^ doSubMags;
    wire [(sigWidth + 1):0] incHighAlignedSigC = intermed_highAlignedSigC + 1;
    wire [(sigSumWidth - 1):0] sigSum =
        {mulAddResult[prodWidth] ? incHighAlignedSigC
             : intermed_highAlignedSigC,
         mulAddResult[(prodWidth - 1):0],
         bit0AlignedSigC};
    wire roundingMode_min = (roundingMode == `round_min);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire CDom_sign = opSignC;
    wire signed [(expWidth + 1):0] CDom_sExp = intermed_sExp - doSubMags;
    wire [(sigWidth*2 + 1):0] CDom_absSigSum =
        doSubMags ? ~sigSum[(sigSumWidth - 1):(sigWidth + 1)]
            : {1'b0, intermed_highAlignedSigC[(sigWidth + 1):sigWidth],
                   sigSum[(sigSumWidth - 3):(sigWidth + 2)]};
    wire CDom_absSigSumExtra =
        doSubMags ? !(&sigSum[sigWidth:1]) : |sigSum[(sigWidth + 1):1];
    wire [(sigWidth + 4):0] CDom_mainSig =
        (CDom_absSigSum<<intermed_CDom_CAlignDist)>>(sigWidth - 3);
    wire [((sigWidth | 3) - 1):0] CDom_grainAlignedLowSig =
        CDom_absSigSum[(sigWidth - 1):0]<<(~sigWidth & 3);
    wire [sigWidth/4:0] CDom_reduced4LowSig;
    compressBy4#(sigWidth | 3)
        compressBy4_CDom_absSigSum(
            CDom_grainAlignedLowSig, CDom_reduced4LowSig);
    wire [(sigWidth/4 - 1):0] CDom_sigExtraMask;
    lowMaskLoHi#($clog2(sigWidth + 1) - 2, 0, sigWidth/4)
        lowMask_CDom_sigExtraMask(
            intermed_CDom_CAlignDist[($clog2(sigWidth + 1) - 1):2],
            CDom_sigExtraMask
        );
    wire CDom_reduced4SigExtra = |(CDom_reduced4LowSig & CDom_sigExtraMask);
    wire [(sigWidth + 2):0] CDom_sig =
        {CDom_mainSig>>3,
         (|CDom_mainSig[2:0]) || CDom_reduced4SigExtra || CDom_absSigSumExtra};
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire notCDom_signSigSum = sigSum[prodWidth + 3];
    wire [(prodWidth + 2):0] notCDom_absSigSum =
        notCDom_signSigSum ? ~sigSum[(prodWidth + 2):0]
            : sigSum[(prodWidth + 2):0] + doSubMags;
    wire [(prodWidth + 2)/2:0] notCDom_reduced2AbsSigSum;
    compressBy2#(prodWidth + 3)
        compressBy2_notCDom_absSigSum(
            notCDom_absSigSum, notCDom_reduced2AbsSigSum);
    wire [($clog2(prodWidth + 4) - 2):0] notCDom_normDistReduced2;
    countLeadingZeros#((prodWidth + 2)/2 + 1, $clog2(prodWidth + 4) - 1)
        countLeadingZeros_notCDom(
            notCDom_reduced2AbsSigSum, notCDom_normDistReduced2);
    wire [($clog2(prodWidth + 4) - 1):0] notCDom_nearNormDist =
        notCDom_normDistReduced2<<1;
    wire signed [(expWidth + 1):0] notCDom_sExp =
        intermed_sExp - notCDom_nearNormDist;
    wire [(sigWidth + 4):0] notCDom_mainSig =
        ({1'b0, notCDom_absSigSum}<<notCDom_nearNormDist)>>(sigWidth - 1);
    wire [(((sigWidth/2 + 1) | 1) - 1):0] CDom_grainAlignedLowReduced2Sig =
        notCDom_reduced2AbsSigSum[sigWidth/2:0]<<((sigWidth/2) & 1);
    wire [(sigWidth + 2)/4:0] notCDom_reduced4AbsSigSum;
    compressBy2#((sigWidth/2 + 1) | 1)
        compressBy2_notCDom_reduced2AbsSigSum(
            CDom_grainAlignedLowReduced2Sig, notCDom_reduced4AbsSigSum);
    wire [((sigWidth + 2)/4 - 1):0] notCDom_sigExtraMask;
    lowMaskLoHi#($clog2(prodWidth + 4) - 2, 0, (sigWidth + 2)/4)
        lowMask_notCDom_sigExtraMask(
            notCDom_normDistReduced2[($clog2(prodWidth + 4) - 2):1],
            notCDom_sigExtraMask
        );
    wire notCDom_reduced4SigExtra =
        |(notCDom_reduced4AbsSigSum & notCDom_sigExtraMask);
    wire [(sigWidth + 2):0] notCDom_sig =
        {notCDom_mainSig>>3,
         (|notCDom_mainSig[2:0]) || notCDom_reduced4SigExtra};
    wire notCDom_completeCancellation =
        (notCDom_sig[(sigWidth + 2):(sigWidth + 1)] == 0);
    wire notCDom_sign =
        notCDom_completeCancellation ? roundingMode_min
            : signProd ^ notCDom_signSigSum;
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    assign out_isZero =
        notNaN_addZeros || (!CIsDominant && notCDom_completeCancellation);
    assign out_sign =
           ( specialCase                 && special_signOut)
        || (!specialCase &&  CIsDominant && CDom_sign      )
        || (!specialCase && !CIsDominant && notCDom_sign   );
    assign out_sExp = CIsDominant ? CDom_sExp : notCDom_sExp;
`ifdef HardFloat_propagateNaNPayloads
    assign out_sig =
        out_isNaN ? {1'b1, fractNaN, 2'b00}
            : CIsDominant ? CDom_sig : notCDom_sig;
`else
    assign out_sig = CIsDominant ? CDom_sig : notCDom_sig;
`endif

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    mulAddRecFNToRaw#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(`floatControlWidth - 1):0] control,
        input [1:0] op,
        input [(expWidth + sigWidth):0] a,
        input [(expWidth + sigWidth):0] b,
        input [(expWidth + sigWidth):0] c,
        input [2:0] roundingMode,
        output invalidExc,
        output out_isNaN,
        output out_isInf,
        output out_isZero,
        output out_sign,
        output signed [(expWidth + 1):0] out_sExp,
        output [(sigWidth + 2):0] out_sig
    );

    wire [(sigWidth - 1):0] mulAddA, mulAddB;
    wire [(sigWidth*2 - 1):0] mulAddC;
    wire [5:0] intermed_compactState;
    wire signed [(expWidth + 1):0] intermed_sExp;
    wire [($clog2(sigWidth + 1) - 1):0] intermed_CDom_CAlignDist;
    wire [(sigWidth + 1):0] intermed_highAlignedSigC;
    mulAddRecFNToRaw_preMul#(expWidth, sigWidth)
        mulAddToRaw_preMul(
            control,
            op,
            a,
            b,
            c,
            roundingMode,
            mulAddA,
            mulAddB,
            mulAddC,
            intermed_compactState,
            intermed_sExp,
            intermed_CDom_CAlignDist,
            intermed_highAlignedSigC
        );
    wire [sigWidth*2:0] mulAddResult = mulAddA * mulAddB + mulAddC;
    mulAddRecFNToRaw_postMul#(expWidth, sigWidth)
        mulAddToRaw_postMul(
            intermed_compactState,
            intermed_sExp,
            intermed_CDom_CAlignDist,
            intermed_highAlignedSigC,
            mulAddResult,
            roundingMode,
            invalidExc,
            out_isNaN,
            out_isInf,
            out_isZero,
            out_sign,
            out_sExp,
            out_sig
        );

endmodule

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

module
    mulAddRecFN#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(`floatControlWidth - 1):0] control,
        input [1:0] op,
        input [(expWidth + sigWidth):0] a,
        input [(expWidth + sigWidth):0] b,
        input [(expWidth + sigWidth):0] c,
        input [2:0] roundingMode,
        output [(expWidth + sigWidth):0] out,
        output [4:0] exceptionFlags
    );


    wire invalidExc, out_isNaN, out_isInf, out_isZero, out_sign;
    wire signed [(expWidth + 1):0] out_sExp;
    wire [(sigWidth + 2):0] out_sig;
    mulAddRecFNToRaw#(expWidth, sigWidth)
        mulAddRecFNToRaw(
            control,
            op,
            a,
            b,
            c,
            roundingMode,
            invalidExc,
            out_isNaN,
            out_isInf,
            out_isZero,
            out_sign,
            out_sExp,
            out_sig
        );
    roundRawFNToRecFN#(expWidth, sigWidth, 0)
        roundRawOut(
            control,
            invalidExc,
            1'b0,
            out_isNaN,
            out_isInf,
            out_isZero,
            out_sign,
            out_sExp,
            out_sig,
            roundingMode,
            out,
            exceptionFlags
        );

endmodule


/* ============= mulAddRecFN ================== */

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

/* ============= recFNToFN ================== */

module
    recFNToFN#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(expWidth + sigWidth):0] in,
        output [(expWidth + sigWidth - 1):0] out
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam [expWidth:0] minNormExp = (1<<(expWidth - 1)) + 2;
    localparam normDistWidth = $clog2(sigWidth);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire isNaN, isInf, isZero, sign;
    wire signed [(expWidth + 1):0] sExp;
    wire [sigWidth:0] sig;
    recFNToRawFN#(expWidth, sigWidth)
        recFNToRawFN(in, isNaN, isInf, isZero, sign, sExp, sig);
    wire isSubnormal = (sExp < minNormExp);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire [(normDistWidth - 1):0] denormShiftDist = minNormExp - 1 - sExp;
    wire [(expWidth - 1):0] expOut =
        (isSubnormal ? 0 : sExp - minNormExp + 1)
            | (isNaN || isInf ? {expWidth{1'b1}} : 0);
    wire [(sigWidth - 2):0] fractOut =
        isSubnormal ? (sig>>1)>>denormShiftDist : isInf ? 0 : sig;
    assign out = {sign, expOut, fractOut};

endmodule
/* ============= recFNToFN ================== */

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/

/* ============= fNToRecFN ================== */

module
    fNToRecFN#(parameter expWidth = 8, parameter sigWidth = 24) (
        input [(expWidth + sigWidth - 1):0] in,
        output [(expWidth + sigWidth):0] out
    );

    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    localparam normDistWidth = $clog2(sigWidth);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire sign;
    wire [(expWidth - 1):0] expIn;
    wire [(sigWidth - 2):0] fractIn;
    assign {sign, expIn, fractIn} = in;
    wire isZeroExpIn = (expIn == 0);
    wire isZeroFractIn = (fractIn == 0);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire [(normDistWidth - 1):0] normDist;
    countLeadingZeros#(sigWidth - 1, normDistWidth)
        countLeadingZeros(fractIn, normDist);
    wire [(sigWidth - 2):0] subnormFract = (fractIn<<normDist)<<1;
    wire [expWidth:0] adjustedExp =
        (isZeroExpIn ? normDist ^ ((1<<(expWidth + 1)) - 1) : expIn)
            + ((1<<(expWidth - 1)) | (isZeroExpIn ? 2 : 1));
    wire isZero = isZeroExpIn && isZeroFractIn;
    wire isSpecial = (adjustedExp[expWidth:(expWidth - 1)] == 'b11);
    /*------------------------------------------------------------------------
    *------------------------------------------------------------------------*/
    wire [expWidth:0] exp;
    assign exp[expWidth:(expWidth - 2)] =
        isSpecial ? {2'b11, !isZeroFractIn}
            : isZero ? 3'b000 : adjustedExp[expWidth:(expWidth - 2)];
    assign exp[(expWidth - 3):0] = adjustedExp;
    assign out = {sign, exp, isZeroExpIn ? subnormFract : fractIn};

endmodule

/* ============= fNToRecFN ================== */

/* ============= mulAddFN ================== */

module
  mulAddFN#(parameter expWidth = 3, parameter sigWidth = 3) (
    input [(`floatControlWidth - 1):0] control,
    input [1:0] op,
    input [(expWidth + sigWidth - 1):0] a,
    input [(expWidth + sigWidth - 1):0] b,
    input [(expWidth + sigWidth - 1):0] c,
    input [2:0] roundingMode,
    output [(expWidth + sigWidth - 1):0] out,
    output [4:0] exceptionFlags
  );

  wire [(expWidth + sigWidth):0] a_rec, b_rec, c_rec, out_rec;

  fNToRecFN#(expWidth, sigWidth) a_convert
  (
    .in  (a),
    .out (a_rec)
  );

  fNToRecFN#(expWidth, sigWidth) b_convert
  (
    .in  (b),
    .out (b_rec)
  );

  fNToRecFN#(expWidth, sigWidth) c_convert
  (
    .in  (c),
    .out (c_rec)
  );

  mulAddRecFN#(expWidth, sigWidth) mulAddRec
  (
    .control          (control),
    .op               (op),
    .a                (a_rec),
    .b                (b_rec),
    .c                (c_rec),
    .roundingMode     (roundingMode),
    .out              (out_rec),
    .exceptionFlags   (exceptionFlags)
  );

  recFNToFN#(expWidth, sigWidth) out_convert
  (
    .in   (out_rec),
    .out  (out)
  );

endmodule

/* ============= mulAddFN ================== */

//------------------------------------------------------------------------
// Postive-edge triggered flip-flop with enable
//------------------------------------------------------------------------

module vc_EnReg
#(
  parameter p_nbits = 1
)(
  input  logic               clk,   // Clock input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d,     // Data input
  input  logic               en     // Enable input
);

  always@( posedge clk )
    if ( en )
      q <= d;

endmodule
/* ============= mulAddFNInterface_retimed ================== */

//=========================================================================
// en/rdy/msg Interface for mulAddRecFN
//=========================================================================

module SPI_pymtl2_Components_FPURetimed_FPURetimed
#(
  parameter expWidth = 8, parameter sigWidth = 24
)
(
  input                      clk,

  output  logic              req_rdy,
  input   logic              req_val,
  input   logic [127:0]      req_msg,

  input   logic              resp_rdy,
  output  logic              resp_val,
  output  logic [127:0]      resp_msg
);
  
  logic [123:0] input_msg;

  vc_EnReg  #(124) inputReg
  (
    .clk      (clk),
    .q        (input_msg),
    .d        (req_msg[123:0]),
    .en       (req_val)
  );  

  // TODO: set interface control signals for register retiming scenario
  assign req_rdy = resp_rdy;
  
  logic                                control;
  logic [1:0]                          op;
  logic [(expWidth + sigWidth - 1):0]  a;
  logic [(expWidth + sigWidth - 1):0]  b;
  logic [(expWidth + sigWidth - 1):0]  c;
  logic [2:0]                          roundingMode; 
  logic [(expWidth + sigWidth - 1):0]  out;
  logic [4:0]                          exceptionFlags;

  assign control      = 1'b0;
  assign op           = 2'b0;
  assign roundingMode = 3'b0;
  assign a            = input_msg[(expWidth+sigWidth-1) : 0];
  assign b            = input_msg[(2*expWidth+2*sigWidth-1) : (expWidth+sigWidth)];
  assign c            = input_msg[(3*expWidth+3*sigWidth-1) : (2*expWidth+2*sigWidth)];
  assign resp_msg[(expWidth+sigWidth-1) : 0]                   = out;
  assign resp_msg[(expWidth+sigWidth+4) : (expWidth+sigWidth)] = 5'b0;
 // assign resp_msg[123:(expWidth+sigWidth+5)] = 0;
  assign resp_msg[127:(expWidth+sigWidth+5)] = 0;
        
  logic [(expWidth + sigWidth - 1):0] out_pass1;
  logic [(expWidth + sigWidth - 1):0] out_pass2;
        
  mulAddFN#( expWidth, sigWidth ) fpu_component (
    .control           (control),
    .op                (op),
    .a                 (a),
    .b                 (b),
    .c                 (c),
    .roundingMode      (roundingMode),
    .out               (out_pass1),
    .exceptionFlags    (exceptionFlags)
  );
  
  vc_EnReg #(expWidth + sigWidth) out_pass_reg1(
    .clk              (clk),
    .q                (out_pass2),
    .d                (out_pass1),
    .en               (1'b1)
  );
  
  vc_EnReg #(expWidth + sigWidth) out_pass_reg2(
    .clk              (clk),
    .q                (out),
    .d                (out_pass2),
    .en               (1'b1)
  );
  
//////////////////////////////////////////////////////////////////////////
// en/rdy pass thorugh
//////////////////////////////////////////////////////////////////////////
  
  logic val_pass1;
  logic val_pass2;
  
  
  vc_EnReg #(1) en_reg1(
    .clk              (clk),
    .q                (val_pass1),
    .d                (req_val),
    .en               (1'b1)
  );
  
  vc_EnReg #(1) en_reg2(
    .clk              (clk),
    .q                (val_pass2),
    .d                (val_pass1),
    .en               (1'b1)
  );
  
  vc_EnReg #(1) en_reg3(
    .clk              (clk),
    .q                (resp_val),
    .d                (val_pass2),
    .en               (1'b1)
  );

endmodule

/* ============= mulAddFNInterface_retimed ================== */


/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
