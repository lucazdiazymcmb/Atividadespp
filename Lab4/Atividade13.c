#include <stdio.h>

float calcular(float num1, float num2, char operacao);
int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    resultado = calcular(num1, num2, operacao);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}

float calcular(float num1, float num2, char operacao) {
    switch(operacao) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 == 0) {
                printf("Erro: divisao por zero!\n");
                return 0;
            } else {
                return num1 / num2;
            }
        default:
            printf("Erro: operacao invalida!\n");
            return 0;
    }
}
