#include <stdio.h>
#include <math.h>
#define PI 3.141592

float calcular(float raio);

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float vol = calcular(raio);

    printf("O volume da esfera de raio %.2f é: %.2f\n", raio, vol);

    return 0;
}

float calcular(float raio) {
    float volume = (4.0 / 3.0) * PI * pow(raio, 3);
    return volume;
}
