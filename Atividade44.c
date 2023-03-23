#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float Degrau, Altura, resultado;

    printf ("\nInforme quantos centimetros tem o degrau da escada\n");
    scanf ("%f", &Degrau);

    printf ("\nInforme ate que altura desejar subir em Metros\n");
    scanf ("%f", &Altura);

resultado = Altura * 100 / Degrau;

    printf ("\nPara atingir o objetivo devera subir %.0f Degrais\n", resultado);

    system ("pause");

    return 0;
}