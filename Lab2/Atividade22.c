#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int idade, tempo;

    printf("\nInforme a idade do trabalhador:\n ");
    scanf("%d", &idade);

    printf("\nInforme o tempo de servico do trabalhador (em anos):\n ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("\nO trabalhador pode se aposentar!\n");
    } else {
        printf("\nO trabalhador ainda nao pode se aposentar.\n");
    }

    system ("pause");

    return 0;
}