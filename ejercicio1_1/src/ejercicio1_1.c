/*
 ============================================================================
 Name        : ejercicio1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int valorUno, valorDos, resultado;
	system("cls");

	printf("App Ejercicio 1_1\n");
	printf("Introduce dos valores para sumar:\n");
	printf("valor 1: ");
	scanf("%d", &valorUno);
	printf("valor 2: ");
	scanf("%d", &valorDos);

	resultado = valorUno + valorDos;
	printf("El resultado es: %d", resultado);
	printf("\n");

	system("pause");

	return 0;
}
