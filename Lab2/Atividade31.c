#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float altura, peso;

    printf("\nDigite a altura da pessoa:\n ");
    scanf("%f", &altura);

    printf("\nDigite o peso da pessoa:\n ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60) {
            printf("\nClassificacao: A\n");
        } else if (peso <= 90) {
            printf("\nClassificacao: D\n");
        } else {
            printf("\nClassificacao: G\n");
        }
    } else if (altura <= 1.70) {
        if (peso <= 60) {
            printf("\nClassificacao: B\n");
        } else if (peso <= 90) {
            printf("\nClassificacao: E\n");
        } else {
            printf("\nClassificacao: H\n");
        }
    } else {
        if (peso <= 60) {
            printf("\nClassificacao: C\n");
        } else if (peso <= 90) {
            printf("\nClassificacao: F\n");
        } else {
            printf("\nClassificacao: I\n");
        }
    }

    system ("pause");

    return 0;
}