#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosLoteria[6];
    int numerosBilhete[6];
    int acertos = 0;

    printf("Digite os 6 numeros sorteados da loteria:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numerosLoteria[i]);
    }

    printf("\nDigite os 6 numeros do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numerosBilhete[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosLoteria[j]) {
                acertos++;
                break;
            }
        }
    }

    int* numerosCorretos = (int*) malloc(acertos * sizeof(int));
    if (numerosCorretos == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

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

    printf("\nNumeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numerosLoteria[i]);
    }
    printf("\nNumeros corretos: ");
    for (int i = 0; i < acertos; i++) {
        printf("%d ", numerosCorretos[i]);
    }
    printf("\n");

    free(numerosCorretos);

    return 0;
}
