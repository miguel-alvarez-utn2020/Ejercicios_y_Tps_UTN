/*
 ============================================================================
 Name        : ejercicio3_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int inputNumers();



int main(void) {
	setbuf(stdout, NULL);
	system("cls");
	int numero;
	printf("App ejercicio 3_3\n");
	numero = inputNumers();
	printf("El numero que viene de la funcion es: %d", numero);

}

int inputNumers(){

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	return numero;
}

