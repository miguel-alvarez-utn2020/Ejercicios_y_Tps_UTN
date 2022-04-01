/*
 ============================================================================
 Name        : ejercicio3_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int inputNumers();
int sumar1(int, int);
int sumar2(void);
void  sumar3(int, int);
void sumar4(void);

int main(void) {
	//primer prototipo
	int resultadoProto;
	
	int valor1;
	int valor2;
	setbuf(stdout, NULL);
	system("cls");
	printf("App Ejercicio 3_5\n");
	printf("Sumar 1 \n\n");

	valor1 = inputNumers();
	valor2 = inputNumers();

	resultadoProto = sumar1(valor1, valor2);
	printf("El resultado del prototipo 1 es: %d\n", resultadoProto);
	system("pause");

	//segundo prototipo
	system("cls");
	printf("Sumar 2 \n\n");
	resultadoProto = sumar2();
	printf("El resultado del prototipo 2 es: %d\n", resultadoProto);
	system("pause");

	//tercer prototipo
	system("cls");
	printf("Sumar 3 \n\n");
	valor1 = inputNumers();
	valor2 = inputNumers();

	sumar3(valor1, valor2);
	system("pause");

	//cuarto prototipo
	sumar4();

	return 0;
}

int sumar1(int valor1, int valor2){

	return valor1 + valor2;

}

int sumar2(void){

	int valor1;
	int valor2;
	printf("Ingrese un numero: ");
	scanf("%d", &valor1);
	printf("Ingrese un numero: ");
	scanf("%d", &valor2);
	
	return valor1 + valor2;

}

void  sumar3(int valor1, int valor2){

	int resultado;

	resultado = valor1 + valor2;

	printf("El resultado del prototipo 3 es: %d\n", resultado);

}

void sumar4(void){

	int valor1;
	int valor2;
	int resultado;
	system("cls");
	printf("Sumar 4 \n\n");

	printf("Ingrese un numero: ");
	scanf("%d", &valor1);
	printf("Ingrese un numero: ");
	scanf("%d", &valor2);
	resultado = valor1 + valor2;
	printf("El resultado del prototipo 4 es: %d\n", resultado);
	system("pause");


}


int inputNumers(){

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	return numero;
}
