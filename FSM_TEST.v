`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:26:52 11/07/2015
// Design Name:   FSM_3
// Module Name:   C:/Users/Alicia/Documents/CSE140L/Lab3/FSM_TEST.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM_3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_TEST;

	// Inputs
	reg D_in;
	reg RESET;
	reg CLK;

	// Outputs
	wire REM;

	// Instantiate the Unit Under Test (UUT)
	FSM_3 uut (
		.D_in(D_in), 
		.RESET(RESET), 
		.CLK(CLK), 
		.REM(REM)
	);

	initial begin
		// Initialize Inputs
		RESET = 1;
		CLK = 0;
		D_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		RESET = 0;
		D_in = 1;
		#200
		D_in = 0;
		#40;
		D_in = 1;
		#20
	   RESET = 1;
		#30
		D_in = 1;
		#40
		D_in = 0;
		// Add stimulus here

	end
	
	always begin
		#13
		CLK = ~CLK;
	end
      
endmodule

