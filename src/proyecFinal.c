#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../lib/JeffTools.h"

void main()
{
    int positionUserFree;
    float deposito;
    system("cls");
    HEADER();
    printf("\nInicio / Iniciar Sesion\n");
    printf("\nInicio / Operaciones\n");
    printf("\nUsuario/Inicio/Deposito\n");
    printf("\nInicio / Crear usuario\n");
    printf("\nInicio / Crear Usuario / Resumen\n");
    


    printf("\nInicio / Iniciar Sesion\n");
    printf("\nInicio / Operaciones\n");
    printf("\nUsuario/Inicio/Deposito\n");
    printf("\nInicio / Crear usuario\n");
    printf("\nInicio / Crear Usuario / Resumen\n");
	printf("\nREALIZAR DEPOSITO\n");
	printf("-----------------\n\n");

    printf("Ingrese Numero de Cuenta: \n");
    scanf("%f",&usuarios[5].ID); 
    printf("dinero a ingresar: \n");
    scanf("%f", &deposito);
    usuarios[5].cash += deposito;
    printf("dinero $%.2f", usuarios[5].cash);
    printf("\nEl deposito se realizo correctamente.\n");
    

    /*
    if (usuarios[5].ID == usuarios[positionUserFree].ID)
    {
        printf("dinero a ingresar: \n");
        scanf("%f", &deposito);
        usuarios[5].cash += deposito;
        printf("dinero $%.2f", usuarios[5].cash);
        printf("\nEl deposito se realizo correctamente.\n");

    }
    else
    {
        if (usuarios[5].ID != usuarios[positionUserFree].ID)
        {
            printf("\nNumero de Cuenta no existe.\n");
        }
        
    }
    */
    
}



    


	