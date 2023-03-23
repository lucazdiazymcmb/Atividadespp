#include <stdio.h>
#include <stdlib.h>

int main (){
    float a, b, c;
    
    printf ("Defina 3 valores: \n");
    scanf ("%f %f %f", &a, &b, &c);

    printf ("O Quadrado de A e:%.2f\n", (a*a));

    printf ("O Quadrado de B e:%.2f\n", (b*b));

    printf ("O Quadrado de C e:%.2f\n", (c*c));

    printf ("\nA Soma de Todos os quadrados e:%.2f\n", (a*a)+(b*b)+(c*c));

    system ("pause");

    return 0;
}