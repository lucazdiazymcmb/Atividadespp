#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float custo_fabrica, custo_consumidor, comissao, impostos;
    printf("\nDigite o custo de fabrica do carro:\n ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) {
        comissao = 0.05 * custo_fabrica;
        impostos = 0;
    } else if (custo_fabrica <= 25000) {
        comissao = 0.1 * custo_fabrica;
        impostos = 0.15 * custo_fabrica;
    } else {
        comissao = 0.15 * custo_fabrica;
        impostos = 0.2 * custo_fabrica;
    }

    custo_consumidor = custo_fabrica + comissao + impostos;
    printf("\nO custo ao consumidor e de R$%.2f\n", custo_consumidor);

    system ("pause");

    return 0;
}