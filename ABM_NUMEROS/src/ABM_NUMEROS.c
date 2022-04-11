/*
 ============================================================================
 Name        : ABM_NUMEROS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "./mis_funciones_c/utn.h"
#define LEN 3

int main(void) {
	
	int arrNumeros[LEN];
	int respuesta;
	int pos;
	int numero;
	int flagMenu = 1;
	int opcion;
	int eliminado = -1;
	setbuf(stdout,NULL);
	utn_inicializarArrNumero(arrNumeros, LEN);
	do{
		system("cls");
		utn_inputTypeInt(&opcion, "Ingrese opcion: ", "Error, opcion fuera de rango\n", 1, 4, 2);
		respuesta = utn_posLibreArr(arrNumeros, LEN);
		
		switch (opcion)
		{
		case 1:
			system("cls");
			if(respuesta >= 0){
				pos = respuesta;
				printf("Cargar numero...\n");
				utn_inputTypeInt(&numero, "Ingrese un numero: ", "Error, no es un numero\n", 1, 500, 2);
				arrNumeros[pos] = numero;
				system("pause");

			}else{
				printf("No hay mas lugar en el array");
			}
			break;
		case 2:
			system("cls");
			printf("Editando...\n");
			utn_listarInt(arrNumeros, LEN);
			utn_inputTypeInt(&numero, "Que numero quiere cambiar?: ", "Error, no es un numero\n", 1, 500, 2);
			 respuesta = utn_findArrNumber(arrNumeros, LEN, numero);
			 if(respuesta >= 0){
				pos = respuesta;
				utn_inputTypeInt(&numero, "Nuevo numero: ", "Error, no es un numero\n", 1, 500, 2);
				arrNumeros[pos] = numero;
				system("pause");
			 }
			break;
		case 3:
			printf("Eliminando...\n");

			utn_listarInt(arrNumeros, LEN);
			utn_inputTypeInt(&numero, "Que numero quiere Eliminar?", "Error, no es un numero\n", 1, 500, 2);
			 respuesta = utn_findArrNumber(arrNumeros, LEN, numero);
			 if(respuesta >= 0){
				pos = respuesta;
				arrNumeros[pos] = eliminado;
				printf("Numero Eliminado\n");
				system("pause");
			 }
			break;
		case 4:
			printf("Listando...\n");
			utn_listarInt(arrNumeros, LEN);
			break;
		case 5:
			printf("saliendo de la app...\n");
			flagMenu = 0;
			break;
		default:
			break;
		}
		system("pause");

	}while( flagMenu != 0);

	return EXIT_SUCCESS;
}
