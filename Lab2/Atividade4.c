#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main (){
    float X, Maior;
    printf ("\nDigite um numero\n");
    scanf ("%f", &X);

    if (X >= 0){
Maior = sqrt (X);
    printf ("\nA raiz quadrada eh: %.3f\n", Maior);
    printf ("\nO numero ao quadrado eh: %.2f\n", X*X);
    }
    else {
    printf ("\nEsse numero nao eh valido\n");

    }
       
    system ("pause");

    return 0;
}