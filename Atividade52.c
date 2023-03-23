#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
    float P1, P2, P3, M, L, A, X, premio, premio1, premio2, premio3;
        
    printf ("\nInforme o valor apostado do primeiro Amigo\n");
    scanf ("%f", &M);

    printf ("\nInforme o valor apostado do segundo Amigo\n");
    scanf ("%f", &L);

    printf ("\nInforme o valor apostado do terceiro Amigo\n");
    scanf ("%f", &A);

    printf ("\nQual foi o valor do premio\n");
    scanf ("%f", &premio);

X = M + L + A;
P1 = M * 100 / X;
premio1 = (premio * P1 / 100);           
P2 = L * 100 / X;
premio2 = (premio * P2/100);    
P3 = A * 100 / X;
premio3 = premio - premio1 - premio2;
    
    printf ("\nO Primeiro Amigo apostou %.2f%% e recebera %.2f do premio\n", P1, premio1);

    printf ("\nO Segundo Amigo apostou %.2f%% e recebera %.2f do premio\n", P2, premio2);
    
    printf ("\nO Terceiro Amigo apostou %.2f%% e recebera %.2f do premio\n", P3, premio3);

    system ("pause");

    return 0;
}