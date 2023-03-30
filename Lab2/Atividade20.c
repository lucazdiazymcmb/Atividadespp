#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int a, b, c;
    printf("\nDigite os valores de A, B e C:\n ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("\nTriangulo equilatero.\n");
        }
        else if (a == b || a == c || b == c) {
            printf("\nTriangulo isosceles.\n");
        }
        else {
            printf("\nriangulo escaleno.\n");
        }
    }
    else {
        printf("\nEsses valores nao formam um triangulo.\n");
    }

    system ("pause");
        
    return 0;
}