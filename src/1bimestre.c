// Solución práctica para los ejercicios de programación en lenguaje C
// Planteamiento del ejercicio:
// algoritmo que lee dos números y dice cuál es el mayor o si son iguales
// la solución del ejercicio y práctica a continuación
// Inclusión de las librerias necesarias para el programa
#include <stdio.h>
#include <stdlib.h>
// Funcion principal del programa
int main(int argc, char *argv[])
{
    // Declaración de las variables a utilizar por el programa
    // la forma de declarar una variable es utilizando la siguiente
    // sintaxis: TipoVariable NombreVariable[=ValorInicial];
    
    int Numero1=0;
    int Numero2=0;
    
    // Solicitud de los numeros por pantalla utilizando para realizar
    // esta acción dos ordenes printf para visualizar los mensajes de 
    // peticion y scanf para solicitar los contenidos de las variables
    
    printf("\nTeclee No. 1 : ");
    scanf(" %d",&Numero1);
    printf("Teclee No. 2 : ");
    scanf(" %d",&Numero2);
    
    // Comparación de las variables para saber cual es la mayor
    // utilizando para ello la orden si condicional ( if )
    
    if (Numero1>Numero2) {
       printf("\nEl No.1 es mayor que el No. 2");
    } else if (Numero2>Numero1) {
       printf("\nEl No.2 es mayor que el No. 1");
    } else {
       printf("Son iguales");
    }
    
    // Se realiza una pausa en pantalla
  system("PAUSE");  
  return 0;
  
}