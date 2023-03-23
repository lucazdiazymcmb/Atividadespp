#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double Altura, Raio, Volume, pi;

pi = 3.14159;

    printf ("\nDigite a altura do cilindro\n");
    scanf ("%lf", &Altura);

    printf ("\nDigite o raio do cilindro\n");
    scanf ("%lf", &Raio);

Volume = pi * (pow(Raio, 2)) * Altura;

    printf ("\nO valor do Volume e:%lf", Volume);

    system ("pause");

    return 0;
}