#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 5
#define TAMANHO_NOME 31
#define NUM_LINHAS 5

void exibirMatriz(char matriz[NUM_LINHAS][TAMANHO_NOME]) {
    for (int i = 0; i < NUM_LINHAS; i++) {
        printf("Linha %d: %s\n", i + 1, matriz[i]);
    }
    printf("\n");
}

int main() {
    char matriz[NUM_LINHAS][TAMANHO_NOME];
    char nomes[MAX_NOMES][TAMANHO_NOME];
    int contadorNomes = 0;

    // Inicializar matriz com nomes vazios
    for (int i = 0; i < NUM_LINHAS; i++) {
        strcpy(matriz[i], "");
    }

    char opcao;
    do {
        printf("Opcoes:\n");
        printf("a) Gravar um nome em uma linha da matriz\n");
        printf("b) Apagar o nome contido em uma linha da matriz\n");
        printf("c) Substituir um nome por outro em uma linha da matriz\n");
        printf("d) Apagar um nome em uma linha da matriz\n");
        printf("e) Recuperar o nome contido em uma linha da matriz\n");
        printf("Escolha uma opcao (a, b, c, d, e) ou 's' para sair: ");
        scanf(" %c", &opcao);

        int linha;
        char nome[TAMANHO_NOME];
        switch (opcao) {
            case 'a':
                if (contadorNomes < MAX_NOMES) {
                    printf("Digite o nome a ser gravado: ");
                    scanf("%s", nome);
                    printf("Digite o numero da linha (1 a %d): ", NUM_LINHAS);
                    scanf("%d", &linha);
                    linha--; // Ajuste para índice da matriz
                    if (linha >= 0 && linha < NUM_LINHAS) {
                        strcpy(matriz[linha], nome);
                        printf("Nome gravado com sucesso!\n\n");
                    } else {
                        printf("Linha invalida!\n\n");
                    }
                } else {
                    printf("Numero maximo de nomes atingido!\n\n");
                }
                break;
            case 'b':
                printf("Digite o numero da linha (1 a %d): ", NUM_LINHAS);
                scanf("%d", &linha);
                linha--; // Ajuste para índice da matriz
                if (linha >= 0 && linha < NUM_LINHAS) {
                    strcpy(matriz[linha], "");
                    printf("Nome apagado com sucesso!\n\n");
                } else {
                    printf("Linha invalida!\n\n");
                }
                break;
            case 'c':
                printf("Digite o nome a ser substituido: ");
                scanf("%s", nome);
                printf("Digite o novo nome: ");
                scanf("%s", matriz[linha]);
                printf("Digite o numero da linha (1 a %d): ", NUM_LINHAS);
                scanf("%d", &linha);
                linha--; // Ajuste para índice da matriz
                if (linha >= 0 && linha < NUM_LINHAS) {
                    strcpy(matriz[linha], nome);
                    printf("Nome substituido com sucesso!\n\n");
                } else {
                    printf("Linha invalida!\n\n");
                }
                break;
            case 'd':
                printf("Digite o nome a ser apagado: ");
                scanf("%s", nome);
                printf("Digite o numero da linha (1 a %d): ", NUM_LINHAS);
                scanf("%d", &linha);
                linha--; // Ajuste para índice da matriz
                if (linha >= 0 && linha < NUM_LINHAS) {
                    if (strcmp(matriz[linha], nome) == 0) {
                        strcpy(matriz[linha], "");
                        printf("Nome apagado com sucesso!\n\n");
                    } else {
                        printf("Nome nao encontrado!\n\n");
                    }
                } else {
                    printf("Linha invalida!\n\n");
                }
                break;
            case 'e':
                printf("Digite o numero da linha (1 a %d): ", NUM_LINHAS);
                scanf("%d", &linha);
                linha--; // Ajuste para índice da matriz
                if (linha >= 0 && linha < NUM_LINHAS) {
                    if (strcmp(matriz[linha], "") != 0) {
                        printf("Nome na linha %d: %s\n\n", linha + 1, matriz[linha]);
                    } else {
                        printf("Nome nao encontrado!\n\n");
                    }
                } else {
                    printf("Linha invalida!\n\n");
                }
                break;
            case 's':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
                break;
        }

        exibirMatriz(matriz);
    } while (opcao != 's');

    return 0;
}
