#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=10; i<=51; i++){
        if(i%3 == 0){
        printf("\n numero: %0.2d", i);
        }
    }
    return 0;
}
