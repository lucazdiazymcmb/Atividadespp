#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main (){
    float X, Y;
    printf ("\nDigite um numero\n");
    scanf ("%fX", &X);

    printf ("\nDigite outro numero\n");
    scanf ("%fY", &Y);

    if (X > Y){
    printf ("\nO numero maior eh: %.0f\n", X);
    }

    if (Y > X){
    printf ("\nO numero maior eh: %.0f\n", Y);
    }
       
    system ("pause");

    return 0;
}