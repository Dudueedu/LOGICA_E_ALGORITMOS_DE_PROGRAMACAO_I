#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano;
    float salario = 2000;
    float aumento = 0.015;
    ano = 1996;
    do
    {
         salario += salario * aumento;
        aumento *= 2;
        printf("\n O salario no ano %d foi de %0.2f, com o aumento sendo de %0.2f porcento.", ano, salario, aumento * 100);
        ano++;
    } while (ano <= 2023);
    

    printf("\n O salario atual do funcionario e: R$ %0.2f \n", salario);

    return 0;
}
