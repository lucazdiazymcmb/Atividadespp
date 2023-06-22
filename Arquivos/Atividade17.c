#include <stdio.h>

void zerarPosicoes(int matriz[][100], int linhas, int colunas, int posicoes[][2], int numPosicoes) {
    int i, j;
  
    // Preenche a matriz com 1
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = 1;
        }
    }

    // Anula as posições especificadas
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

    // Abre o arquivo de entrada
    arquivoEntrada = fopen("matriz.txt", "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Lê as dimensões da matriz e a quantidade de posições a serem anuladas
    fscanf(arquivoEntrada, "%d %d %d", &linhas, &colunas, &numPosicoes);

    // Lê as posições a serem anuladas
    int posicoes[100][2];
    for (i = 0; i < numPosicoes; i++) {
        fscanf(arquivoEntrada, "%d %d", &posicoes[i][0], &posicoes[i][1]);
    }

    // Fecha o arquivo de entrada
    fclose(arquivoEntrada);

    // Chama a função para zerar as posições na matriz
    zerarPosicoes(matriz, linhas, colunas, posicoes, numPosicoes);

    // Abre o arquivo de saída
    arquivoSaida = fopen("matriz_saida.txt", "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }

    // Escreve a matriz no arquivo de saída
    for (i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivoSaida, "%d ", matriz[i][j]);
        }
        fprintf(arquivoSaida, "\n");
    }

    // Fecha o arquivo de saída
    fclose(arquivoSaida);

    printf("Arquivo 'matriz_saida.txt' criado com sucesso!\n");

    return 0;
}
