#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para remover vogais de uma string
void removerVogais(char* str) {
    int i, j;
    int tamanho = strlen(str);
    for (i = 0, j = 0; i < tamanho; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Adiciona o caractere nulo para finalizar a string
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho da string
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente memória para a string
    char* str = (char*) malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere nulo

    // Verifica se a alocação de memória foi bem-sucedida
    if (str == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    // Solicita ao usuário o conteúdo da string
    printf("Digite a string: ");
    scanf(" %s", str);

    // Remove as vogais da string
    removerVogais(str);

    // Imprime a string sem as vogais
    printf("String sem as vogais: %s\n", str);

    // Libera a memória alocada
    free(str);

    return 0;
}
