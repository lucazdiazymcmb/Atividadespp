#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float produto, valor;

    printf ("\nDigite o valor do Produto\n");
    scanf ("%f", &produto);

valor = produto - (produto * 12/100);

    printf ("\nCom 12 %% de desconto o produto saira por: %0.2f Reais\n", valor);

    system ("pause");

    return 0;
}