#include <stdio.h>

int fatorial(int n);
int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    int fat = fatorial(n);
    printf("%d! = %d\n", n, fat);
    return 0;
}

int fatorial(int n) {
    int fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }
    return fat;
}
