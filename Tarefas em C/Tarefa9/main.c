#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R, G, pi;
    pi = 3.141592;
    printf("\n Digite um angulo em graus: ");
    scanf("%f", &G);
    R = (G * pi)/180;
    printf("\n esse mesmo grau em radiano e : %f", R);
    return 0;
}
