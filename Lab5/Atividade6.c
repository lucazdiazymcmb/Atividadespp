#include <stdio.h>
#include <math.h>

int main(){
    int vetor[10], i, j, primo;
    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++) {
        primo = 1; 

        for(j = 2; j <= sqrt(vetor[i]); j++) {
            if(vetor[i] % j == 0) {
                primo = 0;
            }
        }
        if(primo && vetor[i] > 1) {
            printf("O numero %d eh primo e esta na posicao %d\n", vetor[i], i);
        }
    }
    return 0;
}