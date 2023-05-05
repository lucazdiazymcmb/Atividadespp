#include <stdio.h>

int main() {
    int vetor[10], i, j, repetido;
    for (i = 0; i < 10; i++) {
        repetido = 1;
        while (repetido) {
            printf("Digite o valor da posicao %d: ", i);
            scanf("%d", &vetor[i]);
            repetido = 0;
            for (j = 0; j < i; j++) {
                if (vetor[i] == vetor[j]) {
                    printf("Numero repetido, digite outro.\n");
                    repetido = 1;
                }
            }
        }
    }
    printf("Os numeros fornecidos foram: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}