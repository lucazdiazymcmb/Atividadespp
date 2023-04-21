#include <stdio.h>

void calcular(float distancia, float litros);
int main() {
    float distancia, litros;

    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    calcular(distancia, litros);

    return 0;
}

void calcular(float distancia, float litros) {
    float consumo = distancia / litros;

    if (consumo < 8.0) {
        printf("CONSUMO: %.2f Km/l - Venda o carro!\n", consumo);
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("CONSUMO: %.2f Km/l - Economico!\n", consumo);
    } else {
        printf("CONSUMO: %.2f Km/l - Super economico!\n", consumo);
    }
}
