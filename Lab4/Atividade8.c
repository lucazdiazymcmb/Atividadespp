#include <stdio.h>
#include <math.h>

float calc(float a, float b);
int main() {
    float a, b;
    printf("Digite os valores dos catetos a e b: ");
    scanf("%f %f", &a, &b);

    float hipotenusa = calc(a, b);

    printf("O valor da hipotenusa eh: %.2f\n", hipotenusa);

    return 0;
}

float calc(float a, float b) {
    float hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    return hipotenusa;
}
