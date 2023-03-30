#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float venda, comissao;
    
    printf("\nDigite o valor da venda:\n ");
    scanf("%f", &venda);
    
    if (venda >= 100000.0) {
        comissao = 700.0 + 0.16 * venda;
    } else if (venda >= 80000.0) {
        comissao = 650.0 + 0.14 * venda;
    } else if (venda >= 60000.0) {
        comissao = 600.0 + 0.14 * venda;
    } else if (venda >= 40000.0) {
        comissao = 550.0 + 0.14 * venda;
    } else if (venda >= 20000.0) {
        comissao = 500.0 + 0.14 * venda;
    } else {
        comissao = 400.0 + 0.14 * venda;
    }
    
    printf("\nA comissao a ser paga e: R$ %.2f\n", comissao);
    
    system ("pause");

    return 0;
}