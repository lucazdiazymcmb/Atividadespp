#include <stdio.h>
#include <string.h>

#define LINHAS 5
#define COLUNAS 20

int main() {
    char modelos[LINHAS][COLUNAS];
    float consumo[LINHAS], menor_consumo = 0;
    int i, indice_menor_consumo = 0;

    
    for (i = 0; i < LINHAS; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        fgets(modelos[i], COLUNAS, stdin);

        printf("Digite o consumo em km/l do carro %d: ", i+1);
        scanf("%f", &consumo[i]);
        getchar(); 

        
        if (i == 0 || consumo[i] > menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }

    printf("O modelo mais econômico eh: %s", modelos[indice_menor_consumo]);
    printf("O consumo em litros para percorrer 1000km eh:\n");


    for (i = 0; i < LINHAS; i++) {
        printf("%s: %.2f litros\n", modelos[i], 1000/consumo[i]);
    }

    return 0;
}
