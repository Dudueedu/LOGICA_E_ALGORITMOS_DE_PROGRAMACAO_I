#include <stdio.h>

int main() {
    int idade_joao = 10;
    int altura_joao = 121;
    int idade_maria = 13;
    int altura_maria = 158;
    int anos = 0;

    while ( altura_joao <= altura_maria) {
        idade_joao++;
        altura_joao += 2;
        idade_maria++;
        altura_maria++;
        printf("\nidade joao: %d \n idade maria: %d", idade_joao, idade_maria);
        anos++;
    }

    printf("\na) Joao tera altura maior que Maria em %d anos.\n", anos);
    printf("\nb) Quando Joao tiver %d anos, ele ter� a mesma altura que Maria, que tambem tera %d anos.\n", idade_joao, idade_maria);

    return 0;
}
