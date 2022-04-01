#include "temperatura.h"
#include "tempValidador.h"


float validarRango(float valor, float vMinimo, float vMaximo){

    if(valor >= vMinimo && valor <= vMaximo){
        return valor;
    }else{
        return -1;
    }
}