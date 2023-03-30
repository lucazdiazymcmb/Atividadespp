#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int numero;
    
    printf("\nDigite um numero inteiro:\n ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("\n%d eh par.\n", numero);
    } else {
        printf("\n%d eh impar.\n", numero);
    }

    system ("pause");
        
    return 0;
}