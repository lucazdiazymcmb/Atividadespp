#include <stdlib.h>

int main() {
    int resultado = somaM(5, 10);
    printf("Resultado: %d\n", resultado); 
    return 0;
}

int somaM(int num1, int num2) {
    int soma = 0;
    int menor = (num1 < num2) ? num1 : num2; 
    int maior = (num1 > num2) ? num1 : num2; 
    
    for (int i = menor; i <= maior; i++) {
        soma += i;
    }
    
    return soma;
}
