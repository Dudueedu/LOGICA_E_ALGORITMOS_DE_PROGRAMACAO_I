#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=10;
    // while( i<=51){
    //     if(i%3 == 0){
    //     printf("\n numero: %0.2d", i);
    //     }
    //     i++;
    // }
    do
    {
        if(i%3 == 0){
        printf("\n numero: %0.2d", i);
        }
        i++;
    } while (i<=51);

    system("pause");
    return 0;

    
    
    
}
