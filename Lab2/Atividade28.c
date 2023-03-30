#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int x, y, z, op;
    float media;

    // lendo os três números
    printf("\nDigite tres numeros inteiros positivos:\n ");
    scanf("%d %d %d", &x, &y, &z);

    // lendo a opção do usuário
    printf("\nEscolha o tipo de media:\n");
    printf("1 - Media Geometrica\n");
    printf("2 - Media Ponderada\n");
    printf("3 - Media Harmonica\n");
    printf("4 - Media Aritmetica\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            // média geométrica
            media = cbrt(x * y * z);
            printf("\nMedia Geometrica: %.2f\n", media);
            break;
        case 2:
            // média ponderada
            media =  (x + 2*y + 3*z) / 6;;
            printf("\nMedia Ponderada: %.2f\n", media);
            break;
        case 3:
            // média harmônica
            media = 3 / ((1/x) + (1/y) + (1/z));
            printf("\nMedia Harmonica: %.2f\n", media);
            break;
        case 4:
            // média aritmética
            media = (x + y + z) / 3;
            printf("\nMedia Aritmetica: %.2f\n", media);
            break;
        default:
            printf("\nOpcao invalida!\n");
    }


    system ("pause");

    return 0;
}