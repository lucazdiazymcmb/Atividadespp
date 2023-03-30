#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Declaração das variáveis
    float valor, preco;
    int estado;

    // Entrada de dados
    printf("\nDigite o valor do produto:\n ");
    scanf("%f", &valor);
    printf("\nDigite o estado destino do produto (MG=1, SP=2, RJ=3, MS=4):\n ");
    scanf("%d", &estado);

    // Verificação do estado e cálculo do preço final
    switch (estado) {
        case 1:
            preco = valor * 1.07;
            break;
        case 2:
            preco = valor * 1.12;
            break;
        case 3:
            preco = valor * 1.15;
            break;
        case 4:
            preco = valor * 1.08;
            break;
        default:
            printf("\nErro: estado invalido.\n");
            return 1;
    }

    // Saída de dados
    printf("\nPreco final do produto: R$ %.2f\n", preco);

    system ("pause");

    return 0;
}