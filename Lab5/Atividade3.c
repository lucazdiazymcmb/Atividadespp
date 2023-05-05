#include <stdio.h>

int main() {
    int numeros[6];
    int i;
    
    for(i = 0; i < 6; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &numeros[i]);
    }
    
    printf("\nValores lidos na ordem inversa:\n");
    for(i = 5; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }
    
    return 0;
}
