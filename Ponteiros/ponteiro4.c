#include <stdio.h>

int main() {
    int variavel1, variavel2;
    int *maior_endereco;

    printf("Digite o valor da variavel 1: ");
    scanf("%d", &variavel1);
    printf("Digite o valor da variavel 2: ");
    scanf("%d", &variavel2);

    if (&variavel1 > &variavel2) {
        maior_endereco = &variavel1;
    } else {
        maior_endereco = &variavel2;
    }

    printf("Conteudo do maior endereco: %d\n", *maior_endereco);

    return 0;
}
