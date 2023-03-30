#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float notalab, notasem, notafinal, media;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &notalab);

    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &notasem);

    printf("Digite a nota do exame final: ");
    scanf("%f", &notafinal);

    media = (2 * notalab + 3 * notasem + 5 * notafinal) / 10;

    printf("\nA media final do aluno eh: %.2f\n", media);

    if (media >= 0 && media < 3) {
        printf("\nAluno REPROVADO!\n");
    } else if (media >= 3 && media < 5) {
        printf("\nAluno em RECUPERACAO!\n");
    } else if (media >= 5 && media <= 10) {
        printf("\nAluno APROVADO!\n");
    } else {
        printf("\nMedia invalida!\n");
    }

    system ("pause");
    
    return 0;
}