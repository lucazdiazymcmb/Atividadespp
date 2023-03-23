#include <stdio.h>
#include <stdlib.h>

int main (){
    int m;
    float h;

    printf ("Informe um valor em hectares\n");
    scanf ("%f", &h);

m = h*10000;

    printf ("\nA conversao em metros quadrados e: %d\n",m);

    system ("pause");

    return 0;
}