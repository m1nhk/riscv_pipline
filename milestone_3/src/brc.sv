/* verilator lint_off UNUSED */
module brc(
	input  logic [31:0] i_rs1_data,
	input  logic [31:0] i_rs2_data,
	input  logic 		i_br_un,
	output logic 		o_br_less,
	output logic 		o_br_equal
);
logic cout;
logic [31:0] sum;

ripple_adder ripple_adder(
	.a(i_rs1_data),
	.b(~i_rs2_data),
	.cin(1'b1),
	.sum(sum),
	.cout(cout)
);

always @(*) begin
	o_br_equal = (i_rs1_data === i_rs2_data);
	if (i_br_un) o_br_less = !cout;
	else if (i_rs1_data[31] != i_rs2_data[31]) o_br_less = i_rs1_data[31];
	else o_br_less = sum[31];
end

endmodule
