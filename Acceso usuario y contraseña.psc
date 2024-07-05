Algoritmo sin_titulo
	Definir usuario,contrasenia,usuario_login,contrasenia_login,acceso_concebido,acceso_denegado Como Caracter
	Definir i Como Entero
	Definir sin_intentos Como Logico
	//inicializacion de variables//
	i = 0
	acceso_concebido = "Se a registrado correctamente. "
	acceso_denegado = "Acceso denegado, se alcanzo el máximo de intentos permitidos"
	usuario = "micael"
	contrasenia = "carina"
	//Comienzo del codigo//
	Mientras i<3 Hacer
		Escribir "Ingrese su usuario. "
		Leer usuario_login
		Escribir "Ingrese su contraseña. "
		Leer contrasenia_login
		Si usuario_login = usuario y contrasenia_login = contrasenia
			Entonces
			Escribir acceso_concebido 
			i = 3
			sin_intentos = Falso
		SiNo
			Escribir "Error usuario o contraseña desconocida. "
			i= i + 1
			sin_intentos = Verdadero
		FinSi
		
	Fin Mientras
	si sin_intentos = Verdadero Entonces
		Escribir 	acceso_denegado
	FinSi

FinAlgoritmo
