#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CARACTERES 1000

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int numCaracteres = 0;
    int numLinhas = 0;
    int numPalavras = 0;
    int contadorLetras[26] = {0};  // Array para contar as letras do alfabeto (ignorando acentos)

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê cada caractere do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        numCaracteres++;

        // Conta as letras do alfabeto (ignorando acentos)
        if (isalpha(caractere)) {
            caractere = tolower(caractere);
            contadorLetras[caractere - 'a']++;
        }

        // Conta as linhas e palavras
        if (caractere == '\n') {
            numLinhas++;
        }

        if (caractere == ' ' || caractere == '\n' || caractere == '\t') {
            numPalavras++;
        }
    }

    // Incrementa o número de palavras para considerar a última palavra da última linha
    numPalavras++;

    // Fecha o arquivo
    fclose(arquivo);

    printf("Número de caracteres: %d\n", numCaracteres);
    printf("Número de linhas: %d\n", numLinhas);
    printf("Número de palavras: %d\n", numPalavras);

    printf("Ocorrências de letras:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, contadorLetras[i]);
    }

    return 0;
}
