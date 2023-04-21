#include <stdio.h>
#include <string.h>

void extenso(int dia, int mes, int ano);
int main() {
    
    int dia, mes, ano;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);    

    extenso(dia, mes, ano);

    return 0;
}
void extenso(int dia, int mes, int ano) {
    
    char nome_mes[10];

    switch(mes) {
        case 1:
            strcpy(nome_mes, "janeiro");
            break;
        case 2:
            strcpy(nome_mes, "fevereiro");
            break;
        case 3:
            strcpy(nome_mes, "marco");
            break;
        case 4:
            strcpy(nome_mes, "abril");
            break;
        case 5:
            strcpy(nome_mes, "maio");
            break;
        case 6:
            strcpy(nome_mes, "junho");
            break;
        case 7:
            strcpy(nome_mes, "julho");
            break;
        case 8:
            strcpy(nome_mes, "agosto");
            break;
        case 9:
            strcpy(nome_mes, "setembro");
            break;
        case 10:
            strcpy(nome_mes, "outubro");
            break;
        case 11:
            strcpy(nome_mes, "novembro");
            break;
        case 12:
            strcpy(nome_mes, "dezembro");
            break;
        default:
            strcpy(nome_mes, "Mes invalido");
            break;
    }

    printf("%d de %s de %d\n", dia, nome_mes, ano);

return nome_mes;
}