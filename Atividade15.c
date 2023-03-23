#include <stdio.h>
#include <stdlib.h>

int main (){
    float r, g, pi;
    
    pi = 3.141592;

    printf ("Informe um angulo em radianos\n");
    scanf ("%f", &r);

g = r*180/pi;

    printf ("\nA conversao de radianos para graus e: %8.3f\n",g);

    system ("pause");

    return 0;
}