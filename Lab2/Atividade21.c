#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    
    printf("\nEscolha a opcao:\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("\nDigite os dois numeros para a soma:\n");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            printf("\nDigite os dois numeros para a diferenca:\n");
            scanf("%f %f", &num1, &num2);
            if(num1 > num2) {
                resultado = num1 - num2;
            } else {
                resultado = num2 - num1;
            }
            printf("\nResultado da diferenca: %.2f\n", resultado);
            break;
        case 3:
            printf("\nDigite os dois numeros para o produto:\n");
            scanf("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf("\nResultado do produto: %.2f\n", resultado);
            break;
        case 4:
            printf("\nDigite os dois numeros para a divisao:\n");
            scanf("%f %f", &num1, &num2);
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado da divisao: %.2f\n", resultado);
            } else {
                printf("\nErro: denominador igual a zero.\n");
            }
            break;
        default:
            printf("\nOpcao invalida.\n");
    }

    system ("pause");
        
    return 0;
}