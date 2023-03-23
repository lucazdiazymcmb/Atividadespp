#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float Salario, Aumento;

    printf ("\nDigite o valor do salario\n");
    scanf ("%f", &Salario);

Aumento = Salario + (Salario * 25/100);

    printf ("\nCom 25 %% de aumento o novo salario sera: %0.2f Reais\n", Aumento);

    system ("pause");

    return 0;
}