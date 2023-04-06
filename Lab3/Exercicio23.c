#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int conta = 1; // contador para preencher o triângulo
    for (int i = 1; i <= n; i++) { // loop pelas linhas do triângulo
        for (int j = 1; j <= i; j++) { // loop pelas colunas
            printf("%d ", conta); // imprime o número atual
            conta++; // incrementa o contador
        }
        printf("\n"); // pula para a próxima linha
    }

    return 0;
}