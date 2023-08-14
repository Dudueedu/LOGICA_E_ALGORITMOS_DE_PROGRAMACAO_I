#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char senha[30], login[30];



    printf("qual seu login?");
    scanf ("%s", login);

    printf("qual sua senha?");
    scanf ("%s", senha);

    if (login && senha){
        printf("Bem vindo!");
    }
    else{
        printf("Não foi possivel acessar o sistema")
    }
}
