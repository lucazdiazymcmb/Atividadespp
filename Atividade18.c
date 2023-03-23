#include <stdio.h>
#include <stdlib.h>

int main (){
    int l, m;

    printf ("Informe um valor de volume em metros cubicos\n");
    scanf ("%d", &m);

l = 1000*m;

    printf ("\nA conversao em litros e: %d\n",l);

    system ("pause");

    return 0;
}