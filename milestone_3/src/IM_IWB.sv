module IM_IWB (
    input logic i_clk,
    input logic i_rst_n,
    input logic rd_wrenM,
    input logic [1:0] wb_selM,
    input logic [31:0] alu_dataM,
    input logic [31:0] ld_dataM,
    input logic [31:0] pc_nxtM,
    input logic [4:0] rdM,
    input logic insn_vldM,
    input logic [31:0] pcM,

    output logic rd_wrenWB,
    output logic [1:0] wb_selWB,
    output logic [31:0] alu_dataWB,
    output logic [31:0] ld_dataWB,
    output logic [31:0] pc_nxtWB,
    output logic [4:0] rdWB,
    output logic insn_vldWB,
    output logic [31:0] pcWB
);

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if (!i_rst_n) begin
        rd_wrenWB <= 0;
        wb_selWB <= 0;
        alu_dataWB <= 0;
        ld_dataWB <= 0;
        pc_nxtWB <= 0;
        rdWB <= 0;
        insn_vldWB <= 0;
        pcWB <= 0;
    end else begin
        rd_wrenWB <= rd_wrenM;
        wb_selWB <= wb_selM;
        alu_dataWB <= alu_dataM;
        ld_dataWB <= ld_dataM;
        pc_nxtWB <= pc_nxtM;
        rdWB <= rdM;
        insn_vldWB <= insn_vldM;
        pcWB <= pcM;
    end
end

endmodule
