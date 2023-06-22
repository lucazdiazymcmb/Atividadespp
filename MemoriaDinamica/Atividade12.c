#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int numProdutos;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &numProdutos);

    Produto* produtos = (Produto*) malloc(numProdutos * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < numProdutos; i++) {
        printf("\nCadastro do Produto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &(produtos[i].codigo));

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Quantidade: ");
        scanf("%d", &(produtos[i].quantidade));

        printf("Preco: ");
        scanf("%f", &(produtos[i].preco));
    }

    int indiceMaiorPreco = 0;
    float maiorPreco = produtos[0].preco;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].preco > maiorPreco) {
            maiorPreco = produtos[i].preco;
            indiceMaiorPreco = i;
        }
    }

    int indiceMaiorQuantidade = 0;
    int maiorQuantidade = produtos[0].quantidade;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].quantidade > maiorQuantidade) {
            maiorQuantidade = produtos[i].quantidade;
            indiceMaiorQuantidade = i;
        }
    }

    printf("\nProduto com o maior preco de venda:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorPreco].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorPreco].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorPreco].quantidade);
    printf("Preco: %.2f\n", produtos[indiceMaiorPreco].preco);

    printf("\nProduto com a maior quantidade disponivel no estoque:\n");
    printf("Codigo: %d\n", produtos[indiceMaiorQuantidade].codigo);
    printf("Nome: %s\n", produtos[indiceMaiorQuantidade].nome);
    printf("Quantidade: %d\n", produtos[indiceMaiorQuantidade].quantidade);
    printf("Preco: %.2f\n", produtos[indiceMaiorQuantidade].preco);

    free(produtos);

    return 0;
}
