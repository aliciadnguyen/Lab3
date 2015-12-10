`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:45:55 11/07/2015 
// Design Name: 
// Module Name:    D_FLIP_FLOP2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module D_FLIP_FLOP2(d1, q1, clk1, q_l);
	input d1, clk1;
	output q1, q_l;
	
	not(not_clk, clk1);

	d_latch master(.d(d1), .q(qm), .qn(qn), .clk(not_clk));
	d_latch slave(.d(qm), .q(q1), .qn(q_l), .clk(clk1));

endmodule
