#include <stdio.h>
#include <stdlib.h>

int main (){
    int f;
    float c;
    printf ("Informe a Temperatura em Fahrenheit\n");
    scanf ("%d", &f);

c = 5.0*(f- 32.0)/9.0;

    printf ("\nA Temperatura em Celsius e: %8.3f\n",c);


    system ("pause");

    return 0;
}