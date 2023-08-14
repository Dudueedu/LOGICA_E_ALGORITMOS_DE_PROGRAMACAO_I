#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("\n Digite uma temperatura em celcius: ");
    scanf("%f", &C);
    F = C * (9.0/5.0) + 32.0;
    printf("\n essa mesma temoperatura em farenheit e: %0.2f", F);
    return 0;
}
