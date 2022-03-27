/*
 ============================================================================
 Name        : ejercicio3_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int inputNumers(int vMinimo, int vMaximo);

#define V_MINIMO 1
#define V_MAXIMO 10


int main(void) {
	setbuf(stdout, NULL);
	system("cls");
	int numero;
	int respuesta;

	printf("App ejercicio 3_3\n");
	printf("Ingrese un valor entre %d y %d\n", V_MINIMO, V_MAXIMO);
	respuesta = inputNumers(V_MINIMO, V_MAXIMO);
	if(respuesta != 0){
		numero = respuesta;
		printf("El numero que viene de la funcion es: %d", numero);	
	}else{
		printf("Error, Valor fuera de rango");
	}

}

int inputNumers(int vMinimo, int vMaximo){

	int numero;
	int retorno = 0;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	if(numero >= vMinimo && numero <= vMaximo ){
		return numero;	
	}else{
		return retorno;
	}
	
}