#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    printf("A soma dos divisores de %d (exceto ele mesmo) eh: %d\n", num, soma);

    return 0;
}