#include <stdio.h>
#include <stdlib.h>

int main (){
    float c, p;

    printf ("Informe o comprimento em centimetros\n");
    scanf ("%f", &c);

p = c/2.54;

    printf ("\nA conversao em polegadas e: %8.3f\n",p);

    system ("pause");

    return 0;
}