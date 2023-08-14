#include <stdio.h>

int main() {
    int numerador = 1;
    int denominador = 1;
    float soma = 0.0;

    while (numerador <= 99 && denominador <= 50) {
        soma += (float)numerador / denominador;
        numerador += 2;
        denominador++;
    }

    printf("O valor da soma e: %.2f\n", soma);

    return 0;
}
