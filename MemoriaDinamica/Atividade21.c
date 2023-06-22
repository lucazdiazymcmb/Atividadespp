#include <stdio.h>

void lerMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int linhas1, int colunas1, int colunas2) {
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void exibirMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int a, b, c, d;
    printf("Digite as dimensoes das matrizes (a, b, c, d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b != c) {
        printf("Erro: o numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz.\n");
        return 1;
    }

    int matriz1[100][100];
    int matriz2[100][100];
    int produto[100][100];

    printf("Matriz 1:\n");
    lerMatriz(matriz1, a, b);

    printf("Matriz 2:\n");
    lerMatriz(matriz2, c, d);

    multiplicarMatrizes(matriz1, matriz2, produto, a, b, d);

    printf("Matriz 1:\n");
    exibirMatriz(matriz1, a, b);

    printf("Matriz 2:\n");
    exibirMatriz(matriz2, c, d);

    printf("Produto das matrizes:\n");
    exibirMatriz(produto, a, d);

    return 0;
}
