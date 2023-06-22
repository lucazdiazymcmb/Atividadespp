#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;
    
    printf("Quantos valores deseja armazenar no vetor? ");
    scanf("%d", &tamanho);

    if (tamanho < 10) {
        printf("O tamanho do vetor deve ser maior ou igual a 10.\n");
        return 1;
    }

    double* vetor = (double*) malloc(tamanho * sizeof(double));

    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        vetor[i] = (double) (rand() % 101); // Atribui um valor aleatório entre 0 e 100
    }

    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
