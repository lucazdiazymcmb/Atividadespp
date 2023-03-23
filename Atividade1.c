#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2;

    printf ("\n escreva um numero inteiro\n");
    scanf ("%d", &num1);

    printf ("\nO primeiro numero inteiro e: %d\n", num1);

    printf ("\n escreva outro numero inteiro\n");
    scanf ("%d", &num2);

    printf ("\nO segundo numero inteiro e: %d\n", num2);
    printf ("\nSoma dos 2 numeros e = %d\n", num1+num2);

    system ("pause");

    return 0;

}