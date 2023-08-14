#include <stdio.h>

int main(){

    int v [7] = {1,3,5,-6,3,19,0}; ///declara��o do vetor e atribui��o
    int i;

    for (i=0;i<7;i++){
        if (v[i]%2==0){
            printf ("\nValor=%d e multiplo de 2.",v[i]);
        }
        if (v[i]%3==0){
            printf ("\nValor=%d e multiplo de 3.",v[i]);
        }
        if (v[i]%2==0 && v[i]%3==0){
            printf ("\nValor=%d e multiplo de 2 e 3.",v[i]);
        }
    }

}
