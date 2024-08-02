#include <stdio.h>

int main(){
    float celcius,farenheit,kelvin;

/*Entry of the required data - Entrada de los datos requeridos*/
    printf("ingrese los grados celsius : ")
    scanf("%f",celcius)

/*Output formuls - Formulas de salida*/
farenheit = celcius * (9/5) + 32
kelvin = celcius + 273.15

/*Output of the requested data - Salida de los datos requeridos*/

    printf("La conversion a grados farenhet es : %f\n",farenheit)
    printf("La conversion a grados kelvin es : %f",kelvin)
    
    return 0;
}



#include <stdio.h>

int main(){
    float celcius,farenheit,kelvin;

/*Entry of the required data - Entrada de los datos requeridos*/
    printf("ingrese los grados celsius : ");
    scanf("%f",&celcius);

/*Output formuls - Formulas de salida*/
farenheit = 1.8 * celcius + 32;
kelvin = celcius + 273.15;

/*Output of the requested data - Salida de los datos requeridos*/

    printf("La conversion a grados farenhet es : %f\n",farenheit);
    printf("La conversion a grados kelvin es : %f",kelvin);
    return 0;
}