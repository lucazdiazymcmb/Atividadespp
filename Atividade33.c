#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float lado, area;

    printf ("\nDigite o tamanho do lado do quadrado\n");
    scanf ("%f", &lado);

area = pow(lado, 2);

    printf ("\nA Area do Quadrado e:%.0f\n", area);

    system ("pause");

    return 0;
}