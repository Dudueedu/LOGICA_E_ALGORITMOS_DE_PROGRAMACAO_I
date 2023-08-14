#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoat, anon, idd;
    printf("\n qual o ano atual? ");
    scanf("%d", &anoat);
    printf("\n qual sua idade? ");
    scanf("%d", &idd);
    anon = anoat - idd;
    printf("\n seu anos de nascimento e: %d", anon);
    return 0;
}
