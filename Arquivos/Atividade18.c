#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeProduto[100];
    float precoProduto, total = 0;

    arquivo = fopen("produtos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s %f", nomeProduto, &precoProduto) != EOF) {
        total += precoProduto;
    }

    fclose(arquivo);

    printf("Total da compra: R$%.2f\n", total);

    return 0;
}
