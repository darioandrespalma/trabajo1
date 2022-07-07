#include <stdio.h>
#include <unistd.h>
#include <Windows.h>


#define BELL    '\007'     
#define ENTER   '\n'
#define UPPER   300

const int PRO_BAR_LENGTH = 30;  // nro de carateres - tamano

enum boolean {
    NO,
    YES
};
enum months { ENE = 1, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC };
enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).
    BLACK      = 0,
    BLUE       = 1,
    GREEN      = 2,
    CYAN       = 3,
    RED        = 4,
    MAGENTA    = 5,
    BROWN      = 6,
    LGREY      = 7,
    DGREY      = 8,
    LBLUE      = 9,
    LGREEN     = 10,
    LCYAN      = 11,
    LRED       = 12,
    LMAGENTA   = 13,
    YELLOW     = 14,
    WHITE      = 15
};

// procedimiento para cambiar el color del fondo y/o pantalla
void setColor(int Background, int Text){ 
    int colorTexto= Text + (Background * 16);         // los colores van del 0 al 255 por eso se multiplica por 16
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);   // referenciamos a la consola.
    SetConsoleTextAttribute(terminal, colorTexto); 
}

/*
//  [########                      ] 30% 

30 num_char  -> 100% porcentaje
?? num_char  -> 50%  porcentaje
---------------------
?? num_char  -> (50% * 30 )/100
*/
void showProgressBar(int delay)
{
    for(int porcentaje=0; porcentaje<= 100; porcentaje++)
    {
        int num_char = (porcentaje * PRO_BAR_LENGTH)/100;  // 5
        printf("\r[");
        for(int i=0; i<= PRO_BAR_LENGTH; i++)
            printf( (i<=num_char) ? "#" : " ");
        printf("] %d%% ", porcentaje);
        usleep(1500*delay);
    }
    // for(int i=0; i<= num_char; i++)
    //     printf("#");
    // for(int i=0; i<= PRO_BAR_LENGTH - num_char ; i++)
    //     printf(" ");
    // printf("] %d%% ", porcentaje);
    // printf("\r[");
    fflush(stdout);
}

//  |/-\ 100%  
void showAvance(int delay)  
{   //char caracteres1='|';       char caracteres2='/';       char caracteres3='-';       char caracteres4='\\';  
    char caracteres[]= "|/-\\";   // "ab/ c-d"  "pat_mic"  \n \r \t \\ .... %%
            // x % 4    0123
    for (int x =0 ; x <= 100 ; x++) {
        printf("\r %c ... %d%%", caracteres[x % 4], x);     // 0 % 4  --> 0   caracteres[0] = '|'
        usleep(1500*delay);
    }
    printf(" Done..!");
}

// NO DEBE TENER MAIN()