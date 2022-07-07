#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>
#include "../lib/JeffTools.h"

const int DELAY = 1000; // Tiempo de espera
char EnterOrExit;
int positionUserFree; // indica la posicion de usuario
int

    // BUSCA POSITION LIBRE PARA CREAR NUEVO USUARIO
    void
    searchPositionFree()
{
    for (int i = 0; i < 100; i++)
        if (usuarios[i].user[0] == '\0')
        {
            positionUserFree = i;
            break;
        }
}

// CREAR NUEVO USUARIO
void createNewUser()
{
    HEADER();
    searchPositionFree(); // ESPACIO PARA NUEVO USUARIO
    // NEW USER
    // do
    // {
    printf("soy la posicion %d y estoy vacia", positionUserFree); // revisar la posición vacia
    // printf("\nCARGANDO REGISTRO...POR FAVOR ESPERE\n");
    // showBarrRotate(3);

    // GUARDAMOS EL NOMBRE
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf("\n COMPLETE LOS SIGUIENTES CAMPOS - COMPLETE THE FOLLOWING FIELDS\n");
    printf("\n Nombre - Name:\t\t");
    scanf("%s", &usuarios[positionUserFree].user);
    // GUARDAMOS LA CONSTRASEÑA
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Contrasena - Password:\t\t");
    scanf("%s", &usuarios[positionUserFree].password);
    // GUARDAMOS EMAIL
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Correo - Email:\t\t");
    scanf("%s", &usuarios[positionUserFree].email);
    // GUARDAMOS PAIS
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Pais - Country:\t\t");
    scanf("%s", &usuarios[positionUserFree].county);
    // GUARDAMOS CIUDAD
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Ciudad - City:\t\t");
    scanf("%s", &usuarios[positionUserFree].city);
    // GUARDAMOS TELEFONO
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Telefono - Phone number:\t\t0");
    scanf("%s", &usuarios[positionUserFree].phoneNumber);
    // GUARDAMOS IDENTIFICACION
    fflush(stdin); // LIMPIA EL BUFFER - si no, no permite ingresar a nombre, salta a contrasenia
    printf(" Pasaporte - Passport:\t\t");
    scanf("%s", &usuarios[positionUserFree].identificationCard);
    // ASIGNAR UN ID UNICO
    int ID_Unico = rand() % (maxID - minID + 1) + minID; // ID de 6 cifras
    for (int i = 0; i < positionUserFree; i++)           // BUSCAR TODOS LOS ID - aseguramos todos los anteriores ID son !=
    {
        if (ID_Unico == usuarios[i].ID) // ¿Hay usuario con mismo ID?
        {
            while (ID_Unico == usuarios[i].ID)                   // Cambia numero hasta que sea diferente
                ID_Unico = rand() % (maxID - minID + 1) + minID; // ID NO SE REPITE

            i = -1; // SUPER IMPORTANTE, volvemos a pregunta desde el principio ¿Hay usuario con mismo ID?
        }
    }
    usuarios[positionUserFree].ID = ID_Unico;
    /*TENER ID UNICO*/
    // d  (a   a)  a→ c  →→→  d (a != c) → unico
    // d  (a   a)  a→ d  →→→  d (a != d) → unico  PERO  d == d
}

// ID DE USUARIO QUE INICIA SESION
int userLogin()
{
}

// BUSCAR USUARIO EN BASE DE DATOS <jeffTool.h>
void searchUser()
{
    int searchID;              // guardaremos lo que ingrese por consola
    bool flagFindUser = false; // ayuda para indicar que se ha encontrado el usuario solicitado
    flagFindUser = false;      // reiniciar para buscar en cada iteracion
    // do
    // {
    system("cls");
    HEADER();
    printf("\n Por favor, ingrese el ID para buscarlo en la base de datos: ");
    scanf("%i", &searchID);
    printf(" BUSCANDO...POR FAVOR ESPERE\n");
    // showBarrRotate(3);
    for (int i = 0; i < 100; i++)
        if (searchID == usuarios[i].ID)
        {
            system("cls");
            HEADER();
            printf(" \nESTADO DE CUENTA\n\n"
                   " Codigo Unico / ID:\t\t%-d\n"
                   " Usuario / User:\t\t%-s\n"
                   " Correo / Email:\t\t%-s\n"
                   " Identificacion:\t\t%-s\n"
                   " Pais / Country:\t\t%-s\n"
                   " Ciudad / City:\t\t\t%-s\n"
                   " Telefono / Phone:\t\t0%-s\n"
                   " Saldo / Balance:\t\t$ %-.2f\n",
                   usuarios[i].ID, usuarios[i].user, usuarios[i].email, usuarios[i].identificationCard, usuarios[i].county, usuarios[i].city, usuarios[i].phoneNumber, usuarios[i].cash);
            printf("-------------------------------------------------------------------------------\n");
            flagFindUser = true; // Encontre user
            break;
        }

    if (flagFindUser != true)
    {
        system("cls");
        HEADER();
        printf("\n\n El usuario '%d' no se encuentra registrado en la base de datos.\n"
               " Revise e intentelo nuevamente.\n\n",
               searchID);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Rutina Principal
void main()
{
    srand(time(NULL)); // Semilla numero aleatorio
    getch();
    inicioAnimacion();
    do
    {
        system("cls");
        inicio();
        scanf("%c", &EnterOrExit);

        if (EnterOrExit == '1') // INCIAR SESION
        {

            // JHOELLLLLLLL

            if (true) // SI ES QUE INICIA SESSION MOSTRAR OPERACIONES
            {
                do
                {
                    system("cls");
                    HEADER();
                    printf("\n\t\t\t\tW E L C O M E   B A C K:\n");
                    printf("\n Lista de opciones\n"
                           "\n 1. Realizar Desposito"
                           "\n 2. Realizar Trasaccion"
                           "\n 3. Ralizar Retiro"
                           "\n\n 0. Salir");

                    printf("\n\n Ingrese una opcion: ");
                    scanf("%s", &EnterOrExit);
                    int Option = EnterOrExit - '0'; // CHAR TO INT
                    switch (Option)
                    {
                    case 1:
                        // DARÍOOOOOO
                        break;
                    case 2:

                        break;
                    default:
                        printf("\n\n La operacion indicada, no existe.\n");
                        break;
                    }
                } while (EnterOrExit != '0');
                EnterOrExit = 'a'; // SALIR AL MENU PRINCIPAL
            }
            else
            {
                // SI NO INICIA SESION QUE HACE????? JOEELLLLLL
            }
        }
        if (EnterOrExit == '2') // CREAR CUENTA
        {
            system("cls");
            createNewUser();
            printf("\n\n Confirmacion de Registro de Cuenta: \n"
                   " Presione '0' para confirmar \n"
                   " Presione cualquier tecla para salir: ");
            fflush(stdin);
            scanf("%s", &EnterOrExit);

            if (EnterOrExit == '0') // GUARDAR USUARIO
            {
                system("cls");
                HEADER();
                printf("\n VALIDANDO DATOS...\n");
                // showBarrRotate(30);

                system("cls");
                HEADER();
                printf(" soy la posicion %d y estoy llena", positionUserFree); // revisar la posición vacia
                printf("\n REGISTRO COMPLETO\n");
                printf("\n Resumen breve\n");
                printf("\n Codigo Unico:\t\t%-d", usuarios[positionUserFree].ID);
                printf("\n Nombre:\t\t%-s", usuarios[positionUserFree].user);
                printf("\n Correo:\t\t%-s", usuarios[positionUserFree].email);

                printf("\n\n Nota: Guardar su user ID (codigo unico).\n Porque todas las transacciones se realizaran con este codigo\n");
                getch();
                EnterOrExit = 'a'; // SALIR AL MENU PRINCIPAL
            }
            else                   // NO HACE NADA POR EL MOMENTO
                EnterOrExit = 'a'; // NO GUARDAR USUARIO y SALIR MENU AL PRINCIPAL
        }

    } while (EnterOrExit != '0');

    // getch();
    // CONSULTA TODOS LOS USUARIOS

    // fflush(stdin);
    // HEADER();
    // searchPositionFree();
    // fflush(stdin);
    // for (int i = 0; i <= positionUserFree; i++)
    // {
    //     // printf(" %d\t\t%s\t\t$%.2f\n", usuarios[i].ID, usuarios[i].user, usuarios[i].cash);
    //     printf(" ESTADO DE CUENTA\n\n"
    //            " Codigo Unico / ID:\t\t%-d\n"
    //            " Usuario / User:\t\t%-s\n"
    //            " Correo / Email:\t\t%-s\n"
    //            " Identificacion:\t\t%-s\n"
    //            " Pais / Country:\t\t%-s\n"
    //            " Ciudad / City:\t\t\t%-s\n"
    //            " Telefono / Phone:\t\t0%-s\n"
    //            " Saldo / Balance:\t\t$ %-.2f\n",
    //            usuarios[i].ID, usuarios[i].user, usuarios[i].email, usuarios[i].identificationCard, usuarios[i].county, usuarios[i].city, usuarios[i].phoneNumber, usuarios[i].cash);
    //     printf("-------------------------------------------------------------------------------\n");
    // }
}
