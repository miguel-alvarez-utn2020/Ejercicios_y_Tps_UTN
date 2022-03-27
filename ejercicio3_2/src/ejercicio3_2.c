/*
 ============================================================================
 Name        : ejercicio3_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int validarNumeroPar(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int respuesta;
	system("cls");
	printf("App Ejercicio 3_2\n");
	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	respuesta = validarNumeroPar(numero);
	if(respuesta){
		printf("EL numero %d es PAR", numero);
	}else{
		printf("El numero %d no es PAR", numero);
	}

}


int validarNumeroPar(int numero){

	if(numero % 2 == 0){
		return 1;
	}else{
		return 0;
	}

}