#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("\n Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    printf("\n A letra minuscula e: %c", letra+32);
    return 0;
}
