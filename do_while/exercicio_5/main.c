#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, num, inter, interN;
    inter = 0;
    interN = 0;
    x=1;
    do
    {
        printf("\nDigite um numero inteiro:");
            scanf("%d", &num);
            if(num >= 5 && num <= 9){
                printf("\n O numero esta no intevalo de 5 a 9, afinal o numero e: %d",num);
                inter = inter + 1;
            }
            else{
                printf("\n O numero nao esta no intevalo de 5 a 9, afinal o numero e: %d",num);
                interN = interN + 1;
            }
            x++;
    } while (x<=8);
    


    printf("\n Estao no intervalo: %d", inter);
     printf("\n Nao estao no intervalo: %d", interN);

    return 0;
}
