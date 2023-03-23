#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float Salario, Resultado;

    printf ("\nInforme seu Salario Base\n");
    scanf ("%f", &Salario);

Resultado = Salario + (Salario * 5/100) - (Salario * 7/100);
    
    printf ("\nCom 5 %% de desconto e 7 %% de imposto, o salario a receber sera de: %.2f\n", Resultado);

    system ("pause");

    return 0;
}