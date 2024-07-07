#include<studio.h>
#include<stdbool.h>
#include<string.h>

int main() {
    int dni,medio_de_pago,tarjetas_habilitadas,i;
    float monto_venta,monto_total_ventas;
    char cliente_habitual,nueva_venta ;
    do
    {
       printf("Ingrese el D.N.I del comprador: ");
        scanf (dni);
     printf("ingrese el monto de la venta: ");
        scanf (monto_venta);
     printf("ingrese el medio de pago : "  " 1. Efectivo " " 2. Debito " " 3. Credito");
        scanf(medio_de_pago);
        swich (medio_de_pago) {
        case 1: (monto_venta = (monto_venta * 0.85) * 1.21);
        case 2: (monto_venta = (monto_venta * 0.90) * 1.21);
        default: (monto_venta = (monto_venta * 1.21));
        };
     printf ("Tarjetas validas para usar: 1.Mastercard 2.Visa 3.American Express");
	    scanf(tarjetas_habilitadas);
	 printf("Es un cliente habitual? : SI/NO");
	    scanf (cliente_habitual);

     printf ("DNI del cliente : " dni);
	    if (medio_de_pago = 1) {
	 prinft( "Medio de pago : EFECTIVO"); }
	    else if (medio_de_pago = 2) {
	 prinft ("Medio de pago : DEBITO");}	
        else {
     prinft ("Medio de pago : CREDITO");
    }
	 prinft ("El total de la venta es : "monto_venta)/n;
    printf("¿Desea ingresar otra venta? SI/NO");
	scanf(nueva_venta);
	i = i + 1;
	monto_total_ventas = monto_total_ventas + monto_venta;
    } while (nueva_venta == "si");
    









return 0 ;      }