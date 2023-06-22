#include <stdio.h>
#include <stdlib.h>

int* expandirVetor(int* vetor, int tamanho) {
    int* novoVetor = (int*)malloc((tamanho + 10) * sizeof(int));
    
    for (int i = 0; i < tamanho; i++) {
        novoVetor[i] = vetor[i];
    }
    
    free(vetor);
    
    return novoVetor;
}

int main() {
    int tamanho = 10;
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    int numero;
    int indice = 0;
    
    printf("Digite os numeros (digite 0 para encerrar): \n");
    
    while (1) {
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
        
        vetor[indice] = numero;
        indice++;
        
        if (indice == tamanho) {
            vetor = expandirVetor(vetor, tamanho);
            tamanho += 10;
        }
    }
    
    printf("\nVetor lido:\n");
    
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}
