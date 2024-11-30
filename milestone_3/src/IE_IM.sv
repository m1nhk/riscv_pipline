/* verilator lint_off UNUSED */
module IE_IM (
    input logic i_clk,
    input logic i_rst_n,
    input logic rd_wrenE,
    input logic [1:0] wb_selE,
    input logic mem_wrenE,
    input logic [31:0] alu_dataE,
    input logic [31:0] op_b,
    input logic [31:0] pc_nxtE,
    input logic [4:0] rdE,
    input logic [2:0] load_selE,
    input logic [1:0] store_selE,
    input logic [6:0] opcodeE,
    input logic insn_vldE,
    input logic [31:0] pcE,
    input logic flushM,

    output logic rd_wrenM,
    output logic [1:0] wb_selM,
    output logic mem_wrenM,
    output logic [31:0] alu_dataM,
    output logic [31:0] st_dataM,
    output logic [31:0] pc_nxtM,
    output logic [4:0] rdM,
    output logic [2:0] load_selM,
    output logic [1:0] store_selM,
    output logic [6:0] opcodeM,
    output logic insn_vldM,
    output logic [31:0] pcM
);

always_ff @(posedge i_clk or negedge i_rst_n) begin 
    if (!i_rst_n | flushM) begin
        rd_wrenM <= 0;
        wb_selM <= 0;
        mem_wrenM <= 0;
        alu_dataM <= 0;
        st_dataM <= 0;
        pc_nxtM <= 0;
        rdM <= 0;
        load_selM <= 0;
        store_selM <= 0;
        opcodeM <= 0;
        insn_vldM <= 0;
        pcM <= 0;
    // end else if (stallM) begin
    //     rd_wrenM <= rd_wrenM;
    //     wb_selM <= wb_selM;
    //     mem_wrenM <= mem_wrenM;
    //     alu_dataM <= alu_dataM;
    //     st_dataM <= st_dataM;
    //     pc_nxtM <= pc_nxtM;
    //     rdM <= rdM;
    //     load_selM <= load_selM;
    //     store_selM <= store_selM;
    //     opcodeM <= opcodeM;
    //     insn_vldM <= insn_vldM;
    //     pcM <= pcM;
    end else begin
        rd_wrenM <= rd_wrenE;
        wb_selM <= wb_selE;
        mem_wrenM <= mem_wrenE;
        alu_dataM <= alu_dataE;
        st_dataM <= op_b;
        pc_nxtM <= pc_nxtE;
        rdM <= rdE;
        load_selM <= load_selE;
        store_selM <= store_selE;
        opcodeM <= opcodeE;
        insn_vldM <= insn_vldE;
        pcM <= pcE;
    end
end

endmodule
