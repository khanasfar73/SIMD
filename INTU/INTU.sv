// INT unit

import OpCodes::NSIG;

module INTU(
    output wire [NSIG:0] ALU_Out,
    input wire [NSIG:0] A, B,
    input wire OpCodes::opcode OP,
    input wire clk /* verilator clocker */
);

reg [NSIG:0] ALU_Result;

always_ff @(posedge clk)
begin
    //$display("INTU====> A: %d, B: %d, ALU_Result: %d, Out: %d, OPCODE: %d", A, B, ALU_Result, ALU_Out, OP);
    unique case (OP)
        OpCodes::IADD   : ALU_Result <= A + B;
        OpCodes::IMUL   : ALU_Result <= A * B;
        OpCodes::LD     : ;
        // OpCodes::IMAD : ALU_Result <= A * B + C;
        default: 
            ALU_Result <= 15;
    endcase
end
assign ALU_Out = ALU_Result;
endmodule : INTU