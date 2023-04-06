#include <stdio.h>

int main() {
    int saque, nota, qtd;
    scanf("%d", &saque);
    printf("Valor do saque: %d\n", saque);

    nota = 100;
    while (saque > 0) {
        qtd = saque / nota;
        if (qtd > 0) {
            printf("%d notas de %d reais\n", qtd, nota);
            saque -= qtd * nota;
        }
        if (nota == 100) nota = 50;
        else if (nota == 50) nota = 20;
        else if (nota == 20) nota = 10;
        else if (nota == 10) nota = 5;
        else if (nota == 5) nota = 2;
        else nota = 1;
    }

    return 0;
}