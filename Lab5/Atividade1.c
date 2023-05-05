#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    A[4] = 100;
    
    printf("A soma dos valores de A[0], A[1] e A[5] eh: %d\n", soma);
    printf("Vetor A modificado:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}
