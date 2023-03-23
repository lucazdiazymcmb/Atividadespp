#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, antecessor, sucessor;

    printf ("\nDigite um numero inteiro\n");
    scanf ("%d", &num1);

antecessor = num1 - 1;

    printf ("\nO numero Antecessor e:%d\n", antecessor);

sucessor = num1 + 1;

    printf ("\nO numero Sucessor e:%d\n", sucessor);

    system ("pause");

    return 0;
}