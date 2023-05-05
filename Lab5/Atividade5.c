#include <stdio.h>

#define TAMANHO 50

int main() {
    int vetor[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = (i + 5*i) % (i + 1);
    }
    printf("Vetor gerado:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
