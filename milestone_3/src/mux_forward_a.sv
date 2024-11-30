module mux_forward_a (
    input logic [31:0] data1E,
    input logic [31:0] wb_data,
    input logic [31:0] alu_dataM,
    input logic [1:0] forw_a_sel,
    output logic [31:0] op_a
);

always_comb begin
    case(forw_a_sel)
        2'b00: op_a = data1E;
        2'b01: op_a = wb_data;
        2'b10: op_a = alu_dataM;
        default: op_a = 32'b0;
    endcase
end

endmodule
