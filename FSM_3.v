`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:10:13 11/07/2015 
// Design Name: 
// Module Name:    FSM_3 
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
module FSM_3( D_in, RESET, CLK, REM );
	input D_in, RESET, CLK;
	output REM;
	reg [1:0] state;
	reg REM;
	
	// Initalized state to 0
	initial begin
		state = 0;
	end
	
	always @( posedge CLK )
		begin
			//state = 1;
			if (RESET == 1) REM = 0;
			case (state)
				0 : 
					if (D_in == 0) begin
						state = 0;
						REM = 0;
					end else if (D_in == 1) begin
						state = 1;
						REM = 1;
					end
				
				1 : 
					if (D_in == 0) begin
						state = 2;
						REM = 1;
					end else if (D_in == 1) begin
						state = 0;
						REM = 0;
					end
				
				2 : 
					if (D_in == 0) begin
						state = 1;
						REM = 1;
					end else if (D_in == 1) begin
						state = 2;
						REM = 1;
					end
					
			endcase
		end

endmodule
