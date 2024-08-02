#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,suma;
    suma = 0;
    float promedio;
 	promedio = 0;
/*Entry of the required data - Entrada de los datos necesarios*/
    printf("Ingrese el primer numero : \n");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero : \n");
    scanf("%d",&n2);
    printf("Ingrese el tercer numero : \n");
    scanf("%d",&n3);
    printf("Ingrese el cuarto numero : \n");
    scanf("%d",&n4);
    printf("Ingrese el quinto numero : \n");
    scanf("%d",&n5);

/*Output formulas - Formulas de las salidas */
suma = (n1 + n2 + n3 + n4 + n5);
promedio = (n1 + n2 + n3 + n4 + n5)/ 5;
/* Output of the requested data - Salida de los datos solicitados*/
    printf("La suma de los numeros es :%d \n",suma);
    printf("El promedio de los numeros es :%f \n",promedio);
    return 0;
