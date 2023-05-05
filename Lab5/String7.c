#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); 
    int tam = strlen(frase);
    for (int i = 0; i < tam; i++) {
        if (frase[i] == ' ') { 
            for (int j = i; j < tam; j++) {
                frase[j] = frase[j+1];
            }
            tam--; 
            i--; 
        }
    }
    printf("Frase sem espacos em branco: %s\n", frase);
    return 0;
}
