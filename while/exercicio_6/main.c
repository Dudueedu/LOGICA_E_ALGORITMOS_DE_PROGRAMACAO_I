#include <stdio.h>
#include <stdlib.h>



int main()
{
    int saldoI, saldoF, d, s, i, transacao, x, y, z;

    printf("\n Qual o saldo inicial da conta? ");
    scanf("%d", &saldoI);

     saldoF = saldoI;
     z=5;
    x=0;
    while( x<z){
        printf("\n\n Gostaria de fazer uma nova transacao: \n [1] Sim, continuar! \n [2] Nao, sair! \n");
        scanf("%d", &y);
            if(y == 1){for(i=0; i<1;i++){
                    printf("\n\n Escolha o tipo de movimentacao: \n [1] Deposito \n [2] Saque \n");
                    scanf("%d", &transacao);

                    if(transacao == 1){
                        printf("\n Qual o valor do deposito? ");
                        scanf("%d", &d);
                        saldoF += d;
                         printf("Deposito realizado com sucesso no valor de R$ %0.2d reais! \n  Agora seu saldo e de %0.2d reais", d, saldoF);
                    }else{
                        printf("\n Qual o valor do saque? ");
                        scanf("%d", &s);
                        if(s > saldoF){
                            printf("\n O saque nao pode ser realizado pelo valor ser insuficiente! \n O valor na conta e %0.2d e o valor do saque pedido foi %0.2d reais!", saldoF, s);

                        }else{
                            saldoF -= s;
                            printf("Saque realizado com sucesso no valor de R$ %0.2d reais! \n  Agora seu saldo e de %0.2d reais", s, saldoF);
                        }
                    }
                }
                }else{
                    z=0;
                    printf("\n O seu saldo apos as transacoes e: %0.2d \n Seu saldo inicial era de: %0.2d", saldoF, saldoI);
                    printf("\n Ate breve!\n");
                }
                x++;}
    system("pause");
    return 0;
}
