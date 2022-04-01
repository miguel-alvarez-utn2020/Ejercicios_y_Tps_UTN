/*
 ============================================================================
 Name        : ejercicio1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 toupper(letra)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	system("cls");

	int numero1 = 5;
	int numero2 = 4;
	int numero3 = 10;
	int numeroIntermedio;

	if(numero1 != numero2 || numero3 != numero1 || numero2 != numero3 ){
		printf("Son diferentes\n");

		if(numero1 > numero2 && numero1 < numero3){
			numeroIntermedio = numero1;
			printf("EL Numero del medio es: %d", numeroIntermedio);
		}
		else if(numero1 < numero2 && numero1 > numero3){
			numeroIntermedio = numero1;
			printf("El numero del medio es :%d", numeroIntermedio);
		}


	}else{

		printf("Hay repetidos");
	}

	return 0;
}
