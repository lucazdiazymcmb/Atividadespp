#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;

    // Leitura dos valores
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    // Cálculo e impressão da média
    float media = (float) soma / 10;
    printf("A media dos valores digitados eh: %.2f\n", media);

    return 0;
}