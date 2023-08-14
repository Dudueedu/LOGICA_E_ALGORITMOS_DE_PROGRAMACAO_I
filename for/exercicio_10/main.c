#include <stdio.h>
#include <stdlib.h>

int main()
{
     float soma = 0;

    for (int i = 1, j = 1; i <= 99 && j <= 50; i += 2, j++) {
        soma += (float)i / j;
        printf("\n a soma no momento e: %.2f ", soma);
    }

    printf("\n A soma da sequencia e: %.2f\n", soma);
    return 0;
}
