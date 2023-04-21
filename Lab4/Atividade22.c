#include <stdio.h>

void estrela(int n);

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    estrela(n);
    return 0;
}

void estrela(int n) {
    for (int i = 1; i <= 2*n-1; i++) {
        if (i <= n) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
        } else {
            for (int j = 1; j <= 2*n-i; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
}
