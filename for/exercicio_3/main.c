#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, pessoa, soma, media;
    soma = 0;
    for(pessoa=1; pessoa <= 5; pessoa++){
        printf("\n Informe a idade %d: ", pessoa);
        scanf("%d", &idade);
        soma = soma + idade;
    }
    media = soma/5;
    printf("\nSoma das idades: %d",soma);
    printf("\nMedia das idades: %d",media);

    return 0;
}
