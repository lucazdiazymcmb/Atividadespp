#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME_CIDADE 41

typedef struct {
    char nome[MAX_NOME_CIDADE];
    int habitantes;
} Cidade;

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    Cidade cidade;
    Cidade cidadeMaisPopulosa;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    cidadeMaisPopulosa.habitantes = 0;

    while (fscanf(arquivoEntrada, "%40s %d", cidade.nome, &cidade.habitantes) == 2) {
        if (cidade.habitantes > cidadeMaisPopulosa.habitantes) {
            cidadeMaisPopulosa = cidade;
        }
    }

    fprintf(arquivoSaida, "%s %d\n", cidadeMaisPopulosa.nome, cidadeMaisPopulosa.habitantes);

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida criado com sucesso.\n");

    return 0;
}
