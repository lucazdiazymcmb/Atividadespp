#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, num3, antecessor, sucessor;

    printf ("\nDigite um numero inteiro\n");
    scanf ("%d", &num1);

num2 = num1 * 2;
antecessor = num2 - 1;
    printf ("\nO numero Antecessor e:%d\n", antecessor);

num3 = num1 * 3;
sucessor = num3 + 1;

    printf ("\nO numero Sucessor e:%d\n", sucessor);

    printf ("\nA Soma do Sucessor com Antecessor e: %d\n", sucessor + antecessor);

    system ("pause");

    return 0;
}