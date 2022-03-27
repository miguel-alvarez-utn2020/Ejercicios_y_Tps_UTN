/*
 ============================================================================
 Name        : ejercicio2_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define CANTIDAD_PETICIONES 10

int main(void) {

	setbuf(stdout, NULL);

	int acumuladorPositivos = 0;
	int cantidadPares 		= 0;
	int cantidadInpares     = 0;
	bool flagValorMinimo 	= true;
	bool flagParMaximo 		= true;
	int valorMinimo			= 0;
	int valorParMaximo      = 0;
	int productoNegativos   = 1;
	int valor;
	int i;
	
	system("cls");
	printf("App Ejercicio 2_2\nIntroduce %d valores\n", CANTIDAD_PETICIONES);
	system("pause");
	for(i = 1; i <= CANTIDAD_PETICIONES; i++){
		system("cls");
		
		//Valida el mayor a cero
		do
		{
			printf("Ingrese el valor %d: ",i);
			scanf("%d", &valor);
			if(valor == 0){
				printf("El valor ingresado debe ser distinto de cero\n");
			};
			
		} while (valor == 0);
		
		//Numeros pares, y mayor numero par ingresado;
		if(valor % 2 == 0){
			cantidadPares ++;
			if(flagParMaximo){
				valorParMaximo = valor;
				flagParMaximo = false;
			}else{
				if(valor > valorParMaximo){
					valorParMaximo = valor;
				}
			}
		}else{
			cantidadInpares ++;
		}
		//Valor minimo ingresado
		if(flagValorMinimo){
			valorMinimo = valor;
			flagValorMinimo = false;
		}else{
			if(valor < valorMinimo){
				valorMinimo = valor;
			}
		}
		//Suma de positivos
		if(valor > 0){
			acumuladorPositivos += valor;
		}
		//Producto de numeros negativos
		if(valor < 0){
			productoNegativos = productoNegativos * valor;
		}
		
	}
	
	system("cls");
	printf("Cantidad de numeros pares: %d\n", cantidadPares);

	printf("Cantidad de numeros Inpares: %d\n", cantidadInpares);
	
	printf("El valor minimo ingresado es: %d\n", valorMinimo);
	
	printf("El valor PAR maximo ingresado es: %d\n", valorParMaximo);
	
	printf("La suma de los valores positivos es: %d\n", acumuladorPositivos);
	
	if(productoNegativos != 1){
		printf("El producto de los numeros negativos es: %d\n", productoNegativos);
		
	}
	system("pause");
}
