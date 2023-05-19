#include <stdio.h>
#include <string.h>
#define NUM_PESSOAS 5

typedef struct{
    char rua[500];
    char bairro[500];
    int numero;
}endereco;
typedef struct{
    char nome[100];
    endereco ender;
    char telefone[100];    
}dados;

int main(){
    dados pessoa[NUM_PESSOAS], pessoa1[NUM_PESSOAS]; 
    int cont = 0;

    
    for(int i = 0; i < NUM_PESSOAS; i++){
        printf("\n--Insira os dados--\n\n");
        printf("Digite o nome:\n ");
        scanf("%s" , pessoa[i].nome);
        setbuf(stdin, NULL);
        printf("Digite o Bairro:\n ");
        scanf("%s" , pessoa[i].ender.bairro);
        setbuf(stdin, NULL);
        printf("Digite a rua:\n ");
        scanf("%s" , pessoa[i].ender.rua);
        setbuf(stdin, NULL);
        printf("Digite o numero:\n ");
        scanf("%d" , &pessoa[i].ender.numero);
        setbuf(stdin, NULL);
        printf("Digite o telefone:\n ");
        setbuf(stdin, NULL);
        scanf("%s" , pessoa[i].telefone);
        setbuf(stdin, NULL);
    }

    for(int i = 65; i < 90 || i == 90; i++){
        for(int j = 0; j < NUM_PESSOAS; j++){
            if(pessoa[j].nome[0] == i || pessoa[j].nome[0] == i + 32){
                strcpy(pessoa1[cont].nome, pessoa[j].nome);
                strcpy(pessoa1[cont].ender.bairro, pessoa[j].ender.bairro);
                strcpy(pessoa1[cont].ender.rua, pessoa[j].ender.rua);
                pessoa1[cont].ender.numero = pessoa[j].ender.numero;
                strcpy(pessoa1[cont].telefone, pessoa[j].telefone);
                cont++;
            }
        }
        
    }

    for(int i = 0; i < NUM_PESSOAS; i++){
        printf("\n--Pessoa %d--\n\n" , i);
        printf("Nome: %s \n" , pessoa1[i].nome);
        printf("Endereco: %s, %s, %d \n" , pessoa1[i].ender.bairro, pessoa1[i].ender.rua, pessoa1[i].ender.numero);
        printf("Telefone: %s \n" , pessoa1[i].telefone);
        
    }
    return 0;
}