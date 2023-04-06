#include <stdio.h>

int main() {
    int i, valor, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores digitados eh: %d\n", soma);

    return 0;
}