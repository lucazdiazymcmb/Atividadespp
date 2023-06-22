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
    
    // Solicita o nome do arquivo de entrada ao usuário
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    // Abre o arquivo de entrada para leitura
    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Solicita o nome do arquivo de saída ao usuário
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    // Abre o arquivo de saída para escrita
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    // Inicializa a cidade mais populosa com 0 habitantes
    cidadeMaisPopulosa.habitantes = 0;

    // Lê as cidades do arquivo de entrada e encontra a cidade mais populosa
    while (fscanf(arquivoEntrada, "%40s %d", cidade.nome, &cidade.habitantes) == 2) {
        if (cidade.habitantes > cidadeMaisPopulosa.habitantes) {
            cidadeMaisPopulosa = cidade;
        }
    }

    // Escreve a cidade mais populosa e seu número de habitantes no arquivo de saída
    fprintf(arquivoSaida, "%s %d\n", cidadeMaisPopulosa.nome, cidadeMaisPopulosa.habitantes);

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
