#include <stdio.h>
#include <conio.h>
#include "../lib/utility.h"

#define MAX_LINE 10
int maximo = 90;
char cc;

int power(int base, int n);
int getLinea(char s[], int lim);
void copyCadena(char to[], char from[]);

int main()
{
    int len;                    // longitud actual de la línea
    int max;                    // máxima longitud vista hasta el momento
    char line[MAX_LINE];        // capturar la linea                           line[10] -->   {||||||||||||||}  
    char longestLine[MAX_LINE]; // la línea más larga se guarda aquí    longestLine[10] -->   {||||||||||||||}
    
    max = 0 ;
    system("cls");    
    printf("%c",ENTER);
    
    char ch = 0xC0;
    printf("%x", ch & 0xff);

    printf("%c",BELL);
    // while (() > 0)
    for (int i=1; i<=5; i++)
    {
        printf("%c Ingrese una frase %i: >>  ",ENTER, i);
        len = getLinea(line, MAX_LINE);
        if (len > max) {
            max = len;
            copyCadena(longestLine, line);
        }
    }
    setColor(BLACK, BLUE);
    if (max > 0 ) /* hubo una línea */
        printf(" la linea mas  grande es: %s", longestLine);
    
    return 0;
}

//potenia  de un numero
int power(int base, int n)
{
    int i, p;
    p = 1 ;
    for (i = 1 ; i <= n; ++i)
    p = p * base;
    return p;
}

/* getline: lee una línea en s, regresa su longitud */
int getLinea(char s[], int lim)    // line[lim = 10] -->   {h|o|l|a| |c|o|m|o|\n|\0|~|~|~|}
{                                   //                      0 1 2 3 4 5 6 7 8 <9 10
    int c, i;   //  true             true                   true
    for (i = 0; (i < (lim - 1)) && (c = getchar()) != EOF && (c != '\n'); ++i)
        s[i] = c;
    
    if (c == '\n') 
    {
        s[i] = c;
        ++i;
    }
    //fgets(s, (lim - 1) , stdin);
    //gets(s);
    //i=strlen(s);
    //printf(" >> getLinea(%i): %s", s, i);
    s[i] = '\0';     // s[] = "hola como estas"\0  \n  EOF
    //printf("\n >> getLinea: s= %s i=%i ", s, lim);
    return i;
}
/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */
void copyCadena(char to[], char from[])
{
    int i= 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}