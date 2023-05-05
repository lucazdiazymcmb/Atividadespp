#include <stdio.h>

int main() {
    int num[6], i, soma_pares = 0, cont_impares = 0;
    printf("Digite 6 numeros inteiros: \n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }
    printf("Numeros pares: ");
    for(i = 0; i < 6; i++) {
        if(num[i] % 2 == 0) {
            printf("%d ", num[i]);
            soma_pares += num[i];
        }
    }
    printf("\nSoma dos numeros pares: %d", soma_pares);
    printf("\nNumeros impares: ");
    for(i = 0; i < 6; i++) {
        if(num[i] % 2 != 0) {
            printf("%d ", num[i]);
            cont_impares++;
        }
    }
    printf("\nQuantidade de numeros impares: %d", cont_impares);
    return 0;
}
