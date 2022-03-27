/*
 ============================================================================
 Name        : ejercicio1_3.c
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
	int valorDelMedio;	

	printf("App Ejercicio 1_3\n");
	printf("Ingresa 3 valores\n");
	printf("Valor 1: ");
	scanf("%d", &valor1);
	printf("Valor 2: ");
	scanf("%d", &valor2);
	printf("Valor 3: ");
	scanf("%d", &valor3);

	if(valor1 != valor2 && valor1 != valor3 && valor2 != valor3){

		if((valor1 > valor2 && valor1 < valor3 )|| (valor1 < valor2 && valor1 > valor3)){
			valorDelMedio = valor1;
			
		}else{
			if((valor2 > valor1 && valor2 < valor3) || (valor2 < valor1 && valor2 > valor3)){
				valorDelMedio = valor2;
			}else{
				valorDelMedio = valor3;
			}	
		}

		printf("El valor del medio ingresado es: %d", valorDelMedio);
	}else{
		printf("No se puede determinar el valor del medio\nHay numero iguales");
	};
	printf("\n");
	system("pause");

}
