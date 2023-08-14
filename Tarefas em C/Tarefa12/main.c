#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi, raio, altura, volume;
    pi = 3.141592;
    printf("\n Qual a altura do seu cilindro? ");
    scanf("%f", &altura);
    printf("\n Qual o raio do seu cilindro? ");
    scanf("%f", &raio);
    volume = pi * (raio*raio)*altura;
    printf("\n O volume é: %0.3f", volume);
    return 0;
}
