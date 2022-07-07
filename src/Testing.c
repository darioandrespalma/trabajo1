#include <stdio.h>
#include <unistd.h>

const int PRO_BAR_LENGTH = 30;

void updateBar(int percemt_done)
{
    int num_char = (percemt_done * PRO_BAR_LENGTH)/100;
    printf("r[");
    for (int i = 0; i <= PRO_BAR_LENGTH; i++)
    {
        printf((i <= num_char)?"=":" "); 
    }
    printf("] %d %% Stopped..!", percemt_done);
   
    
        
}
void Loading()
{
    for (int i = 0; i <= 100; i++)
    {
        updateBar(i);
        usleep(20000);
    }
    
}
void main( )
{
    printf(" \n ");
    Loading();

}
