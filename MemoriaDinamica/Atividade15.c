#include <stdio.h>

void lerMatriz(int matriz[][100], int linhas, int colunas) {
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void encontrarMaioresNumeros(int matriz[][100], int linhas, int colunas) {
    int maiores[3] = {0}; 
    int linhasMaiores[3] = {0}; 
    int colunasMaiores[3] = {0}; 

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            int numero = matriz[i][j];
            for (int k = 0; k < 3; k++) {
                if (numero > maiores[k]) {
                    for (int l = 2; l > k; l--) {
                        maiores[l] = maiores[l - 1];
                        linhasMaiores[l] = linhasMaiores[l - 1];
                        colunasMaiores[l] = colunasMaiores[l - 1];
                    }
                    maiores[k] = numero;
                    linhasMaiores[k] = i;
                    colunasMaiores[k] = j;
                    break; 
                }
            }
        }
    }

    printf("Os maiores numeros sao:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero: %d | Linha: %d | Coluna: %d\n", maiores[i], linhasMaiores[i], colunasMaiores[i]);
    }
}

int main() {
    int N, M;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    int matriz[100][100];

    lerMatriz(matriz, N, M);

    encontrarMaioresNumeros(matriz, N, M);

    return 0;
}
