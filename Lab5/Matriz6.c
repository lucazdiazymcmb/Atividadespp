#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, valor;
    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            do {
                printf("Digite o valor da posicao %d %d: ", i, j);
                scanf("%d", &valor);
            } while (valor < 1 || valor > 20);
            matriz[i][j] = valor;
        }
    }
    printf("Matriz do usuario: \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
    printf("Matriz transformada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}