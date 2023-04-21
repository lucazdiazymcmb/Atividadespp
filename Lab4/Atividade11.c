#include <stdio.h>

float calcular(float nota1, float nota2, float nota3, char letra);
int main() {
    float n1, n2, n3;
    char opcao;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite A para media aritmetica ou P para media ponderada: ");
    scanf(" %c", &opcao);
    float media = calcular(n1, n2, n3, opcao);
    if (media >= 0.0) {
        printf("A media do aluno eh: %.2f\n", media);
    }
    return 0;
}

float calcular(float nota1, float nota2, float nota3, char letra) {
    float media;
    if (letra == 'A') {
        media = (nota1 + nota2 + nota3) / 3.0;
    } else if (letra == 'P') {
        media = (5.0 * nota1 + 3.0 * nota2 + 2.0 * nota3) / 10.0;
    } else {
        printf("Letra invalida!\n");
        media = -1.0; 
    }
    return media;
}
