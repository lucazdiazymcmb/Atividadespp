#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int dia;

    printf("\nDigite um número de 1 a 7:\n ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("\nDomingo\n");
            break;
        case 2:
            printf("\nSegunda-feira\n");
            break;
        case 3:
            printf("\nTerça-feira\n");
            break;
        case 4:
            printf("\nQuarta-feira\n");
            break;
        case 5:
            printf("\nQuinta-feira\n");
            break;
        case 6:
            printf("\nSexta-feira\n");
            break;
        case 7:
            printf("\nSabado\n");
            break;
        default:
            printf("\nNumero invalido!\n");
            break;
    }

    system ("pause");
    
    return 0;
}