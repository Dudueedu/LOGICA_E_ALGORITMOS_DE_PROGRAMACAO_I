#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("O sol esta %dkm distante da terra\n", 5000 );
    printf("e %dkm distante da lua.\n", 3000);
    printf("Que está distante %dkm de Venus.", 10000);
}
