/*
 ============================================================================
 Name        : ejercicio2_1.c
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

	int acumulador = 0;
	int cantidadPeticiones = 5;
	int promedio;
	int valor;
	int i;
	printf("App Ejercicio 2_1\n Introduzca %d valores\n", cantidadPeticiones);
	system("pause");
	for(i = 1; i <= cantidadPeticiones; i++){
		system("cls");
		printf("Ingrese el valor %d: ",i);
		scanf("%d", &valor);
		acumulador += valor;
	}
	promedio = acumulador / cantidadPeticiones;
	printf("\n");
	printf("La suma de todos los valores es: %d", acumulador);
	printf("\n");
	printf("El promedio es: %d", promedio);
	printf("\n");
	system("pause");

	return 0;
}
