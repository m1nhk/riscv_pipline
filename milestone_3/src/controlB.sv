/* verilator lint_off UNUSED */
module controlB (
    input logic [31:0] instr,
    input logic br_equal,
	input logic br_less,
    input logic [6:0] opcodeE,
	output logic br_sel
);

wire [2:0] func3;
assign func3 = instr[14:12];

localparam R_TYPE  	 = 7'b0110011;
localparam I_TYPE 	 = 7'b0010011;
localparam S_TYPE  	 = 7'b0100011;
localparam B_TYPE	 = 7'b1100011;
localparam LOAD_TYPE = 7'b0000011;
localparam LUI 		 = 7'b0110111;
localparam AUIPC	 = 7'b0010111;
localparam JALR 	 = 7'b1100111;
localparam JAL 		 = 7'b1101111;

always_comb begin
    case (opcodeE)
        R_TYPE: br_sel = 1'b0;
        I_TYPE: br_sel = 1'b0;
        S_TYPE: br_sel = 1'b0; 
        B_TYPE: begin
            case(func3)
			3'b000: begin	// BEQ
				br_sel = br_equal?1'b1:1'b0;
			end
			3'b001: begin	// BNE
				br_sel = !br_equal?1'b1:1'b0;
			end
			3'b100: begin 	// BLT
				br_sel = br_less?1'b1:1'b0;
			end
			3'b101: begin	// BGE
				br_sel = !br_less?1'b1:1'b0;
			end
			3'b110: begin	// BLTU
				br_sel = br_less?1'b1:1'b0;
			end
			3'b111: begin	// BGEU
				br_sel = !br_less?1'b1:1'b0;
			end
            default: begin
				br_sel = 1'b0;
            end
            endcase
        end
        LOAD_TYPE: br_sel = 1'b0;
        LUI: br_sel = 1'b0;
        JAL: br_sel = 1'b1;
        JALR: br_sel = 1'b1;
        AUIPC: br_sel = 1'b0;
        default: br_sel = 1'b0;
    endcase
end

endmodule
