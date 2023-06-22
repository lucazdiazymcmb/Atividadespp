#include <stdio.h>

void zerarPosicoes(int matriz[][100], int linhas, int colunas, int posicoes[][2], int numPosicoes) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = 1;
        }
    }

    for (i = 0; i < numPosicoes; i++) {
        int linha = posicoes[i][0];
        int coluna = posicoes[i][1];
        matriz[linha][coluna] = 0;
    }
}

void imprimirMatriz(int matriz[][100], int linhas, int colunas) {
    int i, j;
  
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    int matriz[100][100];
    int linhas, colunas, numPosicoes, i;

    arquivoEntrada = fopen("matriz.txt", "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    fscanf(arquivoEntrada, "%d %d %d", &linhas, &colunas, &numPosicoes);

    int posicoes[100][2];
    for (i = 0; i < numPosicoes; i++) {
        fscanf(arquivoEntrada, "%d %d", &posicoes[i][0], &posicoes[i][1]);
    }

    fclose(arquivoEntrada);

    zerarPosicoes(matriz, linhas, colunas, posicoes, numPosicoes);

    arquivoSaida = fopen("matriz_saida.txt", "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        return 1;
    }

    for (i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivoSaida, "%d ", matriz[i][j]);
        }
        fprintf(arquivoSaida, "\n");
    }

    fclose(arquivoSaida);

    printf("Arquivo 'matriz_saida.txt' criado com sucesso!\n");

    return 0;
}
