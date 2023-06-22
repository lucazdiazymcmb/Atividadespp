#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

int main() {
    int numAlunos;
    char** nomes;
    float* notas;
    FILE* arquivo;
    int i;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    nomes = (char**)malloc(numAlunos * sizeof(char*));
    notas = (float*)malloc(numAlunos * sizeof(float));

    for (i = 0; i < numAlunos; i++) {
        nomes[i] = (char*)malloc((MAX_NOME + 1) * sizeof(char));
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    for (i = 0; i < numAlunos; i++) {
        int len = strlen(nomes[i]);
        if (len < MAX_NOME) {
            int j;
            for (j = len; j < MAX_NOME; j++) {
                nomes[i][j] = ' ';
            }
            nomes[i][MAX_NOME] = '\0';
        }
        fprintf(arquivo, "%s %.2f\n", nomes[i], notas[i]);
    }

    fclose(arquivo);

    for (i = 0; i < numAlunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);

    return 0;
}
