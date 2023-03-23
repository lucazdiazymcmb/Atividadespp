#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double premio, ganhador1, ganhador2, ganhador3, valorfinal1;
    
    printf ("\nO valor do premio e de 780.000,00 Reais\n");
premio = 780.000;

ganhador1 = premio - (premio * 46/100);
valorfinal1 = premio - ganhador1;

    printf ("\nO Primeiro ganhador ganhou: %0.2lf\n", ganhador1);
    
ganhador2 = valorfinal1 - (valorfinal1 * 32/100);
    
    printf ("\nO Segundo ganhador ganhou: %0.2lf\n", ganhador2);

ganhador3 = premio - ganhador1 - ganhador2;
        
    printf ("\nO Terceiro ganhador ganhou: %0.2lf\n", ganhador3);

    system ("pause");

    return 0;
}