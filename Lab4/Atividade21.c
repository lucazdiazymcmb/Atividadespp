#include <stdio.h>

void imprimir(int n);

int main() {
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    imprimir(n);
    return 0;
}

void imprimir(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
        }
        printf("\n");
    }
}
