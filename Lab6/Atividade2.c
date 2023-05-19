#include <stdio.h>

struct dados {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct dados pessoa1;

    printf("Digite o nome:\n ");
    fgets(pessoa1.nome, 50, stdin);

    printf("Digite a idade:\n ");
    scanf("%d", &pessoa1.idade);
    getchar();

    printf("Digite o endereco:\n ");
    fgets(pessoa1.endereco, 100, stdin);

    printf("Dados pessoais: \n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereco: %s\n", pessoa1.endereco);

    return 0;
}