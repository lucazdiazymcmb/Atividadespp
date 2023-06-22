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

    // Solicita o número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    // Aloca dinamicamente os vetores de nomes e notas
    nomes = (char**)malloc(numAlunos * sizeof(char*));
    notas = (float*)malloc(numAlunos * sizeof(float));

    // Solicita os nomes e notas dos alunos
    for (i = 0; i < numAlunos; i++) {
        nomes[i] = (char*)malloc((MAX_NOME + 1) * sizeof(char));
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Cria o arquivo para armazenar as informações
    arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    // Escreve as informações no arquivo
    for (i = 0; i < numAlunos; i++) {
        // Completa o nome com espaços em branco caso necessário
        int len = strlen(nomes[i]);
        if (len < MAX_NOME) {
            int j;
            for (j = len; j < MAX_NOME; j++) {
                nomes[i][j] = ' ';
            }
            nomes[i][MAX_NOME] = '\0';
        }
        // Escreve no arquivo
        fprintf(arquivo, "%s %.2f\n", nomes[i], notas[i]);
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Libera a memória alocada
    for (i = 0; i < numAlunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);

    return 0;
}
