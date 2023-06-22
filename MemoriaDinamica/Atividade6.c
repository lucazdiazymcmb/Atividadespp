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

    // Solicita ao usuário o tamanho da memória em bytes
    printf("Digite o tamanho da memória em bytes: ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho da memória é múltiplo do tamanho do tipo inteiro
    if (tamanho % sizeof(int) != 0) {
        printf("Tamanho inválido! O tamanho da memória deve ser múltiplo de %lu bytes.\n", sizeof(int));
        return 1;
    }

    // Calcula o número de elementos do vetor de memória
    int numElementos = tamanho / sizeof(int);

    // Aloca dinamicamente memória para o vetor de memória
    int* memoria = (int*) malloc(tamanho);

    // Verifica se a alocação de memória foi bem-sucedida
    if (memoria == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    // Inicializa a memória com todos os dados zerados
    inicializarMemoria(memoria, numElementos);

    int opcao, posicao, valor;

    // Menu de opções
    do {
        printf("\nOpções:\n");
        printf("1. Inserir valor em uma posição\n");
        printf("2. Consultar valor em uma posição\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirValor(memoria, posicao, valor);
                break;
            case 2:
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                valor = consultarValor(memoria, posicao);
                printf("Valor na posição %d: %d\n", posicao, valor);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida! Digite uma opção válida.\n");
                break;
        }
    } while (opcao != 0);

    // Libera a memória alocada
    free(memoria);

    return 0;
}
