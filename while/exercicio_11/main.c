#include <stdio.h>
#include <stdlib.h>

int main()
{

     int numero;
    int eh_primo = 1;

    printf("Digite um numero inteiro maior do que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O numero deve ser maior do que 1.\n");
    } else {
        int i = 2;
        while( i <= numero / 2 ) {
            if (numero % i == 0) {
                eh_primo = 0;
                break;
            }
            i++;
        }

        if (eh_primo) {
            printf("%d e um numero primo.\n", numero);
        } else {
            printf("%d nao e um numero primo.\n", numero);
        }
    }

    return 0;
}
