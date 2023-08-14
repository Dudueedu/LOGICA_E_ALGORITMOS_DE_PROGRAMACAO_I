#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, a, b;
    printf("\n Qual o cateto a? ");
    scanf("%f", &a);
    printf("\n Qual o cateto b? ");
    scanf("%f", &b);
    h = sqrt((a*a)+(b*b));
    printf("\n a hipotenusa e: %0.2f", h);
    return 0;
}
