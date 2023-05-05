#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; 
    int i, j;
    
    printf("Digite uma string: ");
    scanf("%s", S);
    
    printf("Digite os valores de i e j: ");
    scanf("%d %d", &i, &j);
    
    int len = strlen(S);
    
    if (i < 0 || j >= len || i > j) {
        printf("Entrada inválida!\n");
        return 0;
    }
    
    printf("Segmento S[%d..%d]: ", i, j);
    for (int k = i; k <= j; k++) {
        printf("%c", S[k]);
    }
    printf("\n");
    
    return 0;
}
