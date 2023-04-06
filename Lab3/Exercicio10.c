#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 50; i++) {
        soma += 2 * i; // A cada iteração, soma o próximo número par
    }

    printf("A soma dos 50 primeiros numeros pares eh: %d\n", soma);

    return 0;
}