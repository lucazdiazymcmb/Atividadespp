#include <stdio.h>

int somaM(int n);
int main() {
    int n;
    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &n);

    int resultado = somaM(n);
    if (resultado != 0) {
        printf("A soma dos algarismos de %d eh %d\n", n, resultado);
    }

    return 0;
}

int somaM(int n) {
    if (n <= 0) { 
        printf("Numero invalido\n");
        return 0;
    }
    int soma = 0;
    while (n > 0) { 
        soma += n % 10;
        n /= 10;
    }
    return soma;
}
