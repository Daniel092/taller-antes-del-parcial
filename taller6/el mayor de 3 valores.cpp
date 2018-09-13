/*	Programa que devuelve el mayor de los numeros ingresados
	Fecha: 07/09/2018
	Elaborado por: Daniel Steven Agudelo Fernandez
*/


//*****************************
	//librerias
//*****************************

#include <iostream>
#include <stdio.h>
#include <conio.h>

//********************************
	//declaracion de la funcion
//*******************************
int mayor(int v1, int v2, int v3){
	
	int may;
	
	if((v1 > v2) && (v1 > v3)){
		may = v1;
	}else{
		if((v2 > v1)&&(v2 > v3)){
			may = v2;
		}else{
			may = v3;
		}
	}
	
	return may;
}

//***********************************
	//Funcion Principal
//************************************

int main(int argc, char *argv[]) {
	
	int valor1, valor2, valor3, resultado;
	
	printf("ingrese 3 valores enteros \n");
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	scanf("%d", &valor3);
	
	resultado = mayor(valor1,valor2,valor3);
	
	printf("el mayor es  %d  ", resultado);
	
	return 0;
}

