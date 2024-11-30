module muxa(
	input logic [31:0] op_a,
	input logic [31:0] pc,
	input logic op_a_sel,
	output logic [31:0] operand_a
);

assign operand_a = (op_a_sel == 1) ? pc : op_a;

endmodule
