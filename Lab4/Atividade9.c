#include <stdio.h>
#define PI 3.141592

float cilindro(float altura, float raio);
int main() {
    float altura, raio;
    printf("Digite a altura eh o raio do cilindro: ");
    scanf("%f %f", &altura, &raio);

    float volume = cilindro(altura, raio);

    printf("O volume do cilindro eh: %.2f\n", volume);

    return 0;
}

float cilindro(float altura, float raio) {
    float volume = PI * raio * raio * altura;
    return volume;
}
