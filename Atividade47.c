#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int num, unidade, centena, dezena, milhar;
    
    printf ("\nDigite um numero inteiro de 1000 a 9999\n");
    scanf ("%d", &num);

milhar = num / 1000;
centena = num / 100;
centena = centena % 10;
dezena = num % 100;
dezena = dezena / 10;
unidade = num % 10;

    printf (" %d\n %d\n %d\n %d\n", milhar, centena, dezena, unidade);

    system ("pause");

    return 0;
}