#include <stdio.h>
#include <stdlib.h>

int main (){
    float r, g, pi;

pi = 3.14159;

    printf ("Informe um angulo em graus\n");
    scanf ("%f", &g);

r = g * pi/180;

    printf ("\nA conversao de graus para radianos e: %8.3f\n",r);

    system ("pause");

    return 0;
}