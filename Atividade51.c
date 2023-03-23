#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x, y, distancia;

    printf("\nDigite o ponto de x e y para descubrir a distancia da origem (0,0):\n");

    scanf("%f %f", &x, &y);

distancia = sqrt(pow(x,2) + pow(y,2));

    printf("\nA distancia dos pontos ate a origem e: %.3f\n", distancia);

    system ("pause");  

    return 0;
}