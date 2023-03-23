#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float dias, ValorFinal, Desconto;

    printf ("\nInforme os dias Trabalhados\n");
    scanf ("%f", &dias);

ValorFinal = dias * 30;
Desconto = ValorFinal * 8/100;
ValorFinal = ValorFinal - Desconto;

    printf ("\n O valor liquido a receber e:%.2f\n", ValorFinal);

    system ("pause");

    return 0;
}