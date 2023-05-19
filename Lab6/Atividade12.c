#include <stdio.h>
#include <time.h>              
#include <stdlib.h>       
#include <string.h>
typedef struct{
    int naipe;
    int valor;
}carta;
void imprimir_cartas(carta *pessoa_1, carta *pessoa_2);
int main(){
    carta baralho[13][4], pessoa_1[3], pessoa_2[3];

    srand(time(NULL));
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            baralho[i][j].valor = i+1;
            baralho[i][j].naipe = j+1;
        }
    }
    
    for(int i = 0; i < 3; i++){
        pessoa_1[i].valor = baralho[rand()%13][rand()%4].valor;
        pessoa_1[i].naipe = baralho[rand()%13][rand()%4].naipe;
    }
    for(int i = 0; i < 3; i++){
        pessoa_2[i].valor = baralho[rand()%13][rand()%4].valor;
        pessoa_2[i].naipe = baralho[rand()%13][rand()%4].naipe;
    }
    imprimir_cartas(pessoa_1, pessoa_2);
    
    
}
void imprimir_cartas(carta *pessoa_1, carta *pessoa_2){
    printf("--Cartas Jogador 1\n\n");
    for(int i = 0; i < 3; i++){
        switch(pessoa_1[i].naipe){
            case 1:
                switch(pessoa_1[i].valor){
                    case 1: 
                        printf("A de Ouros\n");
                        break;
                    case 11:
                        printf("J de Ouros\n");
                        break;
                    case 12:
                        printf("Q de Ouros\n");
                        break;
                    case 13:
                        printf("K de Ouros\n");
                        break;
                    default:
                        printf("%d de Ouros\n" , pessoa_1[i].valor);
            }
            break;
                
            case 2:
                switch(pessoa_1[i].valor){
                    case 1: 
                        printf("A de Espadas\n");
                        break;
                    case 11:
                        printf("J de Espadas\n");
                        break;
                    case 12:
                        printf("Q de Espadas\n");
                        break;
                    case 13:
                        printf("K de Espadas\n");
                        break;
                    default:
                        printf("%d de Espadas\n" , pessoa_1[i].valor);
            }
            break;
            case 3: 
                switch(pessoa_1[i].valor){
                    case 1: 
                        printf("A de Paus\n");
                        break;
                    case 11:
                        printf("J de Paus\n");
                        break;
                    case 12:
                        printf("Q de Paus\n");
                        break;
                    case 13:
                        printf("K de Paus\n");
                        break;
                    default:
                        printf("%d de Paus\n" , pessoa_1[i].valor);
            }
            break;
            case 4:
                switch(pessoa_1[i].valor){
                    case 1: 
                        printf("A de Copas\n");
                        break;
                    case 11:
                        printf("J de Copas\n");
                        break;
                    case 12:
                        printf("Q de Copas\n");
                        break;
                    case 13:
                        printf("K de Copas\n");
                        break;
                    default:
                        printf("%d de Copas\n" , pessoa_1[i].valor);
            }
        }
    }
    printf("\n--Cartas Jogador 2--\n\n");
    for(int i = 0; i < 3; i++){
        switch(pessoa_2[i].naipe){
            case 1:
                switch(pessoa_2[i].valor){
                    case 1: 
                        printf("A de Ouros\n");
                        break;
                    case 11:
                        printf("J de Ouros\n");
                        break;
                    case 12:
                        printf("Q de Ouros\n");
                        break;
                    case 13:
                        printf("K de Ouros\n");
                        break;
                    default:
                        printf("%d de Ouros\n" , pessoa_2[i].valor);
            }
            break;
                
            case 2:
                switch(pessoa_2[i].valor){
                    case 1: 
                        printf("A de Espadas\n");
                        break;
                    case 11:
                        printf("J de Espadas\n");
                        break;
                    case 12:
                        printf("Q de Espadas\n");
                        break;
                    case 13:
                        printf("K de Espadas\n");
                        break;
                    default:
                        printf("%d de Espadas\n" , pessoa_2[i].valor);
            }
            break;
            case 3: 
                switch(pessoa_2[i].valor){
                    case 1: 
                        printf("A de Paus\n");
                        break;
                    case 11:
                        printf("J de Paus\n");
                        break;
                    case 12:
                        printf("Q de Paus\n");
                        break;
                    case 13:
                        printf("K de Paus\n");
                        break;
                    default:
                        printf("%d de Paus\n" , pessoa_2[i].valor);
            }
            break;
            case 4:
                switch(pessoa_2[i].valor){
                    case 1: 
                        printf("A de Copas\n");
                        break;
                    case 11:
                        printf("J de Copas\n");
                        break;
                    case 12:
                        printf("Q de Copas\n");
                        break;
                    case 13:
                        printf("K de Copas\n");
                        break;
                    default:
                        printf("%d de Copas\n" , pessoa_2[i].valor);
            }
        }
    }
    
    
}