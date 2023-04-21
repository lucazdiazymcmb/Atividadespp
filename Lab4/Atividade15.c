#include <stdio.h>

int Triangulo1(float a, float b, float c);
void Triangulo2(float a, float b, float c);

int main() {
    float a, b, c;
    printf("Digite as medidas dos lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (Triangulo1(a, b, c)) {
        Triangulo2(a, b, c);
    } else {
        printf("Nao forma um triangulo.\n");
    }

    return 0;
}

int Triangulo1(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b) {
        return 1; 
    } else {
        return 0; 
    }
}

void Triangulo2(float a, float b, float c) {
    if (a == b && b == c) {
        printf("Triangulo equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo isosceles\n");
    } else {
        printf("Triangulo escaleno\n");
    }
}
