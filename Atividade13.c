#include <stdio.h>
#include <stdlib.h>

int main (){
    float m, k;

    printf ("Informe a distancia em quilometros\n");
    scanf ("%f", &k);

m = k/1.61;

    printf ("\nA conversao para milhas e: %8.3f\n",m);

    system ("pause");

    return 0;
}