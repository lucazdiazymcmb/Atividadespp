#include <stdio.h>
#include <ctype.h>

void caixaAlta(char *nome) {
    while (*nome != '\0') {
        *nome = toupper(*nome);
        nome++;
    }
}

void caixaBaixa(char *nome) {
    while (*nome != '\0') {
        *nome = tolower(*nome);
        nome++;
    }
}

int main() {
    char nome[100];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remover o caractere de nova linha ('\n') da string
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }

    printf("Nome em caixa alta: ");
    caixaAlta(nome);
    printf("%s\n", nome);

    printf("Nome em caixa baixa: ");
    caixaBaixa(nome);
    printf("%s\n", nome);

    return 0;
}
