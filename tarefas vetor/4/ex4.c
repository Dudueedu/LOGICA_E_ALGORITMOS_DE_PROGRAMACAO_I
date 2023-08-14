#include <stdio.h>

int main(){

    int v[15] = {30,2,4,6,7,3,30,13,76,2,49,12,3234,6,30};
    int x;

    for (x=0;x<15;x++){
        if (v[x]==30){
            printf("\nValor=%d na posicao=%d",v[x],x);
        }
    }

}
