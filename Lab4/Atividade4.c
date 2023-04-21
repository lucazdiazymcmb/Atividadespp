#include <stdio.h>

int quadrado(int num);
int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (quadrado(num)) {
        printf("%d eh um quadrado perfeito.\n", num);
    } else {
        printf("%d nao eh um quadrado perfeito.\n", num);
    }

    return 0;
}
int quadrado(int num) {
    int i;
    for (i = 0; i * i <= num; i++) {
        if (i * i == num) {
            return 1; 
        }
    }
    return 0; 
}
