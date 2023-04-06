#include <stdio.h>

int main() {
    int num, menor, maior, i;

    // Lê o primeiro número e inicializa as variáveis menor e maior com ele
    printf("Digite o primeiro numero: ");
    scanf("%d", &num);
    menor = num;
    maior = num;

    // Lê os próximos 9 números e atualiza as variáveis menor e maior, se necessário
    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num < menor) {
            menor = num;
        }

        if (num > maior) {
            maior = num;
        }
    }

    // Imprime o menor e o maior valor lidos
    printf("O menor valor lido foi: %d\n", menor);
    printf("O maior valor lido foi: %d\n", maior);

    return 0;
}