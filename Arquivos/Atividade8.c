#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    int ch;

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

    // Lê cada caractere do arquivo de entrada, converte para maiúscula
    // usando a função toupper e escreve o caractere modificado no arquivo de saída
    while ((ch = fgetc(arquivoEntrada)) != EOF) {
        ch = toupper(ch);
        fputc(ch, arquivoSaida);
    }

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
