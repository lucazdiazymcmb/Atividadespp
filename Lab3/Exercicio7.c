#include <stdio.h>

int main() {
    int num, conta, soma;
    float media;

    soma = conta = 0;
    printf("Digite 10 números positivos:\n");
    while (conta < 10) {
        scanf("%d", &num);
        if (num > 0) {
            soma += num;
            conta++;
        }
    }

    media = (float) soma / conta;
    printf("Média: %.2f\n", media);

    return 0;
}