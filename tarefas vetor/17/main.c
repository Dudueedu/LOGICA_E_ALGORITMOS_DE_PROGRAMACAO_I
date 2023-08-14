#include <stdio.h>

#define TAMANHO 10

// Função para ordenar o vetor em ordem decrescente
// Utiliza o algoritmo de ordenação Bubble Sort
// Retorna o vetor ordenado
int* ordenarDecrescente(int vetor[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    return vetor;
}

int main() {
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int vetorOrdenado[TAMANHO * 2];
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

    // Copia os elementos dos dois vetores para o vetorOrdenado
    for (i = 0; i < TAMANHO; i++) {
        vetorOrdenado[i] = vetor1[i];
        vetorOrdenado[i + TAMANHO] = vetor2[i];
    }

    // Chama a função ordenarDecrescente para ordenar o vetorOrdenado em ordem decrescente
    int* vetorOrdenadoPtr = ordenarDecrescente(vetorOrdenado, TAMANHO * 2);

    printf("\nVetor ordenado em ordem decrescente:\n");
    for (i = 0; i < TAMANHO * 2; i++) {
        printf("%d ", vetorOrdenadoPtr[i]);
    }
    printf("\n");

    return 0;
}
