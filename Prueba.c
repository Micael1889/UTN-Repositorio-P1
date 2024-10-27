#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define RED     "\x1b[31m" // para errores
#define GREEN   "\x1b[32m" // para datos devueltos por la app
#define YELLOW  "\x1b[33m" // para datos ingresados por el usuario
#define BLUE    "\x1b[34m" // para pedidos de la app
#define RESET   "\x1b[0m"  // volver al defecto
//------------------------------------------------ FUNCIONES MATRICES ----------------------------------------------------
// Función para cargar la matriz
void RecorrerMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf(BLUE "Ingrese el numero de la fila %d columna %d de la matriz: " RESET, i + 1, j + 1);
            printf(YELLOW);
            scanf("%d", &matriz[i][j]);
            printf(RESET);
        }
    }
}

// Función para mostrar la matriz
void MostrarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf(GREEN "%d " RESET, matriz[i][j]);
        }
        printf("\n");
    }
}

// Función auxiliar para pedir un número y verificar
void pedirNumero(int *numero) {
    int resultado;
    do {
        printf(YELLOW);
        resultado = scanf(" %d", numero);
        printf(RESET);
        if (resultado != 1) {
            printf(RED "Entrada no válida. Por favor, ingresa un número.\n" RESET);
            while (getchar() != '\n');
        }
    } while (resultado != 1);
    while (getchar() != '\n');
}

// Función para confirmar si la matriz ingresada es correcta
void ConfirmarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int bien_ingresado;
    do {
        printf(GREEN "Matriz ingresada:\n" RESET);
        MostrarMatriz(filas, columnas, matriz);

        printf(BLUE "¿Está bien ingresada la matriz? (1 = Sí, 2 = No): " RESET);
        pedirNumero(&bien_ingresado);
        if (bien_ingresado == 2) {
            printf(RED "Reingrese la matriz.\n" RESET);
            RecorrerMatriz(filas, columnas, matriz);
        } else if (bien_ingresado != 1 && bien_ingresado != 2) {
            printf(RED "Opción inválida. Por favor ingrese 1 o 2.\n" RESET);
        }
    } while (bien_ingresado != 1);
}

// Función para sumar matrices
void sumaMatriz(int filas, int columnas, int matriz_1[filas][columnas], int matriz_2[filas][columnas], int matriz_final[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz_final[i][j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }
}

// Función para restar matrices
void restarMatriz(int filas, int columnas, int matriz_1[filas][columnas], int matriz_2[filas][columnas], int matriz_final[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz_final[i][j] = matriz_1[i][j] - matriz_2[i][j];
        }
    }
}

// Función para multiplicar matrices
void multiplicarMatrices(int filas1, int columnas1, int matriz_1[filas1][columnas1], int filas2, int columnas2, int matriz_2[filas2][columnas2], int matriz_final[filas1][columnas2]) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matriz_final[i][j] = 0; // Inicialización
            for (int k = 0; k < columnas1; k++) {
                matriz_final[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }
}

// Función para calcular la transpuesta de una matriz
void transpuestaMatriz(int filas, int columnas, int matriz[filas][columnas], int matriz_final[columnas][filas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz_final[j][i] = matriz[i][j];
        }
    }
}
// ------------------------------------------------------ FUNCIONES CAMBIO DE BASE -------------------------------------------------------------------


void binario(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    int bin[32], i = 0;
    while (num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }
    printf("El número en binario es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

void octal(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    int oct[32], i = 0;
    while (num > 0) {
        oct[i++] = num % 8;
        num /= 8;
    }
    printf("El número en octal es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oct[j]);
    }
    printf("\n");
}

void hexadecimal(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }
    int hex[32], i = 0;
    while (num > 0) {
        hex[i++] = num % 16;
        num /= 16;
    }
    printf("El número en hexadecimal es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%X", hex[j]);
    }
    printf("\n");
}

int binarioDecimal(int binario) {
    int decimal = 0, base = 1;
    while (binario > 0) {
        int rem = binario % 10;
        decimal += rem * base;
        base *= 2;
        binario /= 10;
    }
    printf("El número binario en decimal es: %d\n", decimal);
    return decimal;
}

int octalDecimal(int octal) {
    int decimal = 0, base = 1;
    while (octal > 0) {
        int rem = octal % 10;
        decimal += rem * base;
        base *= 8;
        octal /= 10;
    }
    printf("El número octal en decimal es: %d\n", decimal);
    return decimal;
}

int hexaDecimalaDecimal(char hex[]) {
    int decimal = (int)strtol(hex, NULL, 16);
    printf("El número hexadecimal en decimal es: %d\n", decimal);
    return decimal;
}

void hexabinario(int decimal) {
    binario(decimal);
}

void hexaOctal(int decimal) {
    octal(decimal);
}

// --------------------------------------------------- Codigo MAIN -----------------------------------------------------------------


int main() {
    // Variable Matrices.
    int filas, columnas, menu;
    // Variables cambio de base.
    int opcion, numero;
    char hex[25];
    int salirBases = 1;

    //--------------------------------------------------------------------------------------------------------------------------------------//
    printf("Bienvenido, soy una calculadora de matrices y de cambio de base.\n");
    printf("Que funcionalidad desea usar : 1_ Calculadora de matrices 2_ Calculadora de cambio de base.\nDigite su eleccion: ");
    scanf("%d", &menu);
    while(menu!= 1 && menu != 2){
        printf(RED"Valor ingresado incorrecto, volver a ingresar"RESET);
        scanf("%d", &menu);}
    
     if (menu == 1)
     {
        printf(BLUE "Bienvenido a la calculadora de matrices.\n" RESET);

    // Mostrar opciones de operaciones de matrices
    do {
        printf(BLUE "Seleccione una operación:\n");
        printf("1_Suma de matrices\n2_Resta de matrices\n3_Multiplicacion de matrices\n4_Transpuesta de matriz\n Digite su eleccion: " RESET);
        printf(YELLOW);
        scanf("%d", &opcion);
        printf(RESET);
        if (opcion < 1 || opcion > 4) {
            printf(RED "\nError, opcion no valida.\n" RESET);
        }
    } while (opcion < 1 || opcion > 4);

    // Pedir dimensiones de las matrices
    printf(BLUE "Ingrese el número de filas: " RESET);
    scanf("%d", &filas);
    printf(BLUE "Ingrese el número de columnas: " RESET);
    scanf("%d", &columnas);

    int matriz_1[filas][columnas], matriz_2[filas][columnas], matriz_final[filas][columnas];

    // Validar si se necesita una o dos matrices
    if (opcion == 1 || opcion == 2 || opcion == 3) {
        printf(GREEN "Ingrese la primera matriz:\n" RESET);
        RecorrerMatriz(filas, columnas, matriz_1);
        ConfirmarMatriz(filas, columnas, matriz_1); // Confirmación de la primera matriz

        if (opcion != 3) { // Para suma y resta se usan dimensiones iguales
            printf(GREEN "Ingrese la segunda matriz:\n" RESET);
            RecorrerMatriz(filas, columnas, matriz_2);
            ConfirmarMatriz(filas, columnas, matriz_2); // Confirmación de la segunda matriz
        } else { // Multiplicación: solicitar dimensiones de la segunda matriz
            int filas2, columnas2;
             do
             {
                  printf(BLUE "Ingrese la/las fila/s de la segunda matriz:\n" RESET);
             scanf("%d", &filas2);
             printf(BLUE "Ingrese la/las columna/s de la segunda matriz:\n" RESET);
             scanf("%d", &columnas2);
             if (columnas != filas2)
             {
                printf("Error, las matrices solo se pueden multiplicar si la segunda matriz tiene la misma cantidad de filas que columnas la primera matriz.\n");
             }
             } while (columnas != filas2);
            
            int matriz2[filas2][columnas2], matriz_resultante[filas][columnas2];
            printf(GREEN "Ingrese la segunda matriz:\n" RESET);
            RecorrerMatriz(filas2, columnas2, matriz2);
            ConfirmarMatriz(filas2, columnas2, matriz2); // Confirmación de la segunda matriz
            multiplicarMatrices(filas, columnas, matriz_1, filas2, columnas2, matriz2, matriz_resultante);
            printf(GREEN "Matriz resultante de la multiplicación:\n" RESET);
            MostrarMatriz(filas, columnas2, matriz_resultante);
            return 0;
        }
    } else if (opcion == 4) { // Transpuesta de una matriz
        printf(GREEN "Ingrese la matriz:\n" RESET);
        RecorrerMatriz(filas, columnas, matriz_1);
        ConfirmarMatriz(filas, columnas, matriz_1); // Confirmación de la matriz para transposición
        int matriz_transpuesta[columnas][filas];
        transpuestaMatriz(filas, columnas, matriz_1, matriz_transpuesta);
        printf(GREEN "Matriz transpuesta:\n" RESET);
        MostrarMatriz(columnas, filas, matriz_transpuesta);
        return 0;
    }

    // Ejecutar operación seleccionada
    if (opcion == 1) {
        sumaMatriz(filas, columnas, matriz_1, matriz_2, matriz_final);
        printf(GREEN "Matriz resultante de la suma:\n" RESET);
    } else if (opcion == 2) {
        restarMatriz(filas, columnas, matriz_1, matriz_2, matriz_final);
        printf(GREEN "Matriz resultante de la resta:\n" RESET);
    }

    MostrarMatriz(filas, columnas, matriz_final);
     }else{
            do {
        printf(BLUE "Bienvenido al conversor de bases.\n" RESET);
        do{
        printf(BLUE "Qué quieres convertir\n1_Binario\n2_Octal\n3_Decimal\n4_Hexadecimal\nDigite su elección: " RESET);
        pedirNumero(&opcion);
        printf(RESET);
        if (opcion < 1 || opcion > 5)
        {
            printf(RED"Error, ingrese una opcion valida.\n"RESET);
        }
    } while (opcion < 1 || opcion > 5);
        
        if (opcion == 4) {
            printf(BLUE "Ingrese el número hexadecimal: " RESET);
            printf(YELLOW);
            scanf("%s", hex);
            printf(RESET);

            int decimal = hexaDecimalaDecimal(hex);
            printf(GREEN);
            hexabinario(decimal);
            hexaOctal(decimal);
            printf(RESET);

        } else {
            printf(BLUE "Ingrese el número: " RESET);
            pedirNumero(&numero);

            printf(GREEN);
            if (opcion == 1) {
                int decimal = binarioDecimal(numero);
                octal(decimal);
                hexadecimal(decimal);

            } else if (opcion == 2) {
                int decimal = octalDecimal(numero);
                binario(decimal);
                hexadecimal(decimal);

            } else if (opcion == 3) {
                binario(numero);
                octal(numero);
                hexadecimal(numero);
            } else {
                printf(RED "Opción no válida.\n" RESET);
            }
            printf(RESET);
        }

        printf(BLUE "¿Desea salir del convertidor de bases? (0 = Sí, otro número = No): " RESET);
        pedirNumero(&salirBases);

    } while (salirBases != 0); }
     

    return 0;
}
