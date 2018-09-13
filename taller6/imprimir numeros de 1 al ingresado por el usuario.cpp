/*	Programa que imprime los numeros desde el 1 hasta el numero ingresado por el usuario
	Fecha: 07/09/2018
	Elaborado por: Daniel Steven Agudelo Fernandez
*/

//*********************************
	//Llamado de librerias 
//*******************************


#include <iostream>
#include <conio.h>
#include <stdio.h>


//************************************
	//declaracion de nuestra funcion
//************************************


void positivo();


//**********************************
	//proceso de nuestro funcion
//*********************************



void positivo(){
	
	int v1;
	printf("ingrese un valor entero positivo \n");
	scanf("%d", &v1);
		if(v1 > 0){
			for(int i=1; i<=v1; i++){
				printf("%d\n", i);
			}
		}else{
			printf("error, acaba de ingresar un numero no valido");
		}
	
}


//**********************************
	//Funcion Principal
//*********************************



int main(int argc, char *argv[]) {
	
	positivo();
	
	return 0;
}

