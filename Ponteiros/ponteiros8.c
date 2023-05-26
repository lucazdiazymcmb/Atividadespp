#include <stdio.h>

int main() {
    int numeros[6];
    int *ptr;

    printf("Digite seis numeros:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nValores do vetor:\n");
    ptr = numeros; 

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n\nEnderecos de memoria:\n");
    for (int i = 0; i < 6; i++) {
        printf("%p ", (ptr + i));
    }

    printf("\n");

    return 0;
}
