#include <stdio.h>
#include <stdlib.h>

int main (){
    float Real, Dolar;

    printf ("\nA valor atual do dolar e: 5,25\n");

    printf ("\nDigite o valor em Real\n");
    scanf ("%f", &Real);

Dolar = Real / 5.25;

    printf ("\nO Valor convertido para Dolar e: %.2f\n", Dolar);

    system ("pause");

    return 0;
}