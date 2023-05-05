#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int N;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite o valor inteiro positivo de N: ");
    scanf("%d", &N);

    strncat(str1, str2, N);
    str1[strlen(str1)] = '\0';

    printf("Resultado: %s\n", str1);

    return 0;
}