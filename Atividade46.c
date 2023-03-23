#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int nume, unidade, dezena, centena, invert;

    printf ("\nDigite um numero de 100 a 999\n");
    scanf ("%d", &nume);
    //
centena = nume / 100;
    //Parentese para calcular a expressão primeiro, depois de ter tirado a centena usa % para pegar o resto, e como precisa de um numero só 
    //você divide por 10  
dezena = (nume % 100) / 10;

unidade = nume % 10;

invert = unidade * 100 + dezena * 10 + centena;

    printf ("Invertido e: %d\n", invert);

    system ("pause");

    return 0;
}
