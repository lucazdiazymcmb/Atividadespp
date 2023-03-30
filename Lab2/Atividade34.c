#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float nota;
    int faltas;

    printf("\nDigite a nota do aluno:\n ");
    scanf("%f", &nota);

    printf("\nDigite o número de faltas do aluno:\n ");
    scanf("%d", &faltas);

    // Verifica o conceito de acordo com a nota e o número de faltas
    if (faltas > 20) {
        if (nota >= 9.0 && nota <= 10.0)
            printf("\nConceito: B\n");
        else if (nota >= 7.5 && nota < 9.0)
            printf("\nConceito: C\n");
        else if (nota >= 5.0 && nota < 7.5)
            printf("\nConceito: D\n");
        else if (nota >= 4.0 && nota < 5.0)
            printf("\nConceito: E\n");
        else
            printf("\nConceito: E\n");
    } else {
        if (nota >= 9.0 && nota <= 10.0)
            printf("\nConceito: A\n");
        else if (nota >= 7.5 && nota < 9.0)
            printf("\nConceito: B\n");
        else if (nota >= 5.0 && nota < 7.5)
            printf("\nConceito: C\n");
        else if (nota >= 4.0 && nota < 5.0)
            printf("\nConceito: D\n");
        else
            printf("\nConceito: E\n");
    }

    system ("pause");

    return 0;
}