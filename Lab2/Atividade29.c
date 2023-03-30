#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    int i, a, b, resposta, acertos = 0;

    printf("\nResponda as seguintes perguntas de soma:\n");

    for (i = 1; i <= 5; i++) {
        a = rand() % 100 + 1; // gera um número aleatório entre 1 e 100
        b = rand() % 100 + 1; // gera outro número aleatório entre 1 e 100
        printf("\n%d Qual e a soma de %d + %d? ", i, a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            printf("\nResposta correta!\n");
            acertos++;
        } else {
            printf("\nResposta incorreta! A resposta correta era %d.\n", a + b);
        }
    }

    printf("\nVoce acertou %d perguntas de soma.\n", acertos);

    system ("pause");

    return 0;
}