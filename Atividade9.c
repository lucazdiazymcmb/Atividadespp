#include <stdio.h>
#include <stdlib.h>

int main (){
    int c;
    float k;

    printf ("Informe a Temperatura em Celsius\n");
    scanf ("%d", &c);

k = c + 273.15;

    printf ("\nA Temperatura em graus Kelvin e: %8.3f\n",k);

    system ("pause");

    return 0;
}