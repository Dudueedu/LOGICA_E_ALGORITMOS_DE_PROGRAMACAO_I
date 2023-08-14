#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar, valor, vd;
    printf("\n Digite um valor: ");
    scanf("%f", &valor);
    printf("\n Digite a cotacao do dolar: ");
    scanf("%f", &dolar);
    vd = (valor)/ dolar;
    printf("\n O valor em dolar e igual a: %0.2f", vd);
    return 0;
}
