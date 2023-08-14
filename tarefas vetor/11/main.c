#include <stdio.h>

#define TAMANHO 10

int main() {
    int numeros[TAMANHO];
    int pares[TAMANHO];
    int impares[TAMANHO];
    int i, j = 0, k = 0;

    printf("Digite dez numeros inteiros:\n");

    // Recebendo os numeros do usuario e armazenando no vetor
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Separando os numeros pares e impares
    for (i = 0; i < TAMANHO; i++) {
        if (numeros[i] % 2 == 0) {
            pares[j] = numeros[i];
            j++;
        } else {
            impares[k] = numeros[i];
            k++;
        }
    }

    printf("\nNumeros pares: ");
    for (i = 0; i < j; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}
