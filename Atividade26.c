#include <stdio.h>
#include <stdlib.h>

int main (){
    float h, m;

    printf ("Informe um valor de area em metros quadrados\n");
    scanf ("%f", &m);

h = m*0.0001;

    printf ("\nA conversao em hectares e: %8.3f\n",h);

    system ("pause");

    return 0;
}