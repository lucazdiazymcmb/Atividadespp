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

    // Conta quantos números são pares e quantos são ímpares
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    // Mostra a quantidade de números pares e ímpares
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    // Libera a memória alocada
    free(vetor);

    return 0;
}
