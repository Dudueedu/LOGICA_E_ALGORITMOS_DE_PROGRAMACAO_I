#include <stdio.h>
#include <string.h>
#define TAMANHO 7

int main() {
    char nomes[TAMANHO][50];
    float medias[TAMANHO];
    float maiorMedia = 0;
    int i;


    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a media final do aluno %d: ", i + 1);
        scanf("%f", &medias[i]);

        if (medias[i] > maiorMedia) {
            maiorMedia = medias[i];
        }
    }


    printf("\nAluno com maior media:\n");
    for (i = 0; i < TAMANHO; i++) {
        if (medias[i] == maiorMedia) {
            printf("Nome: %s\n", nomes[i]);
            printf("Media: %.2f\n", medias[i]);
            break;
        }
    }


    printf("\nNotas necessarias no exame final para ser aprovado:\n");
    for (i = 0; i < TAMANHO; i++) {
        if (medias[i] < 7) {
            float notaNecessaria = 10 - (0.4 * medias[i]);
            printf("Aluno: %s\n", nomes[i]);
            printf("Nota necessaria no exame final: %.2f\n", notaNecessaria);
        }
    }

    return 0;
}

