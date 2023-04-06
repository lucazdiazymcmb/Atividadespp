#include <stdio.h>

int main() {
    int n, i = 1, conta = 0;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    printf("Os %d primeiros numeros naturais impares sao: ", n);
    while (conta < n) {
        if (i % 2 != 0) {
            printf("%d ", i);
            conta++;
        }
        i++;
    }

    return 0;
}