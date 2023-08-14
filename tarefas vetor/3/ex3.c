#include <stdio.h>
#define TAMANHO 10

int main() {
    int codigoProduto[TAMANHO];
    int estoque[TAMANHO];
    int i, j, codigoCliente, codigoPedido, quantidadePedido;



    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigoProduto[i]);

        printf("Digite a quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }



    for (;;) {
        printf("\nDigite o codigo do cliente (ou 0 para sair): ");
        scanf("%d", &codigoCliente);

        if (codigoCliente == 0) {
            break;
        }

        printf("Digite o codigo do produto desejado: ");
        scanf("%d", &codigoPedido);

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidadePedido);



        int produtoExiste = 0;
        int estoqueSuficiente = 0;
        for (i = 0; i < TAMANHO; i++) {
            if (codigoProduto[i] == codigoPedido) {
                produtoExiste = 1;

                if (estoque[i] >= quantidadePedido) {
                    estoqueSuficiente = 1;
                    estoque[i] -= quantidadePedido;
                }

                break;
            }
        }

        if (!produtoExiste) {
            printf("Codigo inexistente\n");
        } else if (estoqueSuficiente) {
            printf("Pedido atendido. Obrigado e volte sempre!\n");
        } else {
            printf("Nao temos estoque suficiente dessa mercadoria\n");
        }
    }

    return 0;
}
