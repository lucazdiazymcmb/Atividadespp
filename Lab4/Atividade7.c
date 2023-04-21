#include <stdio.h>

float fahrenheite(float celsius);
int main() {
    float temperatura_celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    float temperatura_fahrenheit = fahrenheite(temperatura_celsius);

    printf("%.2f Celsius eh equivalente a %.2f Fahrenheit.\n", temperatura_celsius, temperatura_fahrenheit);

    return 0;
}

float fahrenheite(float celsius) {
    float fahrenheit = (celsius * (9.0/5.0)) + 32.0;
    return fahrenheit;
}
