#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float Comprimento, Largura, Tela, terreno;

    printf("\nDigite o tamanho comprimento e da largura do terreno\n");

    scanf("%f %f", &Comprimento, &Largura);

    printf("\nDigite o valor da tela:\n");

    scanf("%f", &Tela);

terreno = 2 * (Comprimento + Largura) * Tela;

    printf ("\nO valor para cercar o terreno e: %.3f reais\n", terreno);

    return 0;
}
