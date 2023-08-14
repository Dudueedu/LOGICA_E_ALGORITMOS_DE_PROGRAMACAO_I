#include <stdio.h>

int main(){
   float v[10],c[10];
   char  nomes[10][50];///matriz de nomes de 10 linhas e 50 colunas cada linha
   int i;
   float soma=0, maior, menor;
   char nomeMaior[50];
   char nomeMenor[50];

   for(i=0;i<10;i++){
       printf("\nDigite o nome do vendedor:");
       fgets(nomes[i],50,stdin);///stdin e o teclado
       printf("\nDigite o valor da venda:");
       scanf("%f",&v[i]);
       printf("\nDigite o valor da comissao:");
       scanf("%f",&c[i]);
       fflush(stdin);///limpar buffer do teclado
   }

   for(i=0;i<10;i++){
       printf("\nVendedor: %s vendeu %0.2f e tem comissao de %0.2f",nomes[i],v[i],v[i]*c[i]);
   }

    for(i=0;i<10;i++){
       soma = soma + v[i];
    }
    printf("\nTotal das vendas de todos os vendedores: %0.2f",soma);

    maior = v[0];
    strcpy(nomeMaior,nomes[0]);
    menor = v[0];
    strcpy(nomeMenor,nomes[0]);



    for(i=0;i<10;i++){
       if (v[i]>maior){
           maior = v[i];
           strcpy(nomeMaior,nomes[i]);
       }
       if (v[i]<menor){
           menor = v[i];
           strcpy(nomeMenor,nomes[i]);
       }
   }


   printf("\nVendedor: %s teve a maior venda: %0.2f",nomeMaior,maior);
   printf("\nVendedor: %s teve a menor venda: %0.2f",nomeMenor,menor);

  return 0;
}
