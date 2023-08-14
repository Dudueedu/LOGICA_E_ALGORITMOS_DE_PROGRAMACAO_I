#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int vetorResultado[TAMANHO];
    int i;

    printf("Preencha o primeiro vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nPreencha o segundo vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Multiplica os elementos de mesmo índice dos dois vetores e armazena no vetorResultado
    for (i = 0; i < TAMANHO; i++) {
        vetorResultado[i] = vetor1[i] * vetor2[i];
    }

    printf("\nVetor resultado:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
