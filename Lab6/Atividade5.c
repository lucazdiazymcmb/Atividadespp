#include <stdio.h>


struct vetor {
    float a;
    float b;
    float c;
};

struct vetor soma_vetores(struct vetor v1, struct vetor v2) {
    struct vetor resultado;
    
    resultado.a = v1.a + v2.a;
    resultado.b = v1.b + v2.b;
    resultado.c = v1.c + v2.c;
    
    return resultado;
}

int main() {
    struct vetor vetor1, vetor2, soma;
    
    printf("Digite as coordenadas do vetor 1:\n");
    printf("a: ");
    scanf("%f", &vetor1.a);
    printf("b: ");
    scanf("%f", &vetor1.b);
    printf("c: ");
    scanf("%f", &vetor1.c);
    
    printf("Digite as coordenadas do vetor 2:\n");
    printf("a: ");
    scanf("%f", &vetor2.a);
    printf("b: ");
    scanf("%f", &vetor2.b);
    printf("c: ");
    scanf("%f", &vetor2.c);
    
    soma = soma_vetores(vetor1, vetor2);
    
    printf("A soma dos vetores eh:\n");
    printf("a: %.2f\n", soma.a);
    printf("b: %.2f\n", soma.b);
    printf("c: %.2f\n", soma.c);
    
    return 0;
}
