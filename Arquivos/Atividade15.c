#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

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

    printf("Digite o ano corrente: ");
    scanf("%d", &anoAtual);
    getchar(); 

    printf("Digite o nome do arquivo de entrada: ");
    fgets(nomeArquivoEntrada, sizeof(nomeArquivoEntrada), stdin);
    nomeArquivoEntrada[strcspn(nomeArquivoEntrada, "\n")] = '\0';

    printf("Digite o nome do arquivo de saida: ");
    fgets(nomeArquivoSaida, sizeof(nomeArquivoSaida), stdin);
    nomeArquivoSaida[strcspn(nomeArquivoSaida, "\n")] = '\0';

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquivoEntrada);
        return 1;
    }

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

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso!\n");

    return 0;
}
