#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float altura, pesoideal;
    char sexo;
    
    printf("\nDigite a altura da pessoa em metros:\n ");
    scanf("%f", &altura);
    
    printf("\nDigite o sexo da pessoa (M/F):\n ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {
        pesoideal = 72.7 * altura - 58.0;
        printf("\nO peso ideal para um homem de %.2f metros de altura eh: %.2f kg\n", altura, pesoideal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoideal = 62.1 * altura - 44.7;
        printf("\nO peso ideal para uma mulher de %.2f metros de altura eh: %.2f kg\n", altura, pesoideal);
    } else {
        printf("\nSexo invalido.\n");
    }

    system ("pause");
        
    return 0;
}