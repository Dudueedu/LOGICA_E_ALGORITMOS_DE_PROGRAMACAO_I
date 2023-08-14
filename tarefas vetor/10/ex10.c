#include <stdio.h>

int main(){

    int v1[10]={1,2,3,4,5,6,7,8,9,10};
    int v2[5]= {3,4,5,8,2};
    int r1[10];
    int r2[10];
    int soma =0;
    int i,j,cont;

    for (i=0;i<5;i++){
        soma = soma + v2[i];
    }

    int x=0;
    for (i=0;i<10;i++){
        if (v1[i]%2==0){
            r1[x]=v1[i]+soma;
            x++;
        }
    }

    printf ("\nVetor resultante");
    for (i=0;i<x;i++){
        printf ("\n%d ",r1[i]);
    }

    int k=0;
    for (i=0;i<10;i++){
        if (v1[i]%2!=0){    /// verifico se é impar
             cont = 0;
            for (j=0;j<5;j++){
                if (v1[i]%v2[j]==0)   ///verifico de é divisivel
                    cont++;
            }
        }
        r2[k]=cont; /// guarda quantos divisores
        k++;
    }

    printf ("\nVetor resultante 2");
    for (i=0;i<x;i++){
        printf ("\n%d ",r2[i]);

    }
    return 0;

}


