#include <stdio.h>

int main() 
{
    int nroFrutas=0;
    char seleccion[10];
    char *frutasSeleccionadas[5];
    char *frutas[] = {"pina", "platano", "coco", "fresa","manzana"};
                    //   0         1        2       3         4
    printf("\n\n Selciona las frutas para tu ensalada:");
    for (int indice = 0; indice < 5; indice++)    // for: es una instruccion sencilla que consiste en utilizar "rangos". //
    {
        printf("\n %i, %s ",indice+1, frutas[indice]);  
    }
    printf("\n\n Escribe tus opciones: ");
    fgets(seleccion, 10, stdin);     // fgets: es una funcion que se encarga de leer o almacenar una cadena de caracteres introducidas mediante el teclado.//
    

    for (int i = 0; i < 10; i++)
    {
        if (seleccion[i] =='1')  // if: si se cumple cierta condicion.//
        {
            frutasSeleccionadas [nroFrutas++] = frutas[0];
        }
        if (seleccion[i] =='2')
        {
            frutasSeleccionadas [nroFrutas++] = frutas[1];
        }
        if (seleccion[i] =='3')
        {
            frutasSeleccionadas [nroFrutas++] = frutas[2];
        }
        if (seleccion[i] =='4')
        {
            frutasSeleccionadas [nroFrutas++] = frutas[3];
        }
        if (seleccion[i] =='5')
        {
            frutasSeleccionadas [nroFrutas++] = frutas[4];
        }
           
    }   


    printf("\n\n Ud. selecciono %i frutas: %s \n", nroFrutas, seleccion);
    for (int i = 0; i < nroFrutas; i++)
    {
        printf("%s ", frutasSeleccionadas[i]);
    }
    return 0;
    
                
}