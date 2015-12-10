`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:41:59 11/07/2015
// Design Name:   SHIFT_REG
// Module Name:   C:/Users/Alicia/Documents/CSE140L/Lab3/SHIFT_REG_TEST.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SHIFT_REG
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SHIFT_REG_TEST;

	// Inputs
	reg data_in;
	reg CLK;

	// Outputs
	wire [7:0] Q;

	// Instantiate the Unit Under Test (UUT)
	SHIFT_REG uut (
		.data_in(data_in), 
		.CLK(CLK), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		data_in = 1;
		#200
		data_in = 0;
		#40;
		data_in = 1;
		#20
		#30
		data_in = 1;
		#40
		data_in = 0;
		// Add stimulus here

	end
	
	always begin
	#13
	CLK = ~CLK;
	end
      
endmodule

