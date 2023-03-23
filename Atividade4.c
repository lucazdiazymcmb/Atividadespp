#include <stdio.h>
#include <stdlib.h>

int main (){
    float num1;

    printf ("Digite um numero real\n");
    scanf ("\n%f", &num1);

    printf ("Seu numero real: %f\n", num1);

    printf ("\nO resultado ao quadrado desse numero e:%f\n", num1*num1);

    system ("pause");

    return 0;
}