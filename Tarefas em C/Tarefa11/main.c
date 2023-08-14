#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi, area, raio;
    pi = 3.141592;
    printf("\n Digite o raio: ");
    scanf("%f", &raio);
    area = pi * (raio*raio);
    printf("\n A area e igual a : %0.3f", area);
    return 0;
}
