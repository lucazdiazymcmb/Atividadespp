#include <stdio.h>
#include <stdlib.h>

int main (){
    int x;
    float num1, y;
x = 5; 

    printf ("Digite um numero real\n");
    scanf ("\n%f", &num1);

    printf ("Seu numero real: %f\n", num1);

y = num1 / x;

    printf ("\nA quinta parte desse numero e:%.3f\n", y);

    system ("pause");

    return 0;
}