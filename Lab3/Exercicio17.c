#include <stdio.h>

int main() {
    float chico = 1.5, ze = 1.1;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Zé sera maior que Chico em %d anos.\n", anos);

    return 0;
}