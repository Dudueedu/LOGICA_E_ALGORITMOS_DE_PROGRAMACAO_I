#include <stdio.h>

int main() {
    int numeros[5];
    int i, soma = 0;

    printf("Digite cinco numeros:\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nOs numeros digitados foram: ");

    for (i = 0; i < 5; i++) {
        printf("%d", numeros[i]);
        if (i < 4) {
            printf(" + ");
        } else {
            printf(" = %d\n", soma);
        }
    }

    return 0;
}
