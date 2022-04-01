
#include "temperatura.h"
#include "tempValidador.h"

float inputFloat(float vMinimo,float vMaximo, char mensaje[]){

    float valor;
    
    printf(mensaje);
    scanf("%f", &valor);
    if( validarRango(valor, vMinimo, vMaximo) >= 0){

        return valor;
    }else{
        return -1;
    }
   
}
