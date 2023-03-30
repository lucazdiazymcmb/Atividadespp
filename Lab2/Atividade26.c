#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float distancia, litros, consumo;

    printf("\nDigite a distancia percorrida (Km):\n ");
    scanf("%f", &distancia);

    printf("\nDigite a quantidade de litros de gasolina consumidos:\n ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("\nO consumo do carro foi de %.2f Km/l\n", consumo);

    if (consumo < 8) {
        printf("\nVenda o carro!\n");
    } else if (consumo >= 8 && consumo <= 14) {
        printf("\nEconomico!\n");
    } else {
        printf("\nSuper economico!\n");
    }

    system ("pause");

    return 0;
}