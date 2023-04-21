#include <stdio.h>

int verificador(int num);
int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    int resultado = verificador(num);

    if (resultado == 1) {
        printf("O numero eh positivo.\n");
    } else if (resultado == -1) {
        printf("O numero eh negativo.\n");
    } else {
        printf("O numero eh igual a zero.\n");
    }
    
    return 0;  
}

int verificador(int num) {
    if (num > 0) {
        return 1; // 
    } else if (num < 0) {
        return -1; 
    } else {
        return 0; // 
    }
}
