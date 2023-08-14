#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_saque;
    int notas[7] = {0};

    printf("Digite o valor do saque: ");
    scanf("%d", &valor_saque);

    int valores_notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int i = 0;
    while( i < 7) {
        notas[i] = valor_saque / valores_notas[i];
        valor_saque %= valores_notas[i];
         i++;
    }

    printf("Quantidade de notas necessarias:\n");
    printf("Notas de 100: %d\n", notas[0]);
    printf("Notas de 50: %d\n", notas[1]);
    printf("Notas de 20: %d\n", notas[2]);
    printf("Notas de 10: %d\n", notas[3]);
    printf("Notas de 5: %d\n", notas[4]);
    printf("Notas de 2: %d\n", notas[5]);
    printf("Notas de 1: %d\n", notas[6]);

    return 0;
}
