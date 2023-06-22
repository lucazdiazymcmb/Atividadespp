#include <stdio.h>
#include <ctype.h>

#define ALFABETO_SIZE 26

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagem[ALFABETO_SIZE] = {0};

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(arquivo)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            contagem[ch - 'a']++;
        }
    }

    fclose(arquivo);

    for (int i = 0; i < ALFABETO_SIZE; i++) {
        printf("Letra %c: %d\n", 'a' + i, contagem[i]);
    }

    return 0;
}
