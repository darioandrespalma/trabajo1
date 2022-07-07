#include <stdio.h>
#include <conio.h>
#include <windows.h>
/* Problema 1: Mensaje de que Número1 es divisor de de
Número2 o que Número2 es divisor de
Número1*/

int divisor()
{
    int Numero1 = 0, Numero2 = 0; //declarar variables
    //printf("Problema 2\n");
    printf("Introduzca el primer numero: ");
    scanf("%i", &Numero1); 
    printf("Introduzca el segundo numero: ");
    scanf("%i", &Numero2);
    if (Numero1 > Numero2)
    {
        if (Numero1%Numero2 == 0)
        {
            printf("Numero 2 es divisor de numero 1");
        }
        else
        printf("Numero 2 no es divisor de numero 1");
            
    }
    else
    printf("No es divisor porque numero 2 es mayor que numero 1.");
    
}
/*problema 2: Sobre estruscturas.
Mensaje con los valores de las ternas pitagóricas.
Mensaje con los valores de hipotenusa, opuesto y
adyacente elevados al cuadrado, como
comprobación*/
int valores()
{
    int i, j, k, Sum_Cuadrados, op, ady, hip;
    printf("Ternas Pitagoricas\n");
    for ( i = 1; i <= 5; i++)
    {
        hip = i*i;
        for ( j = 1; j <= 5; j++)
        {
            op = j*j;
            for ( k = 1; k <= 5; k++)
            {
                ady = k*k;
                Sum_Cuadrados = op + ady;
                if (Sum_Cuadrados == hip)
                {
                    printf("\n cateto opuesto = %d,",j);
                    printf("cateto adyacente = %d,",k);
                    printf("\n cateto hipotenusa = %d,",i);
                    printf("\n Comprobacion: %d +%d = %d \n", op, ady, hip);
                }
                
                
            }
            
        }
        
    }
    Sleep(1000);
    return 0;
    

}

void main( )
{
    //divisor();
    valores();
}
