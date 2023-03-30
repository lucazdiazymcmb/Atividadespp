#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float atual, novoSalario;
    int tempo;
    
    // Lê os valores de entrada
    printf("\nInforme o salario atual: R$ \n");
    scanf("%f", &atual);
    
    printf("\nInforme o tempo de servico (em anos):\n ");
    scanf("%d", &tempo);
    
    // Calcula o reajuste e o bônus
    float reajuste = 0.0;
    float bonus = 0.0;
    
    if (atual <= 500.0) {
        reajuste = 0.25;
        if (tempo >= 1) {
            bonus = 0.0;
        }
    } else if (atual <= 1000.0) {
        reajuste = 0.20;
        if (tempo >= 1 && tempo <= 3) {
            bonus = 100.0;
        }
    } else if (atual <= 1500.0) {
        reajuste = 0.15;
        if (tempo >= 4 && tempo <= 6) {
            bonus = 200.0;
        }
    } else if (atual <= 2000.0) {
        reajuste = 0.10;
        if (tempo >= 7 && tempo <= 10) {
            bonus = 300.0;
        }
    } else {
        // Sem reajuste
        if (tempo > 10) {
            bonus = 500.0;
        }
    }
    
    // Calcula o novo salário
    novoSalario = atual + (atual * reajuste) + bonus;
    
    // Imprime o resultado
    if (reajuste == 0.0 && bonus == 0.0) {
        printf("\nSem direito a aumento salarial.\n");
    } else {
        printf("\nSalario reajustado: R$ %.2f\n", novoSalario);
    }
    
    system ("pause");

    return 0;
}