/*	Programa que devuelve el mayor de los numeros ingresados
Fecha: 07/09/2018
Elaborado por: Daniel Steven Agudelo Fernandez
*/


//librerias
#include <stdio.h>
#include <conio.h>
#include <string.h>

void vocales(char v1);
void vocales(char v1){
	
	
	
	if(v1 == 'a'|| v1 =='A'|| v1 =='e'|| v1 =='E'|| v1 =='i'|| v1 =='I'|| v1 =='o'|| v1 =='O' ||v1 == 'u'|| v1 =='U'){
		printf("el valor ingresado es una vocal");
	}else{
		printf("el valor ingresado no es una vocal");
	}
	
	
}




int main(int argc, char *argv[]) {
	
	char valor1;
	
	printf("ingrese una letra cualquiera\n");
	valor1=getchar();
	
	vocales(valor1);
	
	return 0;
}

