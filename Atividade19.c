#include <stdio.h>
#include <stdlib.h>

int main (){
    float l, m;

    printf ("Informe um valor de volume em litros\n");
    scanf ("%f", &l);

m = l /1000;

    printf ("\nA conversao em metros cubicos e: %8.3f\n",m);

    system ("pause");

    return 0;
}