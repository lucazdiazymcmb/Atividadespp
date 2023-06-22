#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;
    int* vetor = (int*) calloc(tamanho, sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    int contadorZeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            contadorZeros++;
        }
    }
    printf("O vetor contem %d valores inicializados com zero.\n", contadorZeros);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("Primeiros 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Ultimos 10 elementos do vetor:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
