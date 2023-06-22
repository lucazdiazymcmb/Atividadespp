#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemVogais = 0;
    int contagemConsoantes = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = toupper(caractere);

        if (isalpha(caractere)) {
            if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
                contagemVogais++;
            } else {
                contagemConsoantes++;
            }
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d letra(s) vogal(is) e %d letra(s) consoante(s).\n", contagemVogais, contagemConsoantes);

    return 0;
}
