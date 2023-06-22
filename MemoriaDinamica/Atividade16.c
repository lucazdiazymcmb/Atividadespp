#include <stdio.h>

void lerMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void criarMatrizTransposta(int matriz[][100], int transposta[][100], int linhas, int colunas) {
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
}

void exibirMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    int matriz[100][100];
    int transposta[100][100];

    lerMatriz(matriz, N, M);
    criarMatrizTransposta(matriz, transposta, N, M);

    exibirMatriz(matriz, N, M);
    printf("\n");

    exibirMatriz(transposta, M, N);

    return 0;
}
