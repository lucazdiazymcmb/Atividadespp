#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float antigo, novo;
    printf("\nDigite o preco antigo:\n ");
    scanf("%f", &antigo);

    if (antigo <= 50) {
        novo = antigo * 1.05;
    } else if (antigo <= 100) {
        novo = antigo * 1.1;
    } else {
        novo = antigo * 1.15;
    }

    printf("\nPreco novo: R$%.2f\n", novo);

    if (novo <= 80) {
        printf("\nBarato\n");
    } else if (novo <= 120) {
        printf("\nNormal\n");
    } else if (novo <= 200) {
        printf("\nCaro\n");
    } else {
        printf("\nMuito caro\n");
    }

    system ("pause");

    return 0;
}