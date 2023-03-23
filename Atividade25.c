#include <stdio.h>
#include <stdlib.h>

int main (){
    float a, m;

    printf ("Informe um valor em acres\n");
    scanf ("%f", &a);

m = a*4048.58;

    printf ("\nA conversao em metros quadrados e: %8.3f\n",m);

    system ("pause");

    return 0;
}