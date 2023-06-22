#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

void lerMatriz(int** matriz, int linhas, int colunas) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int buscarValor(int** matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; // valor encontrado na matriz
            }
        }
    }
    return 0; // valor não encontrado na matriz
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int** matriz = alocarMatriz(linhas, colunas);
    lerMatriz(matriz, linhas, colunas);

    int valor;
    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &valor);

    int resultado = buscarValor(matriz, linhas, colunas, valor);

    if (resultado) {
        printf("O valor %d está na matriz.\n", valor);
    } else {
        printf("O valor %d não está na matriz.\n", valor);
    }

    liberarMatriz(matriz, linhas);

    return 0;
}
