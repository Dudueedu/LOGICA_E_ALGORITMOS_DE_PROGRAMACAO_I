#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=100; i >= 0; i--){
        if(i%2 == 0){
            printf("\n par: %0.2d", i);
        }
    }

    return 0;
}
