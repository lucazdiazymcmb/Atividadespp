#include <stdio.h>
#define ARQUIVO "load.txt"


void corinvspalm (int *corin, int *palm, int golscorin, int golspalm){
    if (golscorin > golspalm){
        *corin +=3;
    }else if (golscorin < golspalm){
        *palm +=3;

    }else{
        *corin +=1;
        *palm +=1;
        
    }

}
void salvardados(int corin, int palm) {
        FILE *file = fopen(ARQUIVO, "w");
        if (file != NULL) {
            fprintf (file, " Times      Pontos\n");
            fprintf(file, "Corinthians %d\n", corin);
            fprintf(file, "Palmeira %d\n", palm);
            fclose(file);
        }
}

int main (){
    int corin, palm;
    int golscorin, golspalm;
    printf ("Quantos pontos o Corinthians tinha antes da partida:\n");
    scanf ("%d", &corin);
    printf ("Quantos pontos o Palmeiras tinha antes da partida:\n");
    scanf ("%d", &palm);

    printf ("Quantos gols O Corinthians Fez:?\n");
    scanf("%d", &golscorin);

    printf ("Quantos Gols o Palmeiras Fez:?\n");
    scanf("%d", &golspalm);
    corinvspalm (&corin, &palm, golscorin, golspalm);
    
    printf ("Pontos do Corinthians %d\n", corin);
    printf ("Pontos do Palmeira %d\n", palm); 
    salvardados(corin,palm);
    

    return 0;
}