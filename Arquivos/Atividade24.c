#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DESCRICAO 50

typedef struct {
    int codigo;
    char descricao[MAX_DESCRICAO];
    int quantidade;
} Produto;

void cadastrarProduto(FILE* arquivo) {
    Produto produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &produto.codigo);

    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]s", produto.descricao);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);

    fwrite(&produto, sizeof(Produto), 1, arquivo);

    printf("Produto cadastrado com sucesso!\n");
}

void retirarProduto(FILE* arquivo) {
    int codigo;
    Produto produto;
    int encontrado = 0;

    printf("Digite o codigo do produto que deseja retirar: ");
    scanf("%d", &codigo);

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.codigo == codigo) {
            encontrado = 1;
            printf("Produto encontrado!\n");
            printf("Descricao: %s\n", produto.descricao);
            printf("Quantidade disponivel: %d\n", produto.quantidade);

            int quantidadeRetirar;
            printf("Digite a quantidade que deseja retirar: ");
            scanf("%d", &quantidadeRetirar);

            if (quantidadeRetirar <= produto.quantidade) {
                produto.quantidade -= quantidadeRetirar;

                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("Produto retirado com sucesso!\n");
            } else {
                printf("Quantidade indisponivel para retirada.\n");
            }

            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado.\n");
    }
}

void relatorioGeral(FILE* arquivo) {
    Produto produto;

    printf("Relatorio Geral:\n");

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        printf("Codigo: %d\n", produto.codigo);
        printf("Descricao: %s\n", produto.descricao);
        printf("Quantidade: %d\n", produto.quantidade);
        printf("------------------------\n");
    }
}

void relatorioNaoDisponiveis(FILE* arquivo) {
    Produto produto;
    int encontrouNaoDisponivel = 0;

    printf("Relatorio de Produtos Não Disponiveis:\n");

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.quantidade == 0) {
            printf("Codigo: %d\n", produto.codigo);
            printf("Descricao: %s\n", produto.descricao);
            printf("------------------------\n");
            encontrouNaoDisponivel = 1;
        }
    }

    if (!encontrouNaoDisponivel) {
        printf("Nenhum produto não disponivel encontrado.\n");
    }
}

int main() {
    FILE* arquivo;
    int opcao;

    arquivo = fopen("despensa.bin", "rb+");
    if (arquivo == NULL) {
        arquivo = fopen("despensa.bin", "wb+");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    }

    while (1) {
        printf("\nControle de Mercadorias\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Retirar Produto\n");
        printf("3. Relatorio Geral\n");
        printf("4. Relatorio de Produtos Não Disponiveis\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(arquivo);
                break;
            case 2:
                retirarProduto(arquivo);
                break;
            case 3:
                relatorioGeral(arquivo);
                break;
            case 4:
                relatorioNaoDisponiveis(arquivo);
                break;
            case 5:
                fclose(arquivo);
                return 0;
            default:
                printf("Opcao invalida. Digite novamente.\n");
                break;
        }
    }

    return 0;
}
