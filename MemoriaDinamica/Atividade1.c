#include <stdio.h>
#include <stdlib.h>

int main() {
    // Aloca dinamicamente um array de 5 números inteiros
    int* numeros = (int*) malloc(5 * sizeof(int));
    // Verifica se a alocação de memória foi bem-sucedida
    if (numeros == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }
    // Solicita ao usuário que digite os 5 números
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    // Mostra na tela os 5 números digitados
    printf("Os numeros digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    // Libera a memória alocada
    free(numeros);

    return 0;
}
