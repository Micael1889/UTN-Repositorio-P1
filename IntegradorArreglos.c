#include <stdio.h>
#include <stdlib.h>

void error(); 
void despedida();

int main(){
    char datos_empresa[2][4][25];
    int planta = 2000,administrativo = 1500,vendedor = 1000,eleccion,legajo,encontrado,repetido = 0;
//-------------------------------------------------------- MENU DE OPCIONES ---------------------------------------------------------------------------------//
     printf("Bienvenido\n");
do {
do{ printf("-Lista de opciones- \n 1_Cargar empleados. \n 2_Mostrar empleados.\n 3_Mostrar el sueldo de un empleado. \n 4_Modificar la categoria de un empleado. \n 5_Salir. \n Digite su eleccion : ");
    scanf("%d",&eleccion);
    //validacion.
    if(eleccion > 5 || eleccion < 1){error();}
}while( eleccion > 5 || eleccion < 1);
//---------------------------------------------------------- OPCIONES CON SUS FUNCIONES ---------------------------------------------------------------------//

    switch(eleccion)
    {case 1:
            for (int i = 0; i < 2; i++)
        {   // -- Numero de empleado ---
            printf("Empleado %d\n",i+1);
            // --- Columna 1 ------------
             printf("Ingrese el nombre del empleado :");
            scanf("%s", datos_empresa[i][0]);
            //---- Columna 2 ----
         do{do{ repetido = 0;
                printf("Ingrese el legajo : ");
                scanf("%s", datos_empresa[i][1]);
            for (int iter = 0; iter < 2; iter++)
            { if (atoi(datos_empresa[i][1]) == atoi(datos_empresa[iter][1])) {repetido++;}}
                if (repetido > 1)
                {printf("Error, el legajo ingresado tiene coincidencia con uno de la base de datos.\nReintente con otro legajo.\n"); }              
            } while (repetido > 1);
            //validacion.
            if (atoi(datos_empresa[i][1]) > 99999 || atoi(datos_empresa[i][1]) < 10000) {error();}
            } while (atoi(datos_empresa[i][1]) > 99999 || atoi(datos_empresa[i][1]) < 10000);
            // --- Columna 3 ------
            printf("Ingrese las horas trabajadas: ");
            scanf("%s", datos_empresa[i][2]);
            // --- Columna 4 --------
            do{printf("Ingrese la categoria : ");
            scanf("%s", datos_empresa[i][3]);
            //Validacion.
            if (atoi(datos_empresa[i][3]) > 3 || atoi(datos_empresa[i][3]) < 1) {error();}
            } while (atoi(datos_empresa[i][3]) > 3 || atoi(datos_empresa[i][3]) < 1);
        }          
        break;
    case 2:
            for (int i = 0; i < 2; i++)
       {printf("Empleado %d\n",i+1);
        printf("Nombre : %s \n",datos_empresa[i][0]);
        printf("Legajo : %s \n",datos_empresa[i][1]);
        printf("Horas trabajadas : %s\n",datos_empresa[i][2]);
        printf("Categoria : %s\n",datos_empresa[i][3]);}
        break;
    case 3:
     printf("Ingrese el legajo del empleado :");
        scanf("%d", &legajo);

        for (int i = 0; i < 2; i++)
       {if(atoi(datos_empresa[i][1]) == legajo){printf("Empleado %d\n",i+1);
        printf("Nombre : %s\n",datos_empresa[i][0]);
        printf("Legajo : %s\n",datos_empresa[i][1]);
    
        if (atoi(datos_empresa[i][3]) == 1){printf("Sueldo : %d\n",planta*atoi(datos_empresa[i][2]));}
        else if (atoi(datos_empresa[i][3]) == 2){printf("Sueldo : %d\n",administrativo*atoi(datos_empresa[i][2]));}
        else {printf("Sueldo : %d\n",vendedor*atoi(datos_empresa[i][2]));}  
        }}break;
    case 4:
        printf("Ingrese el legajo del empleado :");
        scanf("%d", &legajo);

        for (int i = 0; i < 2; i++){
        if (atoi(datos_empresa[i][1]) == legajo)
        {printf("Ingrese la nueva categoria : ");
         scanf("%s", &datos_empresa[i][3]);
         printf("Dato modificado exitosamente. \n");}     
         } break;
    case 5:
        despedida();
        break;
    default:
        error();
        break; }
}while(eleccion != 5);

system("pause");
return 0;
}


void error(){ printf("Error, por favor digite algo valido.\n");}
void despedida(){printf("Nos vemos, hasta luego.\n");}