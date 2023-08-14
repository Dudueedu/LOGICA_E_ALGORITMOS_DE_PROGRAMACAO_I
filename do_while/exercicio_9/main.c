#include <stdio.h>

int main() {
    int total_bois = 7;
    int codigo_boi;
    float peso_boi;

    int boi_mais_gordo;
    float peso_mais_gordo = 0;

    int boi_mais_magro;
    float peso_mais_magro;

    float soma_pesos = 0;
    float peso_medio;
    int i = 1;
    do
    {
        printf("Boi %d:\n", i);

        printf("Digite o codigo do boi: ");
        scanf("%d", &codigo_boi);

        printf("Digite o peso do boi (em kg): ");
        scanf("%f", &peso_boi);

        if (i == 1) {
            boi_mais_magro = codigo_boi;
            peso_mais_magro = peso_boi;
        } else {
            if (peso_boi > peso_mais_gordo) {
                boi_mais_gordo = codigo_boi;
                peso_mais_gordo = peso_boi;
            }

            if (peso_boi < peso_mais_magro) {
                boi_mais_magro = codigo_boi;
                peso_mais_magro = peso_boi;
            }
        }

        soma_pesos += peso_boi;

        printf("\n");
        i++;
    } while (i <= total_bois);
   

    peso_medio = soma_pesos / total_bois;

    printf("a) O boi mais gordo tem codigo %d e pesa %.2f kg.\n", boi_mais_gordo, peso_mais_gordo);
    printf("b) O boi mais magro tem codigo %d e pesa %.2f kg.\n", boi_mais_magro, peso_mais_magro);
    printf("c) O peso medio de todos os bois e %.2f kg.\n", peso_medio);

    return 0;
}
