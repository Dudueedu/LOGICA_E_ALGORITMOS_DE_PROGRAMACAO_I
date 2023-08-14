#include <stdio.h>

int main() {
    int senha_correta = 123456;
    int senha_digitada;
    int tentativas = 0;
    int max_tentativas = 3;
    int i = 0;
    while( i < max_tentativas) {
        printf("Digite a senha numerica de 6 digitos: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_correta) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Acesso negado!\n");
            tentativas++;

            if (tentativas >= max_tentativas) {
                printf("Voce excedeu o numero maximo de tentativas. Acesso bloqueado.\n");
            } else {
                printf("Tentativa invalida. Restam %d tentativas.\n", max_tentativas - tentativas);
            }
        }
        i++;
    }

    return 0;
}
