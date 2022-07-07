#include <stdio.h>
#include <stdlib.h>
/*
 *  La funcion getTerminosGenerar debe pedir la cedula y comparar con tu cedula.
 * 	Si la cedula ingresada no es valido debe mostrar un mensaje y abortar/salir de programa,
 *  caso contrario debe mostrar tu nombre y apellido. 
 * 	verificar si el ultimo digito de la cedula ingresada si es par o impar, En el caso de ser 
 *  par mostrar el mensaje "Se ejecutaran las series pares" y si es impar "Se ejecutaran las series impares" 
 *  segun corresponda.
 */

int main()
{
    int usuario, cedula, ultimo, numeros;
    system("cls");
    
    printf("Ingrese el numero de cedula: ");
    scanf("%d",&usuario);
    //printf("Mi numero de cedula es 1729182301");
    cedula = 1729182301;

    if (usuario == cedula)
    {
        printf(" Hola Dario Andres Palma Mera\n");
    }
    else
    {
        printf("no son iguales\n");
    }

    printf("Ingrese el ultimo digito de la cedula: \n");
    scanf("%d",&ultimo);
    numeros = 0, 2, 4, 6, 8;

    if (ultimo != numeros)
    {
        printf("Se ejecutaran las series inpares\n");
    }
    else
    {
        printf("Se ejecutaran las series pares\n");
    }
    system("PAUSE");  


}
//-----------------------------------------------------------------------------------------------------
/*
int main()
{
    int ultimo, numeros, cedula;
    
    printf("Ingrese el ultimo digito de la cedula: ");
    scanf("%d",&ultimo);
    //printf("Mi numero de cedula es 1729182301");
    //cedula = 1729182301;
    numeros = 0, 2, 4, 6, 8;

    if (ultimo == numeros)
    {
        printf("Se ejecutaran las series pares");
    }
    else
    {
        printf("Se ejecutaran las series impares");
    }
}*/