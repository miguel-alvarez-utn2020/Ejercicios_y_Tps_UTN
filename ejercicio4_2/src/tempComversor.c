#include "tempComversor.h"
#define F_FAHRENHEIT 9/5+32
#define F_CELSIUS 5/9

float celsiusToFahrenheit( float temp ){

    float fahrenheit;

    fahrenheit = temp * F_FAHRENHEIT;

    return fahrenheit;

}

float fahrenheitToCelsius( float temp ){

    float celsius;

    celsius = (temp -32) * F_CELSIUS;

    return celsius;

}