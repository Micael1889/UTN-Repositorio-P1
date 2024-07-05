Algoritmo sin_titulo
	// Inicializacion de variables//
	Definir nombres_alumnos Como Cadena
	Definir notas_alumnos, promedio_de_cada_alumno,promedio_mas_alto Como Real
	Definir i, numero_de_nota, nombre_promedio_mas_alto Como Entero
	Dimensionar nombres_alumnos(30)
	Dimensionar notas_alumnos(30,4)
	Dimensionar promedio_de_cada_alumno(30)
	i <- 0
	numero_de_nota <- 0
	// Inicio del codigo//
	// Lectura de nombres de alumnos y sus cuatro respectivas notas//
	Mientras i<31 Hacer
		Escribir 'Digite el nombre del alumno'
		Leer nombres_alumnos[i]
		Repetir
			Escribir 'Digite la nota numero ', (numero_de_nota+1)
			Leer notas_alumnos[i,numero_de_nota]
			numero_de_nota <- numero_de_nota+1
		Mientras Que numero_de_nota<4
		numero_de_nota <- 0
		i <- i+1
	FinMientras
	// Cierre de la lectura de nombres y notas//
	// Calculo promedios de cada alumno//
	i <- 0
	Repetir
		promedio_de_cada_alumno[i] <- (notas_alumnos[i,numero_de_nota]+notas_alumnos[i,numero_de_nota+1]+notas_alumnos[i,numero_de_nota+2]+notas_alumnos[i,numero_de_nota+3]) /4
		i <- i+1
	Mientras Que i<31
	// Termino de calcular promedios//
	// Informo el mayor promedio con su nombre correspondiente//
	i <- 0
	Repetir
		
		Si promedio_de_cada_alumno[i]<=promedio_de_cada_alumno[i+1] Entonces
			promedio_mas_alto <- promedio_de_cada_alumno[i + 1]
			nombre_promedio_mas_alto <- i+ 1
		SiNo
			promedio_mas_alto = promedio_de_cada_alumno[i]
			nombre_promedio_mas_alto <- i
		finsi
		i = i + 1
	Mientras Que i<30
	Escribir 'El alumno con el promedio mas alto es: ', nombres_alumnos[nombre_promedio_mas_alto], ' con un promedio de ', promedio_mas_alto
FinAlgoritmo