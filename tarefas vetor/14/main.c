#include <stdio.h>

#define NUM_ALUNOS 6

int main() {
    char nomes[NUM_ALUNOS][50];
    float notas1[NUM_ALUNOS];
    float notas2[NUM_ALUNOS];
    float medias[NUM_ALUNOS];
    float somaNotas1 = 0, somaNotas2 = 0;
    float mediaClasse, percentualAprovados, percentualExame, percentualReprovados;
    int i, aprovados = 0, exame = 0, reprovados = 0;

    printf("Digite o nome e as notas de 6 alunos:\n");

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a primeira nota do(a) %s: ", nomes[i]);
        scanf("%f", &notas1[i]);
        somaNotas1 += notas1[i];

        printf("Digite a segunda nota do(a) %s: ", nomes[i]);
        scanf("%f", &notas2[i]);
        somaNotas2 += notas2[i];

        medias[i] = (notas1[i] + notas2[i]) / 2;

        if (medias[i] >= 7.0) {
            aprovados++;
        } else if (medias[i] >= 4.0) {
            exame++;
        } else {
            reprovados++;
        }
    }

    mediaClasse = (somaNotas1 + somaNotas2) / (2 * NUM_ALUNOS);
    percentualAprovados = (float)aprovados / NUM_ALUNOS * 100;
    percentualExame = (float)exame / NUM_ALUNOS * 100;
    percentualReprovados = (float)reprovados / NUM_ALUNOS * 100;

    printf("\nRelatório de notas:\n");
    printf("ALUNO\t  PROVA1\tPROVA2\tMÉDIA\tSITUAÇÃO\n");

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t", nomes[i], notas1[i], notas2[i], medias[i]);

        if (medias[i] >= 7.0) {
            printf("Aprovado\n");
        } else if (medias[i] >= 4.0) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    printf("\nMédia da classe = %.2f\n", mediaClasse);
    printf("Percentual de alunos aprovados = %.2f%%\n", percentualAprovados);
    printf("Percentual de alunos de exame = %.2f%%\n", percentualExame);
    printf("Percentual de alunos reprovados = %.2f%%\n", percentualReprovados);

    return 0;
}
