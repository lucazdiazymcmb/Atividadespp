#include <stdio.h>

int main() {
    char nomeArquivo[100];
    char caractere;
    FILE *arquivo;
    int contagem = 0;

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Solicita o caractere ao usuário
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê cada caractere do arquivo e verifica se é igual ao caractere informado
    int ch;
    while ((ch = fgetc(arquivo)) != EOF) {
        if (ch == caractere) {
            contagem++;
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe o número de ocorrências na tela
    printf("O caractere '%c' ocorre %d vez(es) no arquivo.\n", caractere, contagem);

    return 0;
}
