module muxb(
	input logic [31:0] op_b,
	input logic [31:0] imm,
	input logic op_b_sel,
	output logic [31:0] operand_b
);

assign operand_b = (op_b_sel == 1) ? imm : op_b;

endmodule
