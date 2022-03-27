/*
 ============================================================================
 Name        : ejercicio4_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int inputNumers(int vMinimo, int vMaximo);
#define V_MINIMO 1
#define V_MAXIMO 10

int main(void) {
	setbuf(stdout, NULL);
	int valor;
	int factorial = 0;
	int valorFactorialInicial;
	int i;
	int flag = true;

	system("cls");
	printf("App Ejercicio 4_1\n");
	printf("Ingrese un valor entre %d y %d\npara sacar el factorial\n",V_MINIMO,V_MAXIMO);
	valor = inputNumers(V_MINIMO, V_MAXIMO);
	valorFactorialInicial = valor;
	factorial = valor;
	if(valor != 0){
		for(i = 1; i < valor ; i++){
			factorial = factorial * i;
			if(flag){
				printf("%d! = %d * ",valorFactorialInicial, i);
				flag = false;
			}else{
				if(i < valor -1){
					printf("%d * ", i);
				}
				if(i == valor -1){
					printf("%d * %d = %d", i, valorFactorialInicial,factorial);
				}
			}
		}
	}else{
		printf("Error, el valor no puede ser 0\n");
	}

	return 0;
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