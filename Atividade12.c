#include <stdio.h>
#include <stdlib.h>

int main (){
    int m;
    float k;

    printf ("Informe a distancia em milhas\n");
    scanf ("%d", &m);

k = 1.61*m;

    printf ("\nA conversao para quilometros e: %8.3f\n",k);

    system ("pause");

    return 0;
}