#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=100;
    while( i >= 0 ){
        if(i%2 == 0){
            printf("\n par: %0.2d", i);
        }
        i--;
    }

    system("pause");
    return 0;
    
}
