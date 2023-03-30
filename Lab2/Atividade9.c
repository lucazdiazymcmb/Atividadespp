#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    float salario, prestacao;
    
    printf("\nDigite o salario do trabalhador:\n ");
    scanf("%f", &salario);
    
    printf("\nDigite o valor da prestacao do emprestimo:\n ");
    scanf("%f", &prestacao);
    
    if (prestacao > 0.2 * salario) {
        printf("\nEmprestimo nao concedido.\n");
    } else {
        printf("\nEmprestimo concedido.\n");
    }

    system ("pause");
        
    return 0;
}