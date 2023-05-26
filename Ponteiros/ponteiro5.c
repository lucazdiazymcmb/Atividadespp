#include <stdio.h>

void dobrar(int *ptr) {
    *ptr *= 2;
}

int main() {
    int A, B;
    int *ptrA, *ptrB;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    ptrA = &A;
    ptrB = &B;

    dobrar(ptrA);
    dobrar(ptrB);

    printf("O dobro de A: %d\n", A);
    printf("O dobro de B: %d\n", B);

    return 0;
}
