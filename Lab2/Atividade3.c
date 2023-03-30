#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main (){
    float X, Maior, Quadrado;
    printf ("\nDigite um numero\n");
    scanf ("%f", &X);

    if (X >= 0){
Maior = sqrt (X);
    printf ("\nA raiz quadrada eh: %.3f\n", Maior);
    }
    else {
    printf ("\nO numero ao quadrado eh: %.3f\n", X*X);

    }
       
    system ("pause");

    return 0;
}