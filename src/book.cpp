#include <iostream>

/*using namespace std;
int array01()
{
    int contador = 0;  // Empieza en 10
    string arreglo[5] = {"primer dato", "segundo texto", "88", "titulo", "fin"};
    while (contador < 5)  // Mientras sea menor que 5
    {
        cout << arreglo[contador] << endl;  //IMprimos una casilla del arreglo
        contador++;  // Incrementar el valor de contador en 1 en cada vuelta del bucle.
    }
    system("pause");
}
*/
/* using namespace std: 
*/
/*
using namespace std;

int main()
{
    int contador = 0;
    int arreglo[20]; // Creamos un arreglo de tipo numerico vacio
    while (contador < 20)
    {
        arreglo[contador] = contador+1;
        contador++; 
    }
    contador = 0; // Reseteamos el valor a 0 por que tras el bucle anterior su valor es 20.
    while (contador < 20)
    {
        cout << arreglo[contador] << endl;
        contador++;
    }
    system("pause");
}
*/

using namespace std;
int main()
{
    int contador = 0;
    string arreglo[8] = {"julio", "Luisa perez", "Ana", "Franklin","Mario", "Hubert Blaine Wolfeschlegelsteinhausembergerdorff", "Codigazo", "Noname"};
    string busqueda = "Codigazo"; //En esta variable guardamos el termino que deseamos buscar.
    int encontrado = 0; // Esta variable servira para cambiar su valor a 1 si existe alguna coincidencia.
    while (contador < 8)
    {
        if (arreglo[contador] == busqueda)
        {
            encontrado = 1; //Si algun indice contiene el mismo dato el valor de encontrado cambiara

        }
        contador++;
        if (encontrado == 1)
        {
            cout << "se ha encontrado el nombre" << busqueda << "en la lista" << endl;

        }
        else
        {
            cout << "No se encontraron coincidencias" << endl;
        }    
    }
    system("pause");
}
