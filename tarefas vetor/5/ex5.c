#include <stdio.h>

int main(){

    int log[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ling[10] = {1,2,3,9,19,18,11,13,14,15};
    int x,y;

    for (x=0;x<15;x++){
            for (y=0;y<10;y++){
                if(log[x]==ling[y]){
                    printf ("\nAluno = %d === %d faz a duas materias",log[x],ling[y]);
                }
            }
        }
    return 0;
    }

