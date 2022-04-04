/*
 ============================================================================
 Name        : ejercicio5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"//para usar en eclipse cambiar a .h
int main(void) {

	setbuf(stdout,NULL);
	system("cls");

	int num[5];
	int acumulador = 0;
	int i;
	for(i = 0; i < 5; i++){
		utn_inputTypeInt(&num[i], "Ingrese un numero: ", "Error, no es un numero", 1, 100, 2);
		acumulador += num[i];
	}
	system("cls");
	printf("Los numeros ingresados son:\n");
	for(i = 0; i < 5; i ++){
		printf("%d\n", num[i]);
	}
	printf("La suma de los numero es: %d", acumulador);


}



