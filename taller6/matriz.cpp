/*	Programa que devuelve el mayor de los numeros ingresados
Fecha: 07/09/2018
Elaborado por: Daniel Steven Agudelo Fernandez
*/


//*******************************
	//librerias
//******************************

#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

//********************************
	// declaracion de funcion
//********************************

void numxnum(int v1, int v2);
void numxnum(int v1, int v2){
	int matriz[100][100];
	srand(time(NULL));
	 for(int i = 0; i < v1; i++){
		 for(int j=0; j<v2;j++){
			 matriz[i][j] =  0+rand()%(2-0);
			 printf("Posicion del arreglo[%d][%d]: %d \n",i,j, matriz[i][j]);
		 }
	 }
	
	for(int i = 0; i < v1; i++){
		 for(int j=0; j<v2;j++){
			printf("%d ", matriz[i][j]);
		}
		 printf("\n");
	}
}



//***********************************
	//funcion principal
//***********************************




int main(int argc, char *argv[]) {
	
	int valor1, valor2;
	
	printf("ingrese dos numeros enteros \n");
	scanf("%d", &valor1);
	scanf("%d", &valor2);
	
	numxnum(valor1,valor2);
	
	
	
	return 0;
}

