#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float nota1, nota2, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    if (nota1 < 0 || nota1 > 10) {
        printf("Nota invalida.\n");
        return 0;
    }
    
    printf("\nDigite a segunda nota:\n ");
    scanf("%f", &nota2);
    
    if (nota2 < 0 || nota2 > 10) {
        printf("\nNota invalida.\n");
        return 0;
    }
    
    media = (nota1 + nota2) / 2;
    
    printf("\nA media das notas eh: %.2f\n", media);

    system ("pause");
        
    return 0;
}