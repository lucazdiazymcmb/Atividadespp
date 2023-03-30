#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float nota1, nota2, nota3, media;
    
    printf("\nDigite a primeira nota:\n ");
    scanf("%f", &nota1);
    
    printf("\nDigite a segunda nota:\n ");
    scanf("%f", &nota2);
    
    printf("\nDigite a terceira nota:\n ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + (nota3 * 2)) / 4;
    
    printf("\nA media do aluno eh: %.2f\n", media);
    
    if (media >= 60) {
        printf("\nAluno aprovado.\n");
    } else {
        printf("\nAluno reprovado.\n");
    }

    system ("pause");
        
    return 0;
}