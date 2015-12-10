`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:17 11/07/2015 
// Design Name: 
// Module Name:    SHIFT_REG 
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
module SHIFT_REG( data_in, CLK, Q );
	input data_in, CLK;
	output [7:0] Q;
	wire [7:0] QN;
	
	D_FLIP_FLOP2 D1( data_in, Q[0], CLK, QN[0]);
	D_FLIP_FLOP2 D2( Q[0], Q[1], CLK, QN[1]);
	D_FLIP_FLOP2 D3( Q[1], Q[2], CLK, QN[2]);
	D_FLIP_FLOP2 D4( Q[2], Q[3], CLK, QN[3]);
	D_FLIP_FLOP2 D5( Q[3], Q[4], CLK, QN[4]);
	D_FLIP_FLOP2 D6( Q[4], Q[5], CLK, QN[5]);
	D_FLIP_FLOP2 D7( Q[5], Q[6], CLK, QN[6]);
	D_FLIP_FLOP2 D8( Q[6], Q[7], CLK, QN[7]);
	
endmodule
