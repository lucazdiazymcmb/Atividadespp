#include <stdio.h>

int main() {
    char nomeArquivo1[100];
    char nomeArquivo2[100];
    char nomeArquivo3[100];
    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;
    int ch;

    // Solicita o nome do primeiro arquivo ao usuário
    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo1);

    // Abre o primeiro arquivo para leitura
    arquivo1 = fopen(nomeArquivo1, "r");

    if (arquivo1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo.\n");
        return 1;
    }

    // Solicita o nome do segundo arquivo ao usuário
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo2);

    // Abre o segundo arquivo para leitura
    arquivo2 = fopen(nomeArquivo2, "r");

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o segundo arquivo.\n");
        fclose(arquivo1);
        return 1;
    }

    // Solicita o nome do terceiro arquivo ao usuário
    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArquivo3);

    // Abre o terceiro arquivo para escrita
    arquivo3 = fopen(nomeArquivo3, "w");

    if (arquivo3 == NULL) {
        printf("Erro ao criar o terceiro arquivo.\n");
        fclose(arquivo1);
        fclose(arquivo2);
        return 1;
    }

    // Lê e escreve o conteúdo do primeiro arquivo
    while ((ch = fgetc(arquivo1)) != EOF) {
        fputc(ch, arquivo3);
    }

    // Lê e escreve o conteúdo do segundo arquivo
    while ((ch = fgetc(arquivo2)) != EOF) {
        fputc(ch, arquivo3);
    }

    // Fecha os arquivos
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Terceiro arquivo criado com sucesso.\n");

    return 0;
}
