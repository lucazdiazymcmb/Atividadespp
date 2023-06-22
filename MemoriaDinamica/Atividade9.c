#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5;
    int* vetor = (int*) malloc(tamanho * sizeof(int)); 

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    int numero;
    int contador = 0;

    printf("Digite os numeros (digite um numero negativo para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        vetor[contador] = numero;
        contador++;

        if (contador == tamanho) {
            tamanho *= 2; 
            vetor = (int*) realloc(vetor, tamanho * sizeof(int));
            
            if (vetor == NULL) {
                printf("Erro ao realocar memoria!");
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
