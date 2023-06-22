#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALAVRA 100

int main() {
    char nomeArquivo[100];
    char palavra[MAX_PALAVRA];
    FILE *arquivo;
    char buffer[100];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), arquivo) != NULL) {
        char *ptr = buffer;
        while ((ptr = strstr(ptr, palavra)) != NULL) {
            contador++;
            ptr += strlen(palavra);
        }
    }

    fclose(arquivo);

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);

    return 0;
}
