#include <stdio.h>
#include <string.h>
#define NUM_COMPROMISSO 5

typedef struct{
    int dia;
    int mes;
    int ano;
}calendario;
typedef struct{
    char compromisso[60];
    calendario data;
}dados;

int main(){
    dados agenda[NUM_COMPROMISSO];
    int m, a, tamanho, qnt = 0;

    for(int i = 0; i < NUM_COMPROMISSO; i++){
        printf("--Compromisso %d\n" , i+1);
        printf("Nome:\n ");
        fgets(agenda[i].compromisso, 60, stdin);
        printf("Data: \n");
        scanf("%d/%d/%d" , &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
        setbuf(stdin, NULL);
        printf("\n\n");
        tamanho = strlen(agenda[i].compromisso);
        for(int j = 0; j < tamanho; j++){
            if(agenda[i].compromisso[j] == '\n'){
                agenda[i].compromisso[j] = '\0';
                break;
            }
        }
    }
    
    do{
        qnt = 0;
        printf("Digite o mes e o ano (ex. 10/2003):\n ");
        scanf("%d/%d" , &m, &a);

        printf("\nCompromissos encontrados:\n\n");
        for(int i = 0; i < NUM_COMPROMISSO; i++){
            if(agenda[i].data.mes == m && agenda[i].data.ano == a){
                printf("Compromisso %d: %s \n" , qnt + 1, agenda[i].compromisso);
                printf("Data: %d/%d/%d\n" , agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
                printf("\n\n");
                qnt++;
            }
            
        }
        if(qnt == 0){
            printf("Sem compromisso agendados!\n");
        }
    }while(m != 0);
    
    return 0;
}