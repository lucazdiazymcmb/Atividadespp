#include <stdio.h>

void ordenar(int *num1, int *num2, int *num3) {
    int temp;

    if (*num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    if (*num1 > *num3) {
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }

    if (*num2 > *num3) {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
}

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    ordenar(ptr1, ptr2, ptr3);

    printf("Numeros em ordem crescente:\n");
    printf("%d (%p)\n", *ptr1, ptr1);
    printf("%d (%p)\n", *ptr2, ptr2);
    printf("%d (%p)\n", *ptr3, ptr3);

    return 0;
}
