#include <stdio.h>

int main(){
    int i, j;
    int matriz1[2][2], matriz2[2][2], matrizfinal[2][2];
    int operacao;
    int constante;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Primeira matriz, digite o numero da posicao %d %d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Segunda matriz, digite o numero da posicao %d %d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("Escolha a operacao que deseja realizar entre as duas matrizes para obter uma matriz final: \n1- Soma\n2- subtracao\n3- adicionar uma constante\n4- imprimir as matrizes\n");
    scanf("%d", &operacao);
    switch(operacao){
        case 1 : 
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matrizfinal[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
                printf("A soma vai ser: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("%d ", matrizfinal[i][j]);
                        }
                    printf("\n");
                    }
        break;

        case 2 :
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matrizfinal[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
                printf("A subtracao serah: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("%d ", matrizfinal[i][j]);
                        }
                    printf("\n");
                    }
        break;

        case 3 :

            printf("Digite o valor da constante: ");
            scanf("%i", &constante);
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    matriz1[i][j] = matriz1[i][j] + constante;
                    matriz2[i][j] = matriz2[i][j] + constante;
                }
            }
                printf("Primeira matriz eh: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("%d ", matriz1[i][j]);
                        }
                    printf("\n");
                    }

                printf("\n");

                    printf("Primeira matriz eh: \n");
                    for(i = 0; i < 2; i++){
                        for(j = 0; j < 2; j++){
                            printf("%d ", matriz2[i][j]);
                        }
                    printf("\n");
                    }
        break;
        case 4 :
            printf("\nPrimeira Matriz\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("%d ", matriz1[i][j]);
                }
                printf("\n");
            }
            printf("\nSegunda Matriz\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("%d ", matriz2[i][j]);
                }
                printf("\n");
            }
        }  
    return 0;
}