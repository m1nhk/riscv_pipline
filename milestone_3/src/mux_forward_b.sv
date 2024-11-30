module mux_forward_b (
    input logic [31:0] data2E,
    input logic [31:0] wb_data,
    input logic [31:0] alu_dataM,
    input logic [1:0] forw_b_sel,
    output logic [31:0] op_b
);

always_comb begin
    case(forw_b_sel)
        2'b00: op_b = data2E;
        2'b01: op_b = wb_data;
        2'b10: op_b = alu_dataM;
        default: op_b = 32'b0;
    endcase
end

endmodule
