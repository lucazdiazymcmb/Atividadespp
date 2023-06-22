#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_TELEFONE 15

int main() {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    FILE *arquivo;

    arquivo = fopen("cadastro.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Cadastro de Nomes e Telefones\n");
    printf("Digite o nome (ou '0' para finalizar): ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    while (strcmp(nome, "0") != 0) {
        printf("Digite o telefone: ");
        fgets(telefone, sizeof(telefone), stdin);
        telefone[strcspn(telefone, "\n")] = '\0';  

        fprintf(arquivo, "%s %s\n", nome, telefone);

        printf("Digite o nome (ou '0' para finalizar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; 
    }

    fclose(arquivo);

    printf("Cadastro salvo com sucesso!\n");

    return 0;
}
