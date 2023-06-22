#include <stdio.h>
#include <stdlib.h>

void lerMatriz(float** matriz, int linhas, int colunas) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(float** matriz, int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float** matriz = (float**)malloc(linhas * sizeof(float*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float*)malloc(colunas * sizeof(float));
    }

    lerMatriz(matriz, linhas, colunas);

    imprimirMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
