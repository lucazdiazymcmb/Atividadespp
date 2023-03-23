#include <stdio.h>
#include <stdlib.h>

int main (){
    float l, k;

    printf ("Informe um valor de massa em quilogramas\n");
    scanf ("%f", &k);

l = k/0.45;
//O valor mais proximo é 0.453592
// l = k/0.453592
    printf ("\nA conversao em libras e: %8.3f\n",l);

    system ("pause");

    return 0;
}