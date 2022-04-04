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

#endif /* UTN_H_ */
