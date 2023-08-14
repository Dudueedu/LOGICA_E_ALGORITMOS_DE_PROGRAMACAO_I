#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=100;
    do
    {
        if(i%2 == 0){
            printf("\n par: %0.2d", i);
        }
        i--;
    } while (i >= 0 );
    

    system("pause");
    return 0;
    
}
