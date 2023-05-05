#include <stdio.h>
#include <string.h>

int main(){

    float valor_mercadoria, a_vista, desconto;
    char mercadoria_nome[20];

    printf("Digite o nome da mercadoria: ");
    fgets(mercadoria_nome, 20, stdin);

    printf("Digite o valor da mercadoria em reais: ");
    scanf("%f", &valor_mercadoria);

    a_vista = valor_mercadoria - (valor_mercadoria*0.1);
    desconto = valor_mercadoria*0.1;
    
    printf("O nome da mercadoria eh: %s\n", mercadoria_nome);
    printf("O valor total(sem descontos): %f\n", valor_mercadoria);
    printf("O valor do desconto eh: %f\n", desconto);
    printf("O valor a ser pago a vista eh: %f\n", a_vista);

    return 0;
}