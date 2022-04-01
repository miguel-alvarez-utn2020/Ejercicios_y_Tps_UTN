/*
 ============================================================================
 Name        : ejercicio4_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "temperatura.c"
#include "tempValidador.c"
#include "tempComversor.c"
int forEach(int num[], int (*op)(int));
int mostrarInt(int num);
void funcion( void *num);
#define G_CELSIUS_MIN 0
#define G_FAHRENHEIT_MAX 212

int main(void) {
	setbuf(stdout, NULL);
	system("cls");
	float temperatura;

	temperatura = inputFloat(G_CELSIUS_MIN, G_FAHRENHEIT_MAX, "Temperatura: ");
	if(temperatura >= 0){
		if(temperatura >= 0 && temperatura <= 100){
			printf("La temperatura en Celsius es: %.1f\n", temperatura);
			temperatura = celsiusToFahrenheit(temperatura);
			printf("La temperatura en Fahrenheit es: %.1f\n", temperatura);
		}else{
			printf("La temperatura en Fahrenheit es: %.1f\n", temperatura);
			temperatura = fahrenheitToCelsius(temperatura);
			printf("La temperatura en Celsius es: %.1f\n", temperatura);
		}
	}else{
		printf("Error, Valor fuera de rango\n");
	}



}



