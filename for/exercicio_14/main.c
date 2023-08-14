#include <stdio.h>

int main() {
    int quantidade_verdes = 0;
    int quantidade_castanhos = 0;
    int quantidade_azuis = 0;
    int quantidade_feminino_verde = 0;
    int quantidade_masculino_azul = 0;
    int quantidade_feminino_castanho = 0;
    int quantidade_feminino = 0;
    int quantidade_total = 6;

    for (int i = 0; i < quantidade_total; i++) {
        char sexo, cor_olhos;
        int idade;

        printf("Pessoa %d:\n", i + 1);
        printf("Digite o sexo (f - feminino ou m - masculino): ");
        scanf(" %c", &sexo);
        printf("Digite a cor dos olhos (v - verdes, c - castanhos ou a - azuis): ");
        scanf(" %c", &cor_olhos);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (cor_olhos == 'v') {
            quantidade_verdes++;
            if (sexo == 'f') {
                quantidade_feminino_verde++;
            }
        } else if (cor_olhos == 'c') {
            quantidade_castanhos++;
            if (sexo == 'f') {
                quantidade_feminino_castanho++;
            }
        } else if (cor_olhos == 'a') {
            quantidade_azuis++;
            if (sexo == 'm') {
                quantidade_masculino_azul++;
            }
        }

        if (sexo == 'f') {
            quantidade_feminino++;
        }

        printf("\n");
    }

    printf("Quantidade de pessoas com olhos verdes: %d\n", quantidade_verdes);
    printf("Quantidade de pessoas com olhos castanhos: %d\n", quantidade_castanhos);
    printf("Quantidade de pessoas com olhos azuis: %d\n", quantidade_azuis);
    printf("Quantidade de pessoas do sexo feminino com cor de olhos verdes: %d\n", quantidade_feminino_verde);
    printf("Quantidade de pessoas do sexo masculino com cor de olhos azuis: %d\n", quantidade_masculino_azul);

    float porcentagem_feminino_castanho = (float) quantidade_feminino_castanho / quantidade_feminino * 100;
    printf("Porcentagem de pessoas do sexo feminino com cor de olhos castanhos: %.2f%%\n", porcentagem_feminino_castanho);

    return 0;
}

