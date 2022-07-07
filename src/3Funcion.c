#include <stdio.h>
// Funcion: Tipo de dato (no void) --> int, float, loble long, short, ....
int Suma()
{
    int n1, n2, rta;
    n1 = 10;
    n2 = 23;
    rta =n1 + n2;
    return rta;
}
// Funcion + parametros 
int SumaPara(int n1, int n2)
{
    int rta;
    rta = n1 + n2;
    return rta;
}
// funcin que suma nuemros enteros
int SumaParaShort(int n1, int n2)
{
    // forma corta de sumar sin variobles
    return n1 + n2;
}


void main()
{
    int rta = 0;
    rta = Suma();
    printf("\n La suma es: %d", rta);

    printf("\n ----------------- \n");

    rta = SumaPara(42,52);
    printf("\n La suma es: %d", rta);
   
    printf("\n ----------------- \n");
    printf("\n La suma es: %d", SumaParaShort(42,52) );
}