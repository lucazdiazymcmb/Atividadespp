#include <stdio.h>

int main() {
    double vetor[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    printf("Conteudo do vetor:\n");

    for (int i = 9; i >= 0; i--) {
        printf("%.2lf ", vetor[i]);
    }

    printf("\n");

    return 0;
}
