Proceso sin_titulo
	Definir peso_ingresado_en_kg Como Real
	Definir tipo_de_conversion Como Entero
	Definir peso_en_libras Como Real
	Definir peso_en_onzas Como Real
	Definir peso_en_gramos Como Real
	Definir peso_en_toneladas Como Real
	Escribir "Ingrese el peso en kg: "
	Leer peso_ingresado_en_kg
	Escribir "Opciones de conversion: 1_Onzas. 2_Toneladas. 3_Gramos. 4_Libras. "
	Leer tipo_de_conversion
	Segun tipo_de_conversion Hacer
		1: peso_en_onzas = peso_ingresado_en_kg * 35
			Escribir "La cantidad ingresada en onzas es: ",peso_en_onzas
		2:
			peso_en_toneladas = peso_ingresado_en_kg / 1000
			Escribir "La cantidad ingresada en toneladas es: ",peso_en_toneladas
		3:
			peso_en_gramos = peso_ingresado_en_kg * 1000
			Escribir "La cantidad ingresada en gramos es: " peso_en_gramos
		4:
			peso_en_libras = peso_ingresado_en_kg * 2.2
			Escribir "La cantidad ingresada en libras es: " peso_en_libras
		
	Fin Segun
FinProceso



