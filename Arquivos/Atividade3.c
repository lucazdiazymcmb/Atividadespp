#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int contagemVogais = 0;
    char caractere;

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
        // Converte o caractere para maiúsculo antes de verificar se é vogal
        caractere = toupper(caractere);

        // Verifica se o caractere é uma vogal
        if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            contagemVogais++;
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe o número de vogais
    printf("O arquivo possui %d letra(s) vogal(is).\n", contagemVogais);

    return 0;
}
