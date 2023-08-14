#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, suc, ant;

    printf("\n Digite um numero:");
    scanf("%d", &num);

    suc = num + 1;
    ant = num - 1;

    printf("\nO numero e: %d", num);
    printf("\nseu antecessor e: %d", ant);
    printf("\nseu sucessor e: %d", suc);
    system("pause");
    return 0;
}
