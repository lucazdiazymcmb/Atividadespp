#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a operação matematica desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nDigite os dois numeros para realizar a operacao: ");
    scanf("%f%f", &num1, &num2);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("\nA soma eh: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("\nA subtracao eh: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("\nA multiplicacao eh: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("\nNao eh possivel dividir por zero.\n");
            }
            else {
                resultado = num1 / num2;
                printf("\nA divisao eh: %.2f\n", resultado);
            }
            break;
        default:
            printf("\nOpcao invalida.\n");
            break;
    }

    system ("pause");
    
    return 0;
}