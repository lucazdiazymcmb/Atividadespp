#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5; // Tamanho inicial do vetor
    int* vetor = (int*) malloc(tamanho * sizeof(int)); // Alocando memória inicial

    if (vetor == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    int numero;
    int contador = 0;

    printf("Digite os números (digite um número negativo para encerrar):\n");

    // Loop para ler os números digitados pelo usuário
    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break; // Encerra a leitura quando um número negativo é digitado
        }

        vetor[contador] = numero;
        contador++;

        // Redimensiona o vetor se necessário
        if (contador == tamanho) {
            tamanho *= 2; // Dobrando o tamanho do vetor
            vetor = (int*) realloc(vetor, tamanho * sizeof(int));
            
            if (vetor == NULL) {
                printf("Erro ao realocar memória!");
                return 1;
            }
        }
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
