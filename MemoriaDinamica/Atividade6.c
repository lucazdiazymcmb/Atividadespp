#include <stdio.h>
#include <stdlib.h>

void inicializarMemoria(int* memoria, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        memoria[i] = 0;
    }
}

void inserirValor(int* memoria, int posicao, int valor) {
    memoria[posicao] = valor;
}

int consultarValor(int* memoria, int posicao) {
    return memoria[posicao];
}

int main() {
    int tamanho;

    printf("Digite o tamanho da memoria em bytes: ");
    scanf("%d", &tamanho);

    if (tamanho % sizeof(int) != 0) {
        printf("Tamanho invalido! O tamanho da memoria deve ser multiplo de %lu bytes.\n", sizeof(int));
        return 1;
    }

    int numElementos = tamanho / sizeof(int);

    int* memoria = (int*) malloc(tamanho);

    if (memoria == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    inicializarMemoria(memoria, numElementos);

    int opcao, posicao, valor;

    do {
        printf("\nOpcoes:\n");
        printf("1. Inserir valor em uma posicao\n");
        printf("2. Consultar valor em uma posicao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posicao: ");
                scanf("%d", &posicao);
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirValor(memoria, posicao, valor);
                break;
            case 2:
                printf("Digite a posicao: ");
                scanf("%d", &posicao);
                valor = consultarValor(memoria, posicao);
                printf("Valor na posicao %d: %d\n", posicao, valor);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida! Digite uma opção valida.\n");
                break;
        }
    } while (opcao != 0);

    free(memoria);

    return 0;
}
