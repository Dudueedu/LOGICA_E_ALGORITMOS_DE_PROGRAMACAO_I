#include <stdio.h>
#include <stdlib.h>
/// Ler 10 numeros e armazenar em um vetor.
/// Exibir as 10 numeros lidas
/// alterar o programa e exibir a soma dos elementos do vetor
///imprimir o vetor na ordem inversa
int main()
{
  int numero[10];
  int i;
  int soma=0;

  ///entrada de dados no vetor
  for (i=0;i<10;i++){
    printf("\nDigite um número %d : ",i);
    scanf("%d",&numero[i]);
  }

  ///somar todos
  for (i=0;i<10;i++){
    soma = soma +  numero[i];
  }
   printf("\nSoma dos elementos do vetor: %d",soma);

  ///exibir os elementos do vetor
  for (i=0;i<10;i++){
    printf("\nNúmero digitado: %d", numero[i]);
  }
  ///imprime na ordem inversa
  for (i=9;i>=0;i--){
    printf("\nNúmero digitado: %d", numero[i]);
  }

  ///exibir somente os numeros pares



  ///exibir a soma dos numeros impares



    return 0;
}
