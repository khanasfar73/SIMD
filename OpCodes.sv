// FMAD: Fused Multiply ADD
package OpCodes;

/* verilator lint_off UNUSED */
parameter NSIG  = 15, NBITS = NSIG + 1,
    ADDR_BITS_REGF = 4, READ_PORTS_REGF = 8, WRITE_PORTS_REGF = 8,
    INTU_CORES = READ_PORTS_REGF/2,
    REG_PER_THREAD = 4, REGLD_PER_CLK = WRITE_PORTS_REGF;

typedef bit [31:0] Instruction;

typedef enum bit[6:0]
{
    RInt    = 7'h33,    // b0110011
    RFloat  = 7'h43,    // b1000011
    I       = 7'h13,    // b0010011
    L       = 7'h03,    // b0000011
    S       = 7'h23,    // b0100011
    Branch  = 7'h63,    // b1100011
    FPLoad  = 7'h07,    // b0000111
    FPStore = 7'h27    // b0100111
} opcode;

endpackage