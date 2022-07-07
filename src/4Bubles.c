#include <stdio.h>
#include <unistd.h>

const int PRO_BAR_LENGTH = 30;    // [########################]   100%


// 1 .... 100%
// PRO_BAR_LENGTH        percemt_done
// 30 num_char   -->   100%
// ?? num_char   -->   20%
// (20% * 30 ) 100%  -->  6 num_char
void updateBar(int percemt_done)  // [######                ]  20%
{
    int num_char = (percemt_done * PRO_BAR_LENGTH)/100;
    printf("\r[");
    // for(int i=0; i<= num_char; i++)
    //     printf("#");
    // for(int i=0; i<= PRO_BAR_LENGTH - num_char ; i++)
    //     printf(" ");

    for(int i=0; i<= PRO_BAR_LENGTH; i++)
         printf((i<=num_char)?"O":" ");
    printf("] TIMEOUT", percemt_done);
    //fflush(stdout);
}
void Loading()
{
    for(int i=0; i<= 100; i++)
    {
        updateBar(i);
        usleep(20000);
    }
}

void main( )
{
    //Progress();
    printf(" \n ");
    Loading();
}

