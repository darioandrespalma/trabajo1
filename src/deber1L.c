#include <stdio.h>

void DrawletraA(int t)
{
    t=t*2;
    for(int i=1; i<=t; i++)
    {
        for(int j=1;j<=t;j++)
        {
            if((i==1 || i ==(t/2) || j==1 ) || (j == t && i<=t  )) 
                printf("#");
            else
                printf(" ");                    
        }
        printf("\n");
        }
}

void DrawLetraP(int t)
{
    t=t*2;
    for(int i=1; i<=t; i++)
    {
        for(int j=1;j<=t;j++)
        {
            if((i==1 || i == (t/2) || j==1 ) || (j == t && i <=(t/2)  ))
                printf("*");
            else
                printf(" ");                    
        }
        printf("\n");
    }

}

int main()
{
    printf("Andres Palma \n");
    DrawletraA(8);
    printf("\n");
    DrawLetraP(8);
}
