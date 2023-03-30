#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int codigo, quantidade;
    float valor;

    printf("\nDigite o codigo do produto entre (100-106): \n");
    scanf("%d", &codigo);

    printf("\nQuantidade:\n ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            valor = quantidade * 1.2;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 101:
            valor = quantidade * 1.3;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 102:
            valor = quantidade * 1.5;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 103:
            valor = quantidade * 1.2;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 104:
            valor = quantidade * 1.7;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 105:
            valor = quantidade * 2.2;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        case 106:
            valor = quantidade * 1.0;
            printf("\nValor a pagar: R$%.2f\n", valor);
            break;
        default:
            printf("\nCodigo invalido\n");
    }

    system ("pause");

    return 0;
}