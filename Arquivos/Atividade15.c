#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

// Função para calcular a idade com base no ano de nascimento
int calcularIdade(int anoNasc, int anoAtual) {
    return anoAtual - anoNasc;
}

int main() {
    int anoAtual;
    char nomeArquivoEntrada[MAX_NOME];
    char nomeArquivoSaida[MAX_NOME];
    char nome[MAX_NOME];
    int anoNasc;
    FILE *arquivoEntrada;
    FILE *arquivoSaida;

    // Solicita o ano corrente
    printf("Digite o ano corrente: ");
    scanf("%d", &anoAtual);
    getchar(); // Captura o caractere de nova linha

    // Solicita o nome do arquivo de entrada
    printf("Digite o nome do arquivo de entrada: ");
    fgets(nomeArquivoEntrada, sizeof(nomeArquivoEntrada), stdin);
    nomeArquivoEntrada[strcspn(nomeArquivoEntrada, "\n")] = '\0';  // Remove o caractere de nova linha

    // Solicita o nome do arquivo de saída
    printf("Digite o nome do arquivo de saída: ");
    fgets(nomeArquivoSaida, sizeof(nomeArquivoSaida), stdin);
    nomeArquivoSaida[strcspn(nomeArquivoSaida, "\n")] = '\0';  // Remove o caractere de nova linha

    // Abre o arquivo de entrada para leitura
    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Cria o arquivo de saída
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    // Lê os dados do arquivo de entrada e escreve no arquivo de saída
    while (fscanf(arquivoEntrada, "%s %d", nome, &anoNasc) != EOF) {
        int idade = calcularIdade(anoNasc, anoAtual);

        if (idade < 18) {
            fprintf(arquivoSaida, "%s menor de idade\n", nome);
        } else if (idade > 18) {
            fprintf(arquivoSaida, "%s maior de idade\n", nome);
        } else {
            fprintf(arquivoSaida, "%s entrando na maior idade\n", nome);
        }
    }

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída gerado com sucesso!\n");

    return 0;
}
