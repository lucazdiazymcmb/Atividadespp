#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removerVogais(char* str) {
    int i, j;
    int tamanho = strlen(str);
    for (i = 0, j = 0; i < tamanho; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    char* str = (char*) malloc((tamanho + 1) * sizeof(char)); 

    if (str == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    printf("Digite a string: ");
    scanf(" %s", str);

    removerVogais(str);

    printf("String sem as vogais: %s\n", str);

    free(str);

    return 0;
}
