#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemLinhas = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contagemLinhas++;
        }
    }

    if (caractere != '\n' && contagemLinhas > 0) {
        contagemLinhas++;
    }

    fclose(arquivo);

    printf("O arquivo possui %d linha(s).\n", contagemLinhas);

    return 0;
}
