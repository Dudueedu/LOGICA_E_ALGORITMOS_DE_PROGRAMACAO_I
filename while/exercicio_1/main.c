#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=10;
    while( i<=51){
        if(i%3 == 0){
        printf("\n numero: %0.2d", i);
        }
        i++;
    }
    system("pause");
    return 0;
    
}
