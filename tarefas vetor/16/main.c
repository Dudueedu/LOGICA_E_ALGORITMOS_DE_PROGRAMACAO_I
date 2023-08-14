#include <stdio.h>

#define NUM_PRODUTOS 5

int main() {
    char nomes[NUM_PRODUTOS][50];
    float precos[NUM_PRODUTOS];
    int quantidadeInferior50 = 0;
    float somaPrecosSuperior100 = 0;
    int quantidadeSuperior100 = 0;
    int i;

    printf("Digite o nome e o preco de cada produto:\n");

    for (i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Preco: ");
        scanf("%f", &precos[i]);

        if (precos[i] < 50.00) {
            quantidadeInferior50++;
        } else if (precos[i] > 100.00) {
            somaPrecosSuperior100 += precos[i];
            quantidadeSuperior100++;
        }
    }

    printf("\nRelatorio de Produtos:\n");
    printf("Quantidade de produtos com preco inferior a R$ 50,00: %d\n", quantidadeInferior50);

    printf("Produtos com preco entre R$ 50,00 e R$ 100,00:\n");
    for (i = 0; i < NUM_PRODUTOS; i++) {
        if (precos[i] >= 50.00 && precos[i] <= 100.00) {
            printf("%s\n", nomes[i]);
        }
    }

    float mediaPrecosSuperior100 = 0;
    if (quantidadeSuperior100 > 0) {
        mediaPrecosSuperior100 = somaPrecosSuperior100 / quantidadeSuperior100;
    }
    printf("Media dos precos dos produtos com preco superior a R$ 100,00: %.2f\n", mediaPrecosSuperior100);

    return 0;
}
