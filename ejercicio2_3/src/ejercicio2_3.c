/*
 ============================================================================
 Name        : ejercicio2_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define PRECIO_VIAJE 600

int main(void) {
	setbuf(stdout, NULL);
	int numeroCliente;
	int edad ;
	int viudosSesentaMas = 0;
	int clientesSesentaMenos = 0;
	int clientesSesentaMas = 0;
	int precioDescuento;
	char opcion;

	char estadoCivil;
	char genero;

	int numClienteMasJoven;
	int edadChicaMasJoven;
	int chicaMasJoven = 0;
	float termperatura;
	bool registrarCliente = true;
	bool flagChicaMasJoven = true;

	

	do
	{
		system("cls");
		printf("Registrar Cliente Para el viaje:\n\n");

		printf("Ingrese numero de cliente: ");
		scanf("%d", &numeroCliente);
		
		do{

			printf("Edad: ");
			scanf("%d", &edad);
			if(edad < 18){
				printf("Para poder viajar la edad debe ser +18\n");
				printf("Desea seguir con el registro?\n's' o 'n': ");
				fflush(stdin);
				scanf("%c", &opcion);
				if(opcion == 'n'){
					return 0;
				}
			}
		}while( edad < 18);

		do
		{
			printf("Estado Civil:\n's'->Soltero\n'c'->Casado\n'v'->Viudo/a\n:");
			fflush(stdin);
			scanf("%c", &estadoCivil);
			if(estadoCivil != 's'&& estadoCivil != 'c' && estadoCivil != 'v'){
				printf("Error, caracter incorrecto!!\n");
			}
			
		} while (estadoCivil != 's'&& estadoCivil != 'c' && estadoCivil != 'v');
		

		do
		{
			printf("Termperatura corporal: ");
			scanf("%f", &termperatura);
			if(termperatura > 45){
				printf("Error, temperatura invalida, maximo 45g\n");
			}
		} while (termperatura > 45);
		

		do{
			printf("Genero:\n'm'->Masculino\n'f'->Femenino\n'o'->Binario\n:");
			fflush(stdin);
			scanf("%c", &genero);
			if(genero != 'm' && genero != 'f' && genero != 'o'){
				printf("Error, Caracter incorrrecto!");
			}

		}while(genero != 'm' && genero != 'f' && genero != 'o');


		printf("Desea registrar a alguien mas?\n 's' o 'n': ");
		fflush(stdin);
		scanf("%c", &opcion);

		//Cantidad de viudos de mas de 60 años
		if(estadoCivil == 'v' && edad > 60){
			viudosSesentaMas ++;
		}

		if(edad > 60){
			clientesSesentaMas ++;
		}else{
			clientesSesentaMenos ++;
		}

		if(genero == 'f' && estadoCivil == 's'){

			if(flagChicaMasJoven){
				numClienteMasJoven = numeroCliente;
				edadChicaMasJoven = edad;
				chicaMasJoven ++;
			}else{
				if(edad < edadChicaMasJoven){
					edadChicaMasJoven = edad;
					numClienteMasJoven = numeroCliente;
				}
			}
		}

		if(opcion != 'n'){
			registrarCliente = true;
		}else{
			registrarCliente = false;
		}


	} while (registrarCliente);
	

	precioDescuento = PRECIO_VIAJE - (25*PRECIO_VIAJE)/100;

	if(viudosSesentaMas != 0){
		printf("Cantidad de viudos con mas de 60 a%cos: %d", 164, viudosSesentaMas);
	}
	if(chicaMasJoven > 0){
		printf("Nro de cliente %d:: Edad: %d es la soltera mas joven\n", numClienteMasJoven, edadChicaMasJoven);
	}
	printf("Precio del viaje $%d\n", PRECIO_VIAJE);
	if(clientesSesentaMas > clientesSesentaMenos){
		printf("Como hay mas de 50%c de clietes con edad +60\nEl precio del vieja es: %d\n", 37, precioDescuento);
	}


}
