#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;
    int* vetor = (int*) calloc(tamanho, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    // Verificando se o vetor contém 1500 valores inicializados com zero
    int contadorZeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
    printf("O vetor contém %d valores inicializados com zero.\n", contadorZeros);

    // Atribuindo o valor do índice a cada elemento do vetor
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    // Exibindo os 10 primeiros elementos do vetor
    printf("Primeiros 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo os 10 últimos elementos do vetor
    printf("Últimos 10 elementos do vetor:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
