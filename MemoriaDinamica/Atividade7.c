#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosLoteria[6];
    int numerosBilhete[6];
    int acertos = 0;

    // Leitura dos números sorteados da loteria
    printf("Digite os 6 números sorteados da loteria:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numerosLoteria[i]);
    }

    // Leitura dos números do bilhete do jogador
    printf("\nDigite os 6 números do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numerosBilhete[i]);
    }

    // Comparação dos números e contagem de acertos
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosLoteria[j]) {
                acertos++;
                break;
            }
        }
    }

    // Alocação dinâmica do vetor para armazenar os números corretos
    int* numerosCorretos = (int*) malloc(acertos * sizeof(int));
    if (numerosCorretos == NULL) {
        printf("Erro ao alocar memória!");
        return 1;
    }

    // Preenchimento do vetor com os números corretos
    int indice = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosLoteria[j]) {
                numerosCorretos[indice] = numerosBilhete[i];
                indice++;
                break;
            }
        }
    }

    // Exibição dos números sorteados e dos números corretos
    printf("\nNúmeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numerosLoteria[i]);
    }
    printf("\nNúmeros corretos: ");
    for (int i = 0; i < acertos; i++) {
        printf("%d ", numerosCorretos[i]);
    }
    printf("\n");

    // Liberação da memória alocada
    free(numerosCorretos);

    return 0;
}
