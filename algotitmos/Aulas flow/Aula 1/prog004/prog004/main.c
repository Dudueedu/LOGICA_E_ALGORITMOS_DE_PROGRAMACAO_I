#include <stdio.h>


main()
{
    int idd;

    printf("Digite sua idade:");
    scanf("%d", &idd);

    if(idd <=1){
        printf("Recem nascido");
    }

    else if ( idd > 1 && idd <= 6){
        printf("Criança");
    }

    else if ( idd > 6&& idd <= 9){
        printf("Criança velha");
    }

    else if ( idd > 9 && idd <= 10){
        printf("Pré adolescente");
    }

     else if ( idd > 11 && idd <= 14){
        printf("Adolescente");
    }

    else if ( idd > 14 && idd <= 17){
        printf("Adolescente maduro");
    }

    else if ( idd > 17 && idd <= 21){
        printf("Jovem adulto");
    }

    else if ( idd >21 && idd <=39){
        printf("Adulto");
    }

    else if ( idd >39 && idd <= 59){
        printf("Adulto velho");
    }

    else if ( idd > 59 && idd < 80) {
        printf("Idoso");
    }

    else {
        printf("A beira da morte");
    }
}
