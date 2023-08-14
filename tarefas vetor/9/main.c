#include <stdio.h>

#define TAMANHO 10

// Função para exibir o relatório
// Retorna a quantidade de produtos com aumento
int exibirRelatorio(char nomes[][50], int codigos[], float precos[]) {
    printf("Relatorio de Produtos com Aumento:\n");
    printf("-------------------------------\n");
    printf("Nome\t\tCodigo\tPreco\tNovo Preco\n");
    printf("-------------------------------\n");

    int produtosComAumento = 0;

    for (int i = 0; i < TAMANHO; i++) {
        float novoPreco = precos[i];

        if (codigos[i] % 2 == 0 && precos[i] > 1000) {
            novoPreco *= 1.2; // Aumento de 20%
        } else if (codigos[i] % 2 == 0) {
            novoPreco *= 1.15; // Aumento de 15%
        } else if (precos[i] > 1000) {
            novoPreco *= 1.1; // Aumento de 10%
        } else {
            continue; // Não precisa exibir produto sem aumento
        }

        printf("%s\t%d\t%.2f\t%.2f\n", nomes[i], codigos[i], precos[i], novoPreco);
        produtosComAumento++;
    }

    printf("-------------------------------\n");

    return produtosComAumento;
}

int main() {
    char nomes[TAMANHO][50];
    int codigos[TAMANHO];
    float precos[TAMANHO];

    printf("Digite os dados dos produtos:\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Codigo: ");
        scanf("%d", &codigos[i]);
        printf("Preco: ");
        scanf("%f", &precos[i]);
    }

    printf("\n");

    int quantidadeAumento = exibirRelatorio(nomes, codigos, precos);
    printf("Quantidade de produtos com aumento: %d\n", quantidadeAumento);

    return 0;
}
