#include <stdio.h>
#include <stdlib.h>

int main (){
    int c;
    float f;

    printf ("Informe a Temperatura em Celsius\n");
    scanf ("%d", &c);

f = c*(9.0/5.0)+32.0;

    printf ("\nA Temperatura em Fahrenheit e: %8.3f\n",f);

    system ("pause");

    return 0;
}