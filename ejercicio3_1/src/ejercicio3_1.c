/*
 ============================================================================
 Name        : ejercicio3_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
void mostrarFlotante(float numero);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float numero = 7.5;

	mostrarFlotante(numero);

}

void mostrarFlotante(float numero){
	printf("El numero flotante es: %.1f", numero);
}
