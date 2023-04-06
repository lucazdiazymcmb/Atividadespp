#include <stdio.h>


int main(){
    int N, M,conta ;
    printf ("\nDigite um numero para saber seus 5 primeiros multiplos\n");
    scanf ("%d", &N);
    M = 1;
    for (;M < 6; ++M ){
        conta = N * M;
        printf ("\n Numeros multiplos de %d: %d\n", N, conta);
    }


    return 0;
}