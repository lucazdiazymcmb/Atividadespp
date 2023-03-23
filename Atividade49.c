#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int H, h, Hr, M , m, Mr , S , s, Sr, SegundosTotais, tempo;

    printf ("\nInforme em Hora, Minuto e Segundo o inicio da experiencia biologica\n");
    scanf ("%d %d %d", &H, &M, &S);

h = H * 3600;
m = M * 60;

    printf ("\nInforme a duracao da experiencia em segundos\n");
    scanf ("%d", &s);

SegundosTotais =  s + S + h + m;
Hr = SegundosTotais / 3600;
tempo = SegundosTotais % 3600;
Mr = tempo / 60;
Sr = tempo % 60;
    
    printf ("\nA hora do termino da experiencia e: %d:%d:%d\n", Hr, Mr, Sr);

    system ("pause");

    return 0;
}