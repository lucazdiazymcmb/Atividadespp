#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, num3;

    printf ("Digite um numero inteiro\n");
    scanf ("%d", &num1);

    printf ("\nDigite outro inteiro\n");
    scanf ("%d", &num2);

    printf ("\nDigite mais inteiro\n");
    scanf ("%d", &num3);

    printf ("\nSoma de todos os inteiros %d\n\n", num1+num2+num3);

    system ("pause");

    return 0;
}