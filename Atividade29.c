#include <stdio.h>
#include <stdlib.h>

int main (){
    float soma, media, nota1, nota2, nota3, nota4;

    printf ("\nInforme as notas 1, 2, 3 e 4\n");

    printf ("\nDigite nota 1\n");
    scanf ("%f", &nota1);

    printf ("\nDigite nota 2\n");
    scanf ("%f", &nota2);  

    printf ("\nDigite nota 3\n");
    scanf ("%f", &nota3);  

    printf ("\nDigite nota 4\n");
    scanf ("%f", &nota4);

soma = nota1 + nota2 + nota3 + nota4;

    printf ("\nA Soma das 4 notas %.2f\n", soma);
media = soma / 4;

    printf ("\nA media das notas e: %.2f\n", media);

    system ("pause");

    return 0;
}