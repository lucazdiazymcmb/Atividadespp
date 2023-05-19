#include <stdio.h>

    struct datanas{
        int dia, mes, ano;
    };

    struct empresa {
        char nome[50];
        int idade;
        char sexo;
        char cpf[15];
        char codigosetor[3];
        char cargo[30];
        int salario;
        struct datanas a;
    };


int main(){

    struct empresa c; 
        
        
        printf("Digite o nome do funcionario: \n");
        fflush(stdin);
        fgets(c.nome, 50, stdin);
        printf("Digite a idade do funcionario:\n ");
        scanf("%d", &c.idade);
        fflush(stdin);
        printf("Digite o sexo do funcionario(F ou M):\n ");
        scanf("%c", &c.sexo);
        printf("Digite o cpf do funcionario:\n ");
        fflush(stdin);
        fgets(c.cpf, 15, stdin);
        printf("Digite o codigo do setor do funcionario:\n ");
        fflush(stdin);
        fgets(c.codigosetor, 3, stdin);
        printf("Digite o cargo do funcionario:\n ");
        fflush(stdin);
        fgets(c.cargo, 30, stdin);
        printf("Digite o salario do funcionario:\n ");
        scanf("%d", &c.salario);

        printf("Digite o dia do nascimento do funcionario:\n ");
        scanf("%d", &c.a.dia);
        printf("Digite o mes do nascimento do funcionario:\n ");
        scanf("%d", &c.a.mes);
        printf("Digite o ano do nascimento do funcionario\n: ");
        scanf("%d", &c.a.ano);

        printf("Dados do funcionario --> \n");
        printf("Nome  : %s\n", c.nome);
        printf("Idade : %d\n", c.idade);
        printf("Sexo  : %c\n", c.sexo);
        printf("CPF   : %s\n", c.cpf);
        printf("Codigo: %s\n", c.codigosetor);
        printf("Cargo : %s\n", c.cargo);
        printf("Salario  : %i\n", c.salario);
        printf("Data de nascimento: %d/%d/%d\n", c.a.dia, c.a.mes, c.a.ano);
        

    return 0;
}