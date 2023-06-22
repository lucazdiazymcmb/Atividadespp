#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME + 1];
    int notas[3];
} Aluno;

int compararNotas(const void* a, const void* b) {
    const int* notaA = ((const Aluno*)a)->notas;
    const int* notaB = ((const Aluno*)b)->notas;

    if (notaA[0] < notaB[0])
        return -1;
    else if (notaA[0] > notaB[0])
        return 1;
    else {
        if (notaA[1] < notaB[1])
            return -1;
        else if (notaA[1] > notaB[1])
            return 1;
        else {
            if (notaA[2] < notaB[2])
                return -1;
            else if (notaA[2] > notaB[2])
                return 1;
            else
                return 0;
        }
    }
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
    FILE* arquivoEntrada;
    FILE* arquivoSaida;
    Aluno* alunos;
    int numAlunos;
    int i;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    numAlunos = 0;
    char linha[MAX_NOME + 1 + 3 * sizeof(int)];
    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        numAlunos++;
    }

    fseek(arquivoEntrada, 0, SEEK_SET);

    alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));

    for (i = 0; i < numAlunos; i++) {
        fgets(linha, sizeof(linha), arquivoEntrada);
        sscanf(linha, "%40[^0123456789]%d%d%d", alunos[i].nome, &alunos[i].notas[0],
               &alunos[i].notas[1], &alunos[i].notas[2]);
    }

    fclose(arquivoEntrada);

    qsort(alunos, numAlunos, sizeof(Aluno), compararNotas);

    arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saida.\n");
        free(alunos);
        return 1;
    }

    for (i = 0; i < numAlunos; i++) {
        fprintf(arquivoSaida, "%-40s %d %d %d\n", alunos[i].nome, alunos[i].notas[0],
                alunos[i].notas[1], alunos[i].notas[2]);
    }

    fclose(arquivoSaida);

    free(alunos);

    printf("Processamento concluido. Verifique o arquivo de saida '%s'.\n", nomeArquivoSaida);

    return 0;
}
