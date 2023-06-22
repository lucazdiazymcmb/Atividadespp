#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeProduto[100];
    float precoProduto, total = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("produtos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê os produtos e calcula o total da compra
    while (fscanf(arquivo, "%s %f", nomeProduto, &precoProduto) != EOF) {
        total += precoProduto;
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Total da compra: R$%.2f\n", total);

    return 0;
}
