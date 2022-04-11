/*
 ============================================================================
 Name        : ejercicio5_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utn.h"

#define SIZE 10
int main(void) {
	
	system("cls");
	int num[SIZE];
	utn_cargarArrInt(num, SIZE, "Ingrese un numero: ","Error, numero no valido\n",1,100,1,false);


	return EXIT_SUCCESS;
}
