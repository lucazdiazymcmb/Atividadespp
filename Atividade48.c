#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int Segundos, H, M , S, tempo;
    
    printf ("\nDigite um valor inteiro em segundos\n");
    scanf ("%d", &Segundos);

H = Segundos / 3600;
tempo = Segundos % 3600;
M = tempo / 60;
S = tempo % 60;

    printf ("\nA hora e: %d:%d:%d\n", H, M, S);

    system ("pause");

    return 0;
}