#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float a, b, c, delta, x1, x2;

    printf("\nDigite os valores de a, b e c:\n ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("\nNao eh equacao de segundo grau.\n");
    } else {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0) {
            printf("\nNao existe raiz.\n");
        } else if (delta == 0) {
            x1 = (-b) / (2 * a);
            printf("\nRaiz unica: %f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nRaizes: x1 = %f, x2 = %f\n", x1, x2);
        }
    }

    system ("pause");

    return 0;
}