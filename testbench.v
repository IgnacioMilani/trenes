`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:47:10 11/08/2018
// Design Name:   top
// Module Name:   C:/Users/igna_/Documents/Tecnicas Digitales I/trenes/testbench.v
// Project Name:  trenes
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg S1;
	reg S2;
	reg S3;
	reg S4;
	reg clk;
	reg reset;

	// Outputs
	wire SW1;
	wire SW2;
	wire [1:0] DA;
	wire [1:0] DB;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.S4(S4), 
		.clk(clk), 
		.reset(reset), 
		.SW1(SW1), 
		.SW2(SW2), 
		.DA(DA), 
		.DB(DB)
	);

	initial begin
		// Initialize Inputs
		S1 = 0;
		S2 = 0;
		S3 = 0;
		S4 = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		reset=1;
		#1 clk=1; #1;
		clk=0;
		S1=1; reset=0; #1 clk=1;
		$monitor("A=%b\tB=%b\tSW1=%b\tSW2=%b\t",DA[0],DB[0],SW1,SW2);
		#5 clk=0;
		#10 S1=0; S2=1; S4=0; #1 clk=1;
		$monitor("A=%b\tB=%b\tSW1=%b\tSW2=%b\t",DA[0],DB[0],SW1,SW2);
		#5 clk=0;
		#10 S2=0; S4=1; #1 clk=1;
		$monitor("A=%b\tB=%b\tSW1=%b\tSW2=%b\t",DA[0],DB[0],SW1,SW2);
		#5 clk=0;
		#10 S4=0; S3=1; #1 clk=1;
		$monitor("A=%b\tB=%b\tSW1=%b\tSW2=%b\t",DA[0],DB[0],SW1,SW2);
		
	end
      
endmodule

