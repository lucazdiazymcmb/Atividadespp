#include <stdio.h>

int main() {
    char nomeArquivo[100];
    char caractere;
    FILE *arquivo;
    int contagem = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(arquivo)) != EOF) {
        if (ch == caractere) {
            contagem++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' ocorre %d vez(es) no arquivo.\n", caractere, contagem);

    return 0;
}
