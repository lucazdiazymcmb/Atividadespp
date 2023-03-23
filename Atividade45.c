#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    char Letra;
    char letra;

    printf ("\nDigite sua letra Maiuscula a ser convertida\n");
    scanf ("%c", &letra);

    Letra = letra + 32;

    printf ("\nA converssao minuscula dela: %c\n", Letra);

    system ("pause");

    return 0;
}