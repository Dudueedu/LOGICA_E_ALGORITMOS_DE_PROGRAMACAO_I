#include <stdio.h>

#define NUM_CLIENTES 8
#define LOCACOES_GRATIS 10

int main() {
    char nomes[NUM_CLIENTES][50];
    int locacoes2011[NUM_CLIENTES];
    int locacoesGratis[NUM_CLIENTES];
    int i;

    printf("Digite o nome e a quantidade de DVDs locados em 2011 para cada cliente:\n");

    for (i = 0; i < NUM_CLIENTES; i++) {
        printf("Cliente %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Quantidade de DVDs locados em 2011: ");
        scanf("%d", &locacoes2011[i]);

        locacoesGratis[i] = locacoes2011[i] / LOCACOES_GRATIS;
    }

    printf("\nRelatorio de Locacoes Gratuitas:\n");
    printf("Cliente\tLocacoes Gratuitas\n");

    for (i = 0; i < NUM_CLIENTES; i++) {
        printf("%s\t%d\n", nomes[i], locacoesGratis[i]);
    }

    return 0;
}
