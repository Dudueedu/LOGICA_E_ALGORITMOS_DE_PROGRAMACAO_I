#include <stdio.h>

int main() {
    const int TAMANHO = 10;
    float numeros[TAMANHO];
    int i, Negativos = 0;
    float somaPositivos = 0;

    printf("Digite os %d numeros reais:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (numeros[i] < 0) {
            Negativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }



    printf("Quantidade de numeros negativos: %d\n", Negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}

