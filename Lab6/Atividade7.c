#include <stdio.h>
#include <math.h>

struct coordenada_polar {
    float raio;
    float argumento;
};

struct coordenada_cartesiana {
    float x;
    float y;
};

struct coordenada_cartesiana converter_polar_para_cartesiana(struct coordenada_polar polar) {
    struct coordenada_cartesiana cartesiana;
    
    cartesiana.x = polar.raio * cos(polar.argumento);
    cartesiana.y = polar.raio * sin(polar.argumento);
    
    return cartesiana;
}

int main() {
    struct coordenada_polar polar;
    struct coordenada_cartesiana cartesiana;
    
    printf("Digite as coordenadas polares (raio e argumento em radianos):\n");
    printf("Raio: ");
    scanf("%f", &polar.raio);
    printf("Argumento: ");
    scanf("%f", &polar.argumento);
    
    cartesiana = converter_polar_para_cartesiana(polar);
    
    printf("As coordenadas cartesianas sao:\n");
    printf("x: %.2f\n", cartesiana.x);
    printf("y: %.2f\n", cartesiana.y);
    
    return 0;
}
