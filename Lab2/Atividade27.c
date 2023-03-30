#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int idade;
    printf("\nDigite a idade do nadador:\n ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        printf("\nCategoria: Infantil A\n");
    else if (idade >= 8 && idade <= 10)
        printf("\nCategoria: Infantil B\n");
    else if (idade >= 11 && idade <= 13)
        printf("\nCategoria: Juvenil A\n");
    else if (idade >= 14 && idade <= 17)
        printf("\nCategoria: Juvenil B\n");
    else if (idade >= 18)
        printf("\nCategoria: Senior\n");
    else
        printf("\nIdade invalida!\n");

    system ("pause");

    return 0;
}