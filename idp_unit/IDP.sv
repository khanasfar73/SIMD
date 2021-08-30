/*
** dispatch opcodes each cycle and check for free units
*/
import OpCodes::opcode;
import OpCodes::Instruction;
import OpCodes::READ_PORTS_REGF;
import OpCodes::WRITE_PORTS_REGF;
import OpCodes::ADDR_BITS_REGF;
import OpCodes::INTU_CORES;
import OpCodes::REG_PER_THREAD;

// $(INST, WarpID, thread_mask) --> ThreadIDs --> Absolute Registers --> Send Inst to the responsible free FU
// Remaining threads next cycle.

module IDP
(
    // ALU
    output wire bit alu_select_o [INTU_CORES],
    output logic [2:0] f3_o, [1:0] f2_o, [4:0] f5_o,
    // Scalar Load outputs
    output logic [11:0] mem_offset_o,
    // Vector Load outputs
    output logic [4:0] stride_o,
    // General IDP outputs
    output logic [ADDR_BITS_REGF - 1 : 0] rd_addr_o [WRITE_PORTS_REGF], 
    output logic [ADDR_BITS_REGF - 1 : 0] rs1_addr_o[READ_PORTS_REGF/2], rs2_addr_o[READ_PORTS_REGF/2],
    /* verilator lint_off UNUSED */ 
    input Instruction Inst_in,
    input logic [5:0] WarpID_in,
    input logic [3:0] thread_mask_in,
    input logic clk /* verilator clocker */
);

// fixes read adddress = 0 bug on all ports
/*
initial begin
    for (shortint i = 0; i < INTU_CORES; i++) begin
        rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i)] = ADDR_BITS_REGF'(2 + i * REG_PER_THREAD);
        rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i + 1)] = ADDR_BITS_REGF'(3 + i * REG_PER_THREAD);
        rs1_addr_o [$clog2(READ_PORTS_REGF)'(2 * i)] = ADDR_BITS_REGF'(i * REG_PER_THREAD);
        rs2_addr_o [$clog2(READ_PORTS_REGF)'(2 * i + 1)] = ADDR_BITS_REGF'(i * REG_PER_THREAD + 1);
    end
end
//*/

// RV32I type decoding
logic [6:0] OP = Inst_in[6:0];
logic [4:0] rd = Inst_in[11:7];
logic [2:0] funct3 = Inst_in[14:12];
logic [4:0] rs1 = Inst_in[19:15];
logic [4:0] rs2 = Inst_in[24:20];
logic [1:0] funct2 = Inst_in[26:25];
logic [4:0] funct5 = Inst_in[31:27];
logic [5:0] ThreadID = WarpID_in;

always_ff @( posedge clk ) begin : IDP
    // Decode instruction
    for (int i = 0; i < $bits(thread_mask_in); i++) begin                
        if (thread_mask_in[2'(i)] == 1'1) begin            
            rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i)] 
                <= ADDR_BITS_REGF'(rd) + ADDR_BITS_REGF'(i * REG_PER_THREAD);
            rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i + 1)] 
                <= ADDR_BITS_REGF'(rd) + ADDR_BITS_REGF'(i * REG_PER_THREAD);
            rs1_addr_o [$clog2(READ_PORTS_REGF/2)'(i)]
                <= ADDR_BITS_REGF'(rs1) + ADDR_BITS_REGF'(i * REG_PER_THREAD);
            rs2_addr_o [$clog2(READ_PORTS_REGF/2)'(i)]
                <= ADDR_BITS_REGF'(rs2) + ADDR_BITS_REGF'(i * REG_PER_THREAD);
            
            alu_select_o[i] <= 1'1;
                /* verilator lint_off WIDTH */
            //$display("[$display] W_ADDR[%d]: %d, W_ADDR[%d]: %d, R_ADDR[%d]: %d, R_ADDR[%d]: %d", 2*i, w_addr_o[2*i], 2*i+1, w_addr_o[2*i+1], 2*i, r_addr_o[2*i], 2*i+1, r_addr_o[2*i+1]);
        end
        else begin
            rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i)] <= 0;
            rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i + 1)] <= 0;
            rs1_addr_o [$clog2(READ_PORTS_REGF/2)'(i)] <= 0;
            rs2_addr_o [$clog2(READ_PORTS_REGF/2)'(i)] <= 0;

            alu_select_o[i] <= 1'0;
        end
    end

    case (OP)
        OpCodes::RInt, OpCodes::RFloat:begin
            //$display("R Type Instruction Recieved: %d", OP);
            f3_o <= funct3;
            f2_o <= funct2;
            f5_o <= funct5;
        end
        OpCodes::L:begin
        // TODO: vector Load/Store Instructions
        // Load Instructions
            mem_offset_o <= {funct5, funct2, rs2};
            for (int i = 0; i < 4; i++) begin
                rd_addr_o [$clog2(WRITE_PORTS_REGF)'(2 * i + 1)] <= 0;
            end
        end
        OpCodes::S:begin
        // Store Instruction
            // also send absolte rs2 instructions
            mem_offset_o <= {funct5, funct2, rd};
        end
        OpCodes::FPLoad:begin
            stride_o <= Inst_in[24:20];
        end
        OpCodes::FPStore:begin
            $display("FP Store Instruction");
        end
        OpCodes::I:begin
            $display("I type instrcution");
            mem_offset_o <= {funct5, funct2, rs2};
        end
        OpCodes::Branch:begin
            $display("Branch Instruction Encounter");
        end
        7'h37, 7'h17, 7'h6F:begin
        // U type
            
        end
        default:begin
            $display("Unknown Instruction type: %d", OP);
        end
    endcase
end

endmodule