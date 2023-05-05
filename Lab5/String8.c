#include <stdio.h>
#include <string.h>

int main() {
    char string[100], L1, L2;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite a letra que vai ser trocada: ");
    scanf(" %c", &L1);

    printf("Digite a letra que sera colocada na lugar: ");
    scanf(" %c", &L2);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == L1) {
            string[i] = L2;
        }
    }
    printf("String com as letras trocadas: %s\n", string);
    return 0;
}