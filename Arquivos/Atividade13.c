#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_TELEFONE 15

int main() {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    FILE *arquivo;

    // Abre o arquivo para escrita
    arquivo = fopen("cadastro.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Solicita ao usuário que entre com os dados de cadastro
    printf("Cadastro de Nomes e Telefones\n");
    printf("Digite o nome (ou '0' para finalizar): ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha

    // Loop para cadastrar os nomes e telefones
    while (strcmp(nome, "0") != 0) {
        printf("Digite o telefone: ");
        fgets(telefone, sizeof(telefone), stdin);
        telefone[strcspn(telefone, "\n")] = '\0';  // Remove o caractere de nova linha

        // Escreve o nome e telefone no arquivo
        fprintf(arquivo, "%s %s\n", nome, telefone);

        // Solicita o próximo nome
        printf("Digite o nome (ou '0' para finalizar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Cadastro salvo com sucesso!\n");

    return 0;
}
