#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>



int main()
{
    char frase[20];
    int a = 0, e = 0, i = 0, o =0, u = 0;
    printf("ingrese una frase: ");
    scanf("%c", &frase);
    for (int j = 0; j < 20; j++)
    {
        switch (frase[j])
        {
        case 'a' : a++;
            break;
        case 'e' : e++; 
            break;
        case 'i' : i++;        
            break;
        case 'o' : o++;        
            break;
        case 'u' : u++;        
            break;    
        default:
            break;
        }
    }
    printf("vocal a: %d\n", a);
    printf("vocal e: %d\n", e);
    printf("vocal i: %d\n", i);
    printf("vocal o: %d\n", o);
    printf("vocal u: %d\n", u);


}

