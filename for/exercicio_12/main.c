#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano;
    float salario = 2000;
    float aumento = 0.015;

    for (ano = 1996; ano <= 2023; ano++) {
        salario += salario * aumento;
        aumento *= 2;
        printf("\n O salario no ano %d foi de %0.2f, com o aumento sendo de %0.2f %.", ano, salario, aumento * 100);
    }

    printf("\n O salario atual do funcionario e: R$ %0.2f \n", salario);

    return 0;
}
