#include <stdio.h>
#include <stdlib.h>

int main (){
    int m;
    float k;

    printf ("Informe a velocidade em m/s (metros por segundo)\n");
    scanf ("%d", &m);

k = m*3.6;

    printf ("\nA conversao em km/h (quilometros por hora) e: %8.3f\n",k);

    system ("pause");

    return 0;
}