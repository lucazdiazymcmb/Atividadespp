#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Aloca dinamicamente memória para o vetor
    int* vetor = (int*) malloc(N * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    // Solicita ao usuário os valores para preencher o vetor
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int X;
    
    // Solicita ao usuário o número inteiro X
    printf("Digite um número inteiro X: ");
    scanf("%d", &X);

    int count = 0;

    // Conta e mostra os múltiplos de X no vetor
    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d é múltiplo de %d\n", vetor[i], X);
            count++;
        }
    }

    // Mostra a quantidade de múltiplos encontrados
    printf("Quantidade de múltiplos de %d no vetor: %d\n", X, count);

    // Libera a memória alocada
    free(vetor);

    return 0;
}
