#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Os numeros naturais de 0 ate %d sao:\n", n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}