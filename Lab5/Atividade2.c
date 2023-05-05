#include <stdio.h>

int main(){
    int vetor[8], i, posicao1, posicao2;
    for(i = 0; i < 8; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite duas posicoes para serem somadas: ");
    scanf("%d %d", &posicao1, &posicao2);
    if (posicao1 > 7 || posicao2 > 7)
    {
        printf("Posicoes invalidas");
        return 0;
    }

    printf("a soma das posicoes eh %d", vetor[posicao1] + vetor[posicao2]);
    return 0;
}