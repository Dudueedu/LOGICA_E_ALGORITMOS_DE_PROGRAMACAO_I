#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, soma;
   printf("\n Digite 3 valores: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   soma = num1 + num2 + num3;
   printf("a soma e %0.1d", soma);
    return 0;
}
