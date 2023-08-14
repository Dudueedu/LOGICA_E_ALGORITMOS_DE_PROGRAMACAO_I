#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, media;
    printf("\n Digite 4 valores: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4)/4 ;
    printf("a media e %0.2f", media);
    return 0;
}
