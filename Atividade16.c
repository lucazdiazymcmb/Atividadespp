#include <stdio.h>
#include <stdlib.h>

int main (){
    float c, p;

    printf ("Informe o comprimento em polegadas\n");
    scanf ("%f", &p);

c = p*2.54;

    printf ("\nA conversao em centímetros e: %8.2f\n",c);

    system ("pause");

    return 0;
}