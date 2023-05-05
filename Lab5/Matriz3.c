#include <stdio.h>

int main()
{
    int matriz[4][4], maior = matriz[0][0], linha_maior, coluna_maior;
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    
    printf("\nMatriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nO maior valor da matriz eh %d e esta na linha %d e coluna %d.\n", maior, linha_maior+1, coluna_maior+1);
    
    return 0;
}
