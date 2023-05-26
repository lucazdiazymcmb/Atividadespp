#include <stdio.h>

int main() {
    int inteiro;
    float real;
    char caractere;

    int* ponteiroInteiro = &inteiro;
    float* ponteiroReal = &real;
    char* ponteiroChar = &caractere;

    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número real: ");
    scanf("%f", &real);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Note o espaço antes do %c para ignorar espaços em branco

    printf("\nValores originais:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caractere: %c\n\n", caractere);

    *ponteiroInteiro = 2 * inteiro;
    *ponteiroReal = 2 * real;
    *ponteiroChar = caractere + 1;

    printf("Valores modificados:\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %.2f\n", real);
    printf("caractere: %c\n", caractere);

    return 0;
}
