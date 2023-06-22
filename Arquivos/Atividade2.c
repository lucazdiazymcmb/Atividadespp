#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemLinhas = 0;
    char caractere;

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê cada caractere do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contagemLinhas++;
        }
    }

    // Verifica se a última linha não foi contabilizada (caso o arquivo não termine com uma quebra de linha)
    if (caractere != '\n' && contagemLinhas > 0) {
        contagemLinhas++;
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe o número de linhas
    printf("O arquivo possui %d linha(s).\n", contagemLinhas);

    return 0;
}
