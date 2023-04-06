#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n\n=== MENU DE OPCOES ===\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado da adicao: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Erro: divisao por zero.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                }
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}