Proceso sin_titulo
	Definir numero_factorial Como Entero
	Definir numero_final como Entero
	numero_final = 1
	Escribir "Ingresar un digito factorial. "
	Leer numero_factorial
	Repetir
		numero_final= numero_final * numero_factorial
		numero_factorial= numero_factorial - 1
	Hasta Que numero_factorial = 0
	Escribir "El total de factorizar el numero es: " numero_final
FinProceso
