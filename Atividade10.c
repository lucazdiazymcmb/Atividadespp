#include <stdio.h>
#include <stdlib.h>

int main (){
    int k;
    float m;

    printf ("Informe a velocidade em km/h (quilometros por hora)\n");
    scanf ("%d", &k);

m = k/3.6;

    printf ("\nA conversao em m/s (metros por segundo) e: %8.3f\n",m);

    system ("pause");

    return 0;
}