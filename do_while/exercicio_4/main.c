#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, num, par, impar;
    par = 0;
    impar = 0;
    x=1;
    do
    {
        printf("\nDigite um numero inteiro:");
            scanf("%d", &num);
            if(num%2==0){
                printf("\n e par: %d",num);
                par = par + 1;
            }
            else{
                printf("\n e impar: %d",num);
                impar = impar + 1;
            }
            x++;
    } while (x<=10);
    


    printf("\n O numero de pares e: %d", par);
     printf("\n O numero de impares e: %d", impar);

    return 0;
}
