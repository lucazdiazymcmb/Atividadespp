#include <stdio.h>
#include <stdlib.h>

int main (){
    float k, l;

    printf ("Informe um valor de massa em libras\n");
    scanf ("%f", &l);

k = l*0.45;

//O valor mais proximo é 0.453592
// l = k/0.453592

    printf ("\nA conversao em quilogramas e: %8.3f\n",k);

    system ("pause");

    return 0;
}