#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor = (int*)malloc(1024 * sizeof(char));

    int** matriz = (int**)malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matriz[i] = (int*)malloc(10 * sizeof(int));
    }

    typedef struct {
        char nome[30];
        int codigo;
        float preco;
    } Registro;

    Registro* registros = (Registro*)malloc(50 * sizeof(Registro));

    char** texto = (char**)malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        texto[i] = (char*)malloc(80 * sizeof(char));
    }

    free(vetor);

    for (int i = 0; i < 10; i++) {
        free(matriz[i]);
    }
    free(matriz);

    free(registros);

    for (int i = 0; i < 100; i++) {
        free(texto[i]);
    }
    free(texto);

    return 0;
}
