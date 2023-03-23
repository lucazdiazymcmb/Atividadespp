#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double raio, pi, area;

pi = 3.14159;

    printf ("\nDigite o raio do circulo\n");
    scanf ("%lf", &raio);

area = pi * pow(raio, 2);

    printf ("\nA Area do circulo e:%.3lf\n", area);

    system ("pause");

    return 0;
}