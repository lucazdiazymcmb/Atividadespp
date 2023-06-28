#include <stdio.h>

void pontosdostime (int *pontostimeA, int *pontostimeB, int golsA, int golsB){
    if (golsA > golsB){
        *pontostimeA += 3;
    }else if (pontostimeA < pontostimeB){
        pontostimeB += 3;
    }else {
        *pontostimeA +=1;
        *pontostimeB +=1;
    }
}
int main (){
    int pontostimeA, pontostimeB;
    int golsA, golsB;

    printf ("quantos pontos Time A tinha antes da partida:\n");
    scanf ("%d", &pontostimeA);
    printf ("quantos pontos Time B tinha antes da partida:\n");
    scanf ("%d", &pontostimeB);

    printf ("quantos gols Time A marcou:\n");
    scanf ("%d", &golsA);
    printf ("quantos gols Time B marcou:\n");
    scanf ("%d", &golsB);
    pontosdostime (&pontostimeA, &pontostimeB, golsA, golsB);
    printf("Time A: %d\n", pontostimeA );
    printf("Time B: %d\n", pontostimeB);

    return 0;
}