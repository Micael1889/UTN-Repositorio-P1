#include <stdio.h>

int main(){
    float radio,pi,area,circunferencia;
    pi = 3.14159;
    printf("Ingrese el radio del circulo : ");
    scanf("%f",&radio);

    area = pi * (radio*radio) ;
    circunferencia = 2 * pi * radio;

    printf("El area del circulo es : %f\n",area);
    printf("LA circunferencia es : %f\n",circunferencia);
return 0;

}