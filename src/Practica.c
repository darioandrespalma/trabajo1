#include <stdio.h>  

int main()
{
    int carreraescogida=0;
    char selecionar[10];
    char *carreraselecionada[5];
    char *carreras[] = {"ingenieria","musica","teatro","enfermeria","danza"};
    printf("\n\n Selecionar la cerrera de su eleccion: ");
    for (int indice = 0; indice < 5; indice++)
    {
        printf("\n %i. %s ",indice+1, carreras[indice]);
    }
    printf("\n\n Escribe tus opciones: ");
    fgets(selecionar, 10, stdin);

    printf("\n\n UD. selecciono: %s ", selecionar);

    for (int i = 0; i < 10; i++)
    {
        if (selecionar[i] == '1')
        {
            carreraselecionada [carreraescogida++] = carreras[0];
        }
        if (selecionar[i] == '2')
        {
            carreraselecionada [carreraescogida++] = carreras[1];
        }
        if (selecionar[i] == '3')
        {
            carreraselecionada [carreraescogida++] = carreras[2];
        }
        if (selecionar[i] == '4')
        {
            carreraselecionada [carreraescogida++] = carreras[3];
        }
        if (selecionar[i] == '5')
        {
            carreraselecionada [carreraescogida++] = carreras[4];
        }
        switch (selecionar[i])
        {
            case '1' : carreraselecionada [carreraescogida++] = carreras[0]; break;
            case '2' : carreraselecionada [carreraescogida++] = carreras[1]; break;
            case '3' : carreraselecionada [carreraescogida++] = carreras[2]; break;
            case '4' : carreraselecionada [carreraescogida++] = carreras[3]; break;
            case '5' : carreraselecionada [carreraescogida++] = carreras[4]; break;  
         
        }
    }
    
    printf("\n\n UD. seleciono %i careras : %s \n", carreraescogida, selecionar);
    for (int i = 0; i < carreraescogida; i++)
    {
        printf("%s ", carreraselecionada[i]);
    }
    return 0;
    
}