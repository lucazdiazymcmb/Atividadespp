#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Conteúdo do vetor (da última posição até a primeira):\n");

    for (int i = 9; i >= 0; i--) {
        printf("%d ", *(vetor + i));
    }

    printf("\n");

    return 0;
}
