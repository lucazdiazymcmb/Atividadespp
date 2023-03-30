#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    // Leitura das bases e altura
    printf("\nDigite a base maior, a base menor e a altura do trapezio:\n ");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

    // Verifica se as bases e altura são maiores que zero
    if (baseMaior <= 0 || baseMenor <= 0 || altura <= 0) {
        printf("\nBases e altura devem ser maiores que zero.\n");
    } else {
        // Cálculo da área
        area = (baseMaior + baseMenor) * altura / 2;

        // Exibição do resultado
        printf("\nA area do trapezio eh: %.2f\n", area);
    }

    system ("pause");
    
    return 0;
}