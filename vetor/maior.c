#include <stdio.h>
#include <stdlib.h>
/// Ler 10 numeros e armazenar em um vetor.
/// Exibir as 10 numeros lidas
/// alterar o programa e exibir a soma dos elementos do vetor
///imprimir o vetor na ordem inversa
int main()
{
  int maior;
  int num[5];
  int j;

  for (j=0;j<5;j++){
    printf("\nDigite um numero inteiro: %d",j);
    scanf("%d",&num[j]);
  }

  maior = num[0];///para ter uma referencia dentro do conjunto

  for (j=1;j<5;j++){
    if (num[j] > maior){
        maior = num[j];///guardo o maior elemento encontrado
    }
  }

  printf("\nMaior valor: %d",maior);

    return 0;
}
