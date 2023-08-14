#include <stdio.h>

#define TAMANHO 15

int main() {
    int vetor[TAMANHO];
    int i;
    int maior, posicaoMaior;
    int menor, posicaoMenor;

    printf("Preencha o vetor com %d numeros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa as variáveis maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];
    posicaoMaior = 0;
    posicaoMenor = 0;

    // Percorre o vetor para encontrar o maior e o menor número
    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("\nMaior numero: %d (posicao: %d)\n", maior, posicaoMaior);
    printf("Menor numero: %d (posicao: %d)\n", menor, posicaoMenor);

    return 0;
}
