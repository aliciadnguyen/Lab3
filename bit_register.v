`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:06:15 11/07/2015 
// Design Name: 
// Module Name:    bit_register 
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
module bit_register( P, Q, CLK, RESET );
	input [7:0] P;
	input CLK, RESET;
	output [7:0] Q;
	wire [7:0] QN;

		D_FLIP_FLOP2 D1(P[0]&& ~RESET, Q[0], CLK, QN[0] );
		D_FLIP_FLOP2 D2(P[1]&& ~RESET, Q[1], CLK, QN[1] );
		D_FLIP_FLOP2 D3(P[2]&& ~RESET, Q[2], CLK, QN[2] );
		D_FLIP_FLOP2 D4(P[3]&& ~RESET, Q[3], CLK, QN[3] );
		D_FLIP_FLOP2 D5(P[4]&& ~RESET, Q[4], CLK, QN[4] );
		D_FLIP_FLOP2 D6(P[5]&& ~RESET, Q[5], CLK, QN[5] );
		D_FLIP_FLOP2 D7(P[6]&& ~RESET, Q[6], CLK, QN[6] );
		D_FLIP_FLOP2 D8(P[7]&& ~RESET, Q[7], CLK, QN[7] );


endmodule
