#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, d1, d2, i;
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        d1 = rand() % 6 + 1; // gera um número aleatório entre 1 e 6 para o primeiro dado
        d2 = rand() % 6 + 1; // gera um número aleatório entre 1 e 6 para o segundo dado

        printf("Lancamento %d: Dado 1: %d, Dado 2: %d, ", i, d1, d2);

        if(d1 > d2) {
            printf("Dado 1 eh maior\n");
        } else if(d1 < d2) {
            printf("Dado 2 eh maior\n");
        } else {
            printf("Dado 1 e Dado 2 sao iguais\n");
        }
    }

    return 0;
}