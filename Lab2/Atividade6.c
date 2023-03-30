#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main (){
    int Dif, X, Y;
    printf ("\nDigite um numero\n");
    scanf ("%dX", &X);

    printf ("\nDigite outro numero\n");
    scanf ("%dY", &Y);

    if (X > Y){
    printf ("\nO numero maior eh: %d\n", X);
}

    if (Y > X){
    printf ("\nO numero maior eh: %d\n", Y);
}
Dif = X % Y;
       printf ("\nA difereca entre ele eh de: %d\n", Dif);

    system ("pause");

    return 0;
}