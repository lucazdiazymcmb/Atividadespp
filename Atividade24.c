#include <stdio.h>
#include <stdlib.h>

int main (){
float a, m;

    printf ("Informe um valor em metros quadrados\n");
    scanf ("%f", &m);

a = m*0.000247;

    printf ("\nA conversao em acres e: %8.3f\n",a);

    system ("pause");

    return 0;
}