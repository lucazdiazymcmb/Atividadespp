#include <stdio.h>
#include <stdlib.h>

int main (){
    float x, y, r, z, soma;

x = 10.456;
y = 46.876;

    printf ("x =%8.3f e y =%8.3f \n", x, y);

r = x + y;

    printf ("\nr = soma de x + y =%8.3f\n", x+y);

    printf ("\nDigite um numero real para z\n");
    scanf ("\n%f", &z);

    printf ("\nO Valor de z e: %.0f\n", z);

soma = r+z;

    printf ("\nA Soma de r + z e: = %8.3f\n", r+z);

    printf ("\nO valor Total e: %8.3f\n", soma);

    system ("pause");

    return 0;

}