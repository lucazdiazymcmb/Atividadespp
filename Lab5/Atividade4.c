#include <stdio.h>

int main(){
    int vetor[5], i;
    for(i = 0; i < 5; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0];
    int menor = vetor[0];
    for (i = 1; i < 5; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }
    printf("O maior valor eh %d e o menor eh %d", maior, menor);
    return 0;
}