#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, x;
    int tem = 0;
    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um valor para verificar se ele esta na matriz: ");
    scanf("%d", &x);
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("Valor encontrado na posicao (%d,%d)\n", i, j);
                tem = 1;
                break;
            }
        }
    }
    if (!tem) {
        printf("Valor nao esta em nenhuma posicao desta matriz\n");
    }
    return 0;
}