#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imp, g1, g2, g3;
    imp = 780000.00;
    g1 = (imp * 46 )/100;
    g2 = (imp * 32 )/100;
    g3 = (imp * 22) / 100;
    printf("\n O premio total e : %f", imp);
    printf("\n O premio do ganhador 1 e : %0.2f", g1);
    printf("\n O premio do ganhador 2 e : %0.2f", g2);
    printf("\n O premio do ganhador 3 e : %0.2f", g3);
    return 0;
}
