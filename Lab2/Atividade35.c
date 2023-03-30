#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int dia, mes, ano;
    int valido = 1; // assume que a data é válida

    // lê a data do usuário
    printf("\nDigite uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // verifica se o mês está entre 1 e 12
    if (mes < 1 || mes > 12) {
        valido = 0;
    }
    else {
        // verifica o número de dias no mês
        int dias_no_mes;
        if (mes == 2) { // fevereiro
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) { // ano bissexto
                dias_no_mes = 29;
            }
            else {
                dias_no_mes = 28;
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { // meses com 30 dias
            dias_no_mes = 30;
        }
        else { // meses com 31 dias
            dias_no_mes = 31;
        }

        // verifica se o dia está dentro do intervalo válido
        if (dia < 1 || dia > dias_no_mes) {
            valido = 0;
        }
    }

    // exibe o resultado
    if (valido) {
        printf("\nA data digitada eh valida.\n");
    }
    else {
        printf("\nA data digitada nao eh valida.\n");
    }

    system ("pause");

    return 0;
}