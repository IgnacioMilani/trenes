`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: UTN-FRC
// Engineer: Benedetti, Milani
// 
// Create Date:    01:42:03 11/08/2018 
// Module Name:    top 
// Project Name: Trenes
// Target Devices: FPGA/CPLD
// Description: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
    input S1, S2, S3, S4, clk, reset,
    output SW1, SW2,
    output [1:0] DA, DB
    );
	reg [2:0] estado;

	//Codificación de estados
	parameter ABext=3'b000, Aint=3'b001, Bfrena=3'b010, Bint=3'b011, Afrena=3'b100;

	initial estado=ABext;
	//Secuencia de estados segun las entradas
	always @ (posedge clk, posedge reset) begin
		if(reset)
			estado = ABext;								//Si reset=1 vuelve al estado inicial
		else
			case (estado)
				ABext: 	case ({S1,S2})
							0: estado=ABext;			//Se queda en estado inicial
							1: estado=Bint;			//B proximo al tramo 2
							10: estado=Aint;			//A proximo al tramo 2
							11: estado=Aint;			//Llegan al mismo tiempo, le damos prioridad a A
							default:  estado=ABext;	//Si ocurre un error vuelve al inicio
						endcase
				Aint: 	case ({S2,S4})
							2'b00: estado=Aint;			//Se queda en este estado
							2'b01: estado=ABext;			//A ya salio, vuelvo al inicial
							2'b10: estado=Bfrena;		//A sigue en T2, B llegando a T2, lo freno
							2'b11: estado=Bint;			//A salio y B está llegando, hago avanzar B
							default:  estado=ABext;
						endcase
				Bint: 	case ({S1,S3})
							2'b00: estado=Bint;			//Se queda en este estado
							2'b01: estado=ABext;			//B ya salio, vuelvo al inicial
							2'b10: estado=Afrena;		//B sigue en T2, A llegando a T2, lo freno
							2'b11: estado=Aint;			//B salio y A está llegando, hago avanzar A
							default:  estado=ABext;
						endcase
				Afrena:	if(S3) estado=Aint;			//Hasta que B no sale de T2
						else estado=Afrena;			//mantengo al tren A detenido
				Bfrena:	if(S4) estado=Bint;			//Hasta que A no sale de T2
						else estado=Bfrena;			//mantengo al tren B detenido
				default: estado=ABext;
			endcase
	end

	reg [3:0] outs;				//Manejo todas las salidas con un arreglo
	assign DA[0]=outs[3];
	assign DB[0]=outs[2];
	assign SW1=outs[1];
	assign SW2=outs[0];
	assign DA[1]=0;				//Bloqueo los trenes para que solo vayan
	assign DB[1]=0;				//en sentido antihorario
	
	//Salida de cada estado (Tipo Moore)
	always @ (estado)	begin								//Siempre que cambie el estado (con clk o reset)
		case (estado)
			ABext:	outs=4'b1100;			//Ambos avanzan, vias por defecto conectadas a externa
			Aint:	outs=4'b1100;			//Ambos avanzan, Switchs a 0 para que pase A
			Bint:	outs=4'b1111;			//Ambos avanzan, Switchs a 1 para que pase B
			Afrena:	outs=4'b0111;			//A detenido, Switchs a 1 para que pase B
			Bfrena:	outs=4'b1000;			//B detenido, Switchs a 0 para que pase A
			default:	outs=4'b0000;
		endcase
	end	
	
	
endmodule
