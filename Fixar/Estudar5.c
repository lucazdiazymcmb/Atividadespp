#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int linhas, colunas;

    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Alocação dinâmica da matriz
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    // Preenchimento da matriz com números aleatórios
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100; // Números aleatórios de 0 a 99
        }
    }

    // Impressão da matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Desalocação da matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
