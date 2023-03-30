#include <stdlib.h>>
#include <math.h>
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("\nDigite o primeiro numero:\n");
    scanf("%d", &num1);
    
    printf("\nDigite o segundo numero:\n ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("\nO maior numero eh: %d\n", num1);
    } else if (num2 > num1) {
        printf("\nO maior numero eh: %d\n", num2);
    } else {
        printf("\nNumeros iguais.\n");
    }

    system ("pause");
        
    return 0;
}