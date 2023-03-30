#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int numero, soma = 0, resto;
    
    printf("Digite um numero inteiro maior do que zero:\n ");
    scanf("%d", &numero);
    
    if (numero <= 0) {
        printf("\nNumero invalido.\n");
        return 0;
    }
    
    while (numero > 0) {
        resto = numero % 10;
        soma += resto;
        numero /= 10;
    }
    
    printf("\nA soma dos algarismos do numero eh: %d\n", soma);

    system ("pause");
        
    return 0;
}