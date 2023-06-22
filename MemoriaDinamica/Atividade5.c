#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int* vetor = (int*) malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int X;

    printf("Digite um numero inteiro X: ");
    scanf("%d", &X);

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d eh multiplo de %d\n", vetor[i], X);
            count++;
        }
    }

    printf("Quantidade de multiplos de %d no vetor: %d\n", X, count);

    free(vetor);

    return 0;
}
