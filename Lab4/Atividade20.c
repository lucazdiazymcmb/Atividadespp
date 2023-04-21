#include <stdio.h>

int Primo(int n);
int Primos(int n);

int main() {
    int n = 100;
    int qtd = Primos(n);
    printf("Existem %d numeros primos abaixo de %d\n", qtd, n);
    return 0;
}

int Primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int Primos(int n) {
    int qtd = 0;
    for (int i = 2; i < n; i++) {
        if (Primo(i)) {
            qtd++;
        }
    }
    return qtd;
}
