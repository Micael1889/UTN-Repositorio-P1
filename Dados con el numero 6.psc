Algoritmo sin_titulo
	Definir numeros_de_dados,i,numero_de_lanzamiento,cantidad_de_seis Como Entero
	Dimension numeros_de_dados[3] 

	Repetir
		Escribir "Digite de a uno el numero obtenido en cada dado: "
		Leer numeros_de_dados[i]
		i= i + 1
	Mientras Que i<3
	i= 0
	Repetir
		si numeros_de_dados[i] = 6 Entonces
			cantidad_de_seis = cantidad_de_seis + 1
		FinSi
		i= i + 1
	Mientras Que i<3
	i = 0
	segun cantidad_de_seis Hacer
		0: Escribir "PESIMO no consiguio ningun numero seis. "
			
		1: Escribir "Regular consiguio un numero seis. "
			
		2: Escribir "Muy bien consiguio dos numeros seis. "
			
		3: Escribir "Excelente consiguio tres numeros seis. "
		
	FinSegun
FinAlgoritmo
