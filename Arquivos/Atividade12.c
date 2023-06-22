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
    int contadorLetras[26] = {0}; 

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        numCaracteres++;

        if (isalpha(caractere)) {
            caractere = tolower(caractere);
            contadorLetras[caractere - 'a']++;
        }

        if (caractere == '\n') {
            numLinhas++;
        }

        if (caractere == ' ' || caractere == '\n' || caractere == '\t') {
            numPalavras++;
        }
    }

    numPalavras++;

    fclose(arquivo);

    printf("Numero de caracteres: %d\n", numCaracteres);
    printf("Numero de linhas: %d\n", numLinhas);
    printf("Numero de palavras: %d\n", numPalavras);

    printf("Ocorrencias de letras:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, contadorLetras[i]);
    }

    return 0;
}
