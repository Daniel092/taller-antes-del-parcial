/* 	Programa que devuelve como resultado la multiplicacion de dos numeros reales
	Fecha 07/09/2018
	Elaborado por: Daniel Steven Agudelo Fernandez
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

//******************************
	//declaracion de la Funcion
//******************************



void mult(float v1, float v2);

void mult(float v1, float v2){
	
	float res;
	
	res = (v1 * v2);
	
	printf("el resultado es %.2f  ", res);
	
}


//***************************
	// funcion Principal
//***************************



int main(int argc, char *argv[]) {
	
	float valor1, valor2;
	
	printf("ingrese dos valores reales\n");
	scanf("%f", &valor1);
	scanf("%f", &valor2);
	
	mult(valor1,valor2);

	
	return 0;
}

