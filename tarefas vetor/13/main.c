#include <stdio.h>

#define NUM_ALUNOS 8

int main() {
    char nomes[NUM_ALUNOS][50];
    float notas[NUM_ALUNOS];
    float somaNotas = 0;
    float media;
    int i;

    printf("Digite o nome e a nota de %d alunos:\n", NUM_ALUNOS);

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a nota do(a) %s: ", nomes[i]);
        scanf("%f", &notas[i]);

        somaNotas += notas[i];
    }

    media = somaNotas / NUM_ALUNOS;

    printf("\nRelatório de notas:\n");

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("%s %.1f\n", nomes[i], notas[i]);
    }

    printf("\nMédia da classe = %.1f\n", media);

    return 0;
}

