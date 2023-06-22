#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 50

int calcularIdade(int diaNasc, int mesNasc, int anoNasc, int diaHoje, int mesHoje, int anoHoje) {
    int idade = anoHoje - anoNasc;
    if (mesHoje < mesNasc || (mesHoje == mesNasc && diaHoje < diaNasc)) {
        idade--;
    }
    return idade;
}

int main() {
    char nomeArquivo[MAX_NOME];
    char nome[MAX_NOME];
    int diaNasc, mesNasc, anoNasc;
    int diaHoje, mesHoje, anoHoje;
    FILE *arquivoEntrada;
    FILE *arquivoSaida;

    printf("Digite o nome do arquivo de entrada: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';  

    arquivoEntrada = fopen(nomeArquivo, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    time_t t = time(NULL);
    struct tm *dataAtual = localtime(&t);
    diaHoje = dataAtual->tm_mday;
    mesHoje = dataAtual->tm_mon + 1;
    anoHoje = dataAtual->tm_year + 1900;

    arquivoSaida = fopen("idades.txt", "w");

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    while (fscanf(arquivoEntrada, "%s %d %d %d", nome, &diaNasc, &mesNasc, &anoNasc) != EOF) {
        int idade = calcularIdade(diaNasc, mesNasc, anoNasc, diaHoje, mesHoje, anoHoje);
        fprintf(arquivoSaida, "%s %d\n", nome, idade);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de idades gerado com sucesso!\n");

    return 0;
}
