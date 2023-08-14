#include <stdio.h>
#include <stdlib.h>

int main()
{
  float notas[5];
  int i;

  for (i=0;i<5;i++){
      printf("\nDigite nota %d :",i);
      scanf("%f",&notas[i]);
  }
  for (i=0;i<5;i++){
      printf("\nNota %d = %0.1f",i,notas[i]);
  }

    return 0;
}
