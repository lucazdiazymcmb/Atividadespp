#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int numero;
    
    printf("\nDigite um numero inteiro:\n ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("\nNumero invalido.\n");
        return 0;
    }
    
    double logaritmo = log(numero);
    
    printf("\nO logaritmo do numero %d eh: %f\n", numero, logaritmo);

    system ("pause");
        
    return 0;
}