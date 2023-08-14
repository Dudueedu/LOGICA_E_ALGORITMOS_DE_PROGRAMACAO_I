#include <stdio.h>

int main() {
    int vetor[6];
    int i, num, pares = 0, impares = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        vetor[i] = num;
    }

    printf("\nNumeros pares: ");
    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
            pares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d", pares);

    printf("\nNumeros Impares: ");
    for (i = 0; i < 6; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            impares++;
        }
    }

    printf("\nQuantidade de numeros impares: %d", impares);

    return 0;
}

