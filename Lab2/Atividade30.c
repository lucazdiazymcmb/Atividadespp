#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int a, b, c;

    printf("\nDigite tres numeros inteiros:\n ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação utilizando o algoritmo Bubble Sort
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("\nOs numeros em ordem crescente sao: %d, %d e %d\n", a, b, c);

    system ("pause");

    return 0;
}