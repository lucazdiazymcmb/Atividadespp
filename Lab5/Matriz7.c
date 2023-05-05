#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int cartela[LINHAS][COLUNAS] = {0};
    int i, j, num;


    srand(time(NULL));


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            do {
                num = rand() % 100;
            } while (verifica_num(cartela, num, i, j)); 
            cartela[i][j] = num; 
        }
    }


    printf("Cartela gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int verifica_num(int cartela[LINHAS][COLUNAS], int num, int linha, int coluna) {
    int i, j;
    for (i = 0; i <= linha; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (cartela[i][j] == num && (i != linha || j != coluna)) {
                return 1; 
            }
        }
    }
    return 0;
}
