Algoritmo sin_titulo
	Definir tipo_de_bomba Como Entero
	
	Escribir "Ingrese el numero del tipo de bomba que busca: "
	Leer tipo_de_bomba
	Segun tipo_de_bomba Hacer
		0: Escribir "No hay establecido un valor definido para el tipo de bomba "
			
		1: Escribir "Es una bomba centr�fuga"
			
		2: Escribir "Es una bomba de alta presi�n"
			
		3: Escribir "Es una bomba neum�tica"
			
		4: Escribir "Es una bomba sumergible"
		De Otro Modo:
			Escribir "No existe un valor v�lido para tipo de bomba. "
	Fin Segun
FinAlgoritmo
