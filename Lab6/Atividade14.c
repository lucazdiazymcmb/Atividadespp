#include <stdio.h>

struct carros{
    char carro[15];
    int ano;
    int preco;
};

int main(){

    struct carros c[5];
    int i;
    float p;

    for(i = 0; i < 5; i++){
        printf("Digite o nome do carro %i: \n", i);
        setbuf(stdin, NULL);
        fgets(c[i].carro, 15, stdin);
        printf("Digite o ano do carro %i:\n ", i);
        scanf("%d", &c[i].ano);
        printf("Digite o preco do carro %i:\n ", i);
        scanf("%d", &c[i].preco);
    }

    printf("Digite um preco p:\n ");
    scanf("%f", &p);

    while(p != 0){
    for(i = 0; i < 5; i++){
        if(c[i].preco < p){
            printf("Nome: %s\n", c[i].carro);
            printf("Ano: %d\n", c[i].ano);
            printf("Preco: %d\n", c[i].preco);
        }
    }

    printf("Digite um preco p:\n ");
    scanf("%f", &p);
    }

    return 0;
}