#include <stdio.h>

int main() {
    int idade, altura, peso;
    int pessoas_superior_50 = 0;
    int pessoas_10_20 = 0;
    int total_pessoas = 5;
    int pessoas_peso_inferior_40 = 0;

    float soma_alturas = 0;
    float media_alturas;
    float percentual_peso_inferior_40;
    int i = 0;
    while( i < total_pessoas) {
        printf("Pessoa %d:\n", i + 1);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite a altura (em cm): ");
        scanf("%d", &altura);

        printf("Digite o peso (em kg): ");
        scanf("%d", &peso);

        if (idade > 50) {
            pessoas_superior_50++;
        }

        if (idade >= 10 && idade <= 20) {
            soma_alturas += altura;
            pessoas_10_20++;
        }

        if (peso < 40) {
            pessoas_peso_inferior_40++;
        }

        printf("\n");
        i++;
    }

    media_alturas = soma_alturas / pessoas_10_20;
    percentual_peso_inferior_40 = (float) pessoas_peso_inferior_40 / total_pessoas * 100;

    printf("a) Quantidade de pessoas com idade superior a 50 anos: %d\n", pessoas_superior_50);
    printf("b) Media das alturas das pessoas com idade entre 10 e 20 anos: %.2f cm\n", media_alturas);
    printf("c) Porcentagem de pessoas com peso inferior a 40 kg: %.2f%%\n", percentual_peso_inferior_40);

    return 0;
}
