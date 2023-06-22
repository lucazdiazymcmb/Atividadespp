#include <stdio.h>

int main() {
    char nomeArquivo1[100];
    char nomeArquivo2[100];
    char nomeArquivo3[100];
    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;
    int ch;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo1);

    arquivo1 = fopen(nomeArquivo1, "r");

    if (arquivo1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo.\n");
        return 1;
    }

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo2);

    arquivo2 = fopen(nomeArquivo2, "r");

    if (arquivo2 == NULL) {
        printf("Erro ao abrir o segundo arquivo.\n");
        fclose(arquivo1);
        return 1;
    }

    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArquivo3);

    arquivo3 = fopen(nomeArquivo3, "w");

    if (arquivo3 == NULL) {
        printf("Erro ao criar o terceiro arquivo.\n");
        fclose(arquivo1);
        fclose(arquivo2);
        return 1;
    }

    while ((ch = fgetc(arquivo1)) != EOF) {
        fputc(ch, arquivo3);
    }

    while ((ch = fgetc(arquivo2)) != EOF) {
        fputc(ch, arquivo3);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Terceiro arquivo criado com sucesso.\n");

    return 0;
}
