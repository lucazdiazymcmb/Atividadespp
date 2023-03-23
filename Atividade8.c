#include <stdio.h>
#include <stdlib.h>

int main (){
    int k;
    float c;

    printf ("Informe a Temperatura em graus Kelvin\n");
    scanf ("%d", &k);

c = k-273.15;

    printf ("\nA Temperatura em Celsius e: %8.3f\n",c);

    system ("pause");

    return 0;
}