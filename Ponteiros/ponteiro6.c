#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int soma = *ptr1 + *ptr2;
    int subtracao = *ptr1 - *ptr2;
    int multiplicacao = *ptr1 * *ptr2;
    int divisao = *ptr1 / *ptr2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;
}
