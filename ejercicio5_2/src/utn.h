/*
 * utn.h
 *
 *  Created on: 1 abr. 2022
 *      Author: migue
 */

#ifndef UTN_H_
#define UTN_H_

int utn_inputTypeInt(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
float utn_inputTypeFloat(float* pResultado, char* mensaje, char* msjError, float vMinimo, float vMaximo, int reintentos);
int utn_inputTypeDni(char* pResultado, char* mensaje, char* msjError, int vMinimo, int vMaximo, int reintentos);
int utn_inputTypeText(char* pResultado, char* mensaje, char* msjError, int charsMimino, int charsMaximo, int reintentos);
int reintentos(int reintentos);
void utn_listarInt(int arr[], int size);
int utn_sumarIntArr(int arr[], int size, int* suma);
int utn_cantidadPares(int arr[],int size, int* cantPares);
int utn_cantPositivos(int arr[], int size, int* cantPositivos);
int utn_cantNegativos(int arr[], int size, int* cantNegativos);
void utn_listarParesArr(int arr[], int size);
void utn_listarImparesArr(int arr[], int size);
int utn_mayorInparArr(int arr[], int size, int* mayorImp);
int utn_cargarArrInt(int arr[], 
int size, char* mensaje, char* msjError, int minimo, int maximo, int reintentos, bool automatico);

#endif /* UTN_H_ */
