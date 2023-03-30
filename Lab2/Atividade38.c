#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int dia, dias, mes, ano;

    printf("\nDigite uma data de nascimento com formado DD/MM/AAAA:\n ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    switch (mes)
    {
    case 1:
        dias = 31;
        break;
    case 2:
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
                dias = 29;
            } else {
                dias = 28;
            }
        break;
    case 3:
        dias = 31;
        break;
    case 4:
        dias = 30;
        break;
    case 5:
        dias = 31;
        break;
    case 6:
        dias = 30;
        break;
    case 7:
        dias = 31;
        break;
    case 8:
        dias = 31;
        break;
    case 9:
        dias = 30;
        break;
    case 10:
        dias = 31;
        break;
    case 11:
        dias = 30;
        break;
    case 12:
        dias = 31;
        break;
    
    default:
        printf("\nData invalida\n");
        break;
    }
    if (ano >= 2023)
    {
        printf("\nData invalida\n");
    }
    else if (dia >= 1 && dia <= dias){
        printf("\nData valida\n");
    }
    else{
        printf("\nData invalida\n");
    }
    return 0;
}