#include <stdio.h>
#include <stdlib.h>

int main (){   
    float j,m;

    printf ("Informe o comprimento em metros\n");
    scanf ("%f", &m);

j = m/0.91;

    printf ("\nA conversao para jardas e: %8.3f\n",j);

    system ("pause");

    return 0;
}