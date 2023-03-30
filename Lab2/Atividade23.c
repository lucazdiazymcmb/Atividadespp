#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int ano;
    printf("\nDigite um ano:\n ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("\n%d eh um ano bissexto.\n", ano);
    } else {
        printf("\n%d nao eh um ano bissexto.\n", ano);
    }

    system ("pause");

    return 0;
}