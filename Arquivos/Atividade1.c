#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite os caracteres a serem gravados no arquivo (digite '0' para encerrar):\n");

    while (1) {
        scanf(" %c", &caractere);
        if (caractere == '0') {
            break;
        }
        fputc(caractere, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("\nConteudo do arquivo:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    printf("\n");

    fclose(arquivo);

    return 0;
}
