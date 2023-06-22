#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int* vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int pares = 0;
    int impares = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);


    free(vetor);

    return 0;
}
