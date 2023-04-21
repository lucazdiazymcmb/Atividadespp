#include <stdio.h>

int maior(int num1, int num2);
int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = maior(num1, num2);

    if (resultado == 1) {
        printf("%d eh o maior numero.\n", num1);
    } else if (resultado == -1) {
        printf("%d eh o maior numero.\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}

int maior(int num1, int num2) {
    if (num1 > num2) {
        return 1;
    } else if (num2 > num1) {
        return -1;
    } else {
        return 0;
    }
}
