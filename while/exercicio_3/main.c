#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, pessoa, soma, media;
    soma = 0;
    pessoa=1;
    while( pessoa <= 5){
        printf("\n Informe a idade %d: ", pessoa);
        scanf("%d", &idade);
        soma = soma + idade;
        pessoa++;
    }
    media = soma/5;
    printf("\nSoma das idades: %d",soma);
    printf("\nMedia das idades: %d",media);

    system("pause");
    return 0;
    
}
