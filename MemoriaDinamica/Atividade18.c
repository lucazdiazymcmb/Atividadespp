#include <stdio.h>
#include <stdlib.h>

int main() {
    // a) Alocação dinâmica de um vetor de 1024 Bytes (1 Kbyte)
    int* vetor = (int*)malloc(1024 * sizeof(char));

    // b) Alocação dinâmica de uma matriz de inteiros de dimensão 10 x 10
    int** matriz = (int**)malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matriz[i] = (int*)malloc(10 * sizeof(int));
    }

    // c) Alocação dinâmica de um vetor para armazenar 50 registros
    typedef struct {
        char nome[30];
        int codigo;
        float preco;
    } Registro;

    Registro* registros = (Registro*)malloc(50 * sizeof(Registro));

    // d) Alocação dinâmica de um texto de até 100 linhas com até 80 caracteres em cada linha
    char** texto = (char**)malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        texto[i] = (char*)malloc(80 * sizeof(char));
    }

    // Liberar a memória alocada
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
