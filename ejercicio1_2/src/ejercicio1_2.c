/*
 ============================================================================
 Name        : ejercicio1_2.c
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
	system("cls");
	int valor1;
	int valor2;
	int valor3;
	int valorMayor;	

	printf("App Ejercicio 1_2\n");
	printf("Ingresa 3 valores\n");
	printf("Valor 1: ");
	scanf("%d", &valor1);
	printf("Valor 2: ");
	scanf("%d", &valor2);
	printf("Valor 3: ");
	scanf("%d", &valor3);

	if(valor1 != valor2 && valor1 != valor3 && valor2 != valor3){

		if(valor1 > valor2 && valor1 > valor3){
			valorMayor = valor1;
			
		}else{
			if(valor2 > valor1 && valor2 > valor3){
				valorMayor = valor2;
			}else{
				valorMayor = valor3;
			}	
		}

		printf("El mayor valor ingresado es: %d", valorMayor);
	}else{
		printf("No se puede determinar el mayor valor\nHay numero iguales");
	};
	printf("\n");
	system("pause");
	
}
