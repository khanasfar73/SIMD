// fp32 unit
import OpCodes::NSIG;
import OpCodes::opcode;

module FPU(
    output wire [NSIG:0] FPU_Out, 
    input logic [NSIG:0] A, B, C,
    input opcode OP,
    input wire clk /* verilator clocker */
);

reg [NSIG:0] FPU_Result;
assign FPU_Out = FPU_Result;

always_ff @(posedge clk) begin : FPU
    unique case (OP)
        OpCodes::FMAD:
        begin
            FPU_Result <= A * B + C;
        end 
        default: 
            FPU_Result <= 0;
    endcase
end
endmodule : FPU