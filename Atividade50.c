#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int Nascimento, Idade;

    printf ("\nInforme sua idade, considere ter feito aniversario no ano de 2023\n");
    scanf ("%d", &Idade);

Nascimento = 2023 - Idade;

    printf ("\nVoce nasceu no ano:%d\n", Nascimento);

    system ("pause");

    return 0;
}