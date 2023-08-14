#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, K;
    printf("\n Digite uma velocidade media em KM/H para tranforma-lo em M/S: ");
    scanf("%f", &K);
    M = (K)/3.6;
    printf("\n A velociade média em M/S e igual a: %f", M);
    return 0;
}
