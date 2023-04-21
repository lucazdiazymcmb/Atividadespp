#include <stdio.h>

int calcular(int x, int z);
int main() {
    int x, z;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para z: ");
    scanf("%d", &z);
    int resultado = calcularo(x, z);
    printf("O resultado de %d elevado a %d eh %d\n", x, z, resultado);
    return 0;
}

int calcular(int x, int z) {
    int resultado = 1;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}
