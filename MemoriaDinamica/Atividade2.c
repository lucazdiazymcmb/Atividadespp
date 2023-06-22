#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    // Aloca dinamicamente memória para o vetor
    int* vetor = (int*) malloc(tamanho * sizeof(int));
    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }
    // Solicita ao usuário os valores para preencher o vetor
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    // Imprime o vetor lido
    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    // Libera a memória alocada
    free(vetor);

    return 0;
}
