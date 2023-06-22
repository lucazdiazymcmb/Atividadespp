#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 30

void inverterString(char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saida.\n");
        return 1;
    }

    char linha[MAX_LENGTH + 1];

    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        linha[strcspn(linha, "\n")] = '\0';

        inverterString(linha);

        fprintf(arquivoSaida, "%s\n", linha);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}
