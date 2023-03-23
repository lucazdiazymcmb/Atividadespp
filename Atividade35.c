#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a, b, hipotenusa;

    printf ("\nDefina o valor de A e B para Calcular a Hipotenusa\n");
    scanf ("%f %f", &a, &b);
    
hipotenusa = sqrt(a*a + b*b);

    printf ("\nO valor da Hipotenusa e:%0.3f\n", hipotenusa);

    system ("pause");

    return 0;
}