#include <stdio.h>
#include <string.h>

int contar(char string[]) {
    int i, contador = 0;
    for (i = 0; i < strlen(string); i++){
        if (string[i] == '1') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    int contador = contar(string);
    printf("Numero de 1's na string: %d\n", contador);
    return 0;
}