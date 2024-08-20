Proceso sin_titulo
	//Inicializando variables //
	Definir  dni,medio_de_pago,tarjetas_habilitadas,i Como Entero
	Definir monto_venta,monto_total_ventas Como Real
	Definir cliente_habitual Como Caracter
	Definir nueva_venta Como Caracter
	i=0
	//Inicio del codigo //
	Repetir
	Escribir "Ingrese el D.N.I del comprador: "
	Leer dni
	Escribir "ingrese el monto de la venta: "
	Leer monto_venta
	Escribir "ingrese el medio de pago : "  " 1. Efectivo " " 2. Debito " " 3. Credito"
	Leer medio_de_pago
	Segun medio_de_pago Hacer
		1: monto_venta = (monto_venta * 0.85) * 1.21
			
		2:monto_venta = (monto_venta * 0.90) * 1.21
			
		3:monto_venta = (monto_venta * 1.21)
	FinSegun
	Escribir "Tarjetas validas para usar: 1.Mastercard 2.Visa 3.American Express"
	Leer tarjetas_habilitadas
	Escribir "Es un cliente habitual? : SI/NO"
	Leer cliente_habitual
	
	Escribir "DNI del cliente : ",dni
	si medio_de_pago = 1 Entonces
		Escribir "Medio de pago : EFECTIVO"
	SiNo
		si medio_de_pago = 2 Entonces
			Escribir "Medio de pago : DEBITO"	
		SiNo
			Escribir "Medio de pago : CREDITO"
		FinSi
	FinSi
	Escribir "El total de la venta es : ",monto_venta
	
	//Finalizando algoritmo // 
	Escribir "¿Desea ingresar otra venta? SI/NO"
	Leer nueva_venta
	i = i + 1
	monto_total_ventas = monto_total_ventas + monto_venta
Hasta Que nueva_venta = "no"
//Mostrando cantidad y volumen de ventas //
	Escribir "La cantidad de ventas del dia fueron : ", i
	Escribir "El total de dinero recaudado fue : ",monto_total_ventas
FinProceso
