#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float Valor, Desconto, Parcela, comvista, comparcela;

    printf ("\nInforme o valor do produto\n");
    scanf ("%f", &Valor);

Desconto = Valor - (Valor * 10/100);

    printf ("\nValor cobrado com 10 %% de desconto %.2f", Desconto);

Parcela = Valor/3;

    printf ("\nValor Dividido em 3x %.2f", Parcela);

comvista = Desconto - Desconto + (Desconto * 5/100);

    printf ("\nValor da comissao do vendedor valor a vista: %.2f\n", comvista);

 comparcela = Valor - Valor + (Valor * 5/100);

    printf ("\nValor da comissao do vendedor valor com parcela: %.2f\n", comparcela);

    system ("pause");

    return 0;
}