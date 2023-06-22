#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

typedef struct {
    char nome[MAX_NOME + 1];
    float nota;
} Aluno;

int main() {
    int numAlunos;
    Aluno* alunos;
    FILE* arquivo;
    Aluno alunoMaiorNota;
    int i;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));

    for (i = 0; i < numAlunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    arquivo = fopen("alunos.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fwrite(alunos, sizeof(Aluno), numAlunos, arquivo);

    fclose(arquivo);

    arquivo = fopen("alunos.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fread(alunos, sizeof(Aluno), numAlunos, arquivo);
    alunoMaiorNota = alunos[0];
    for (i = 1; i < numAlunos; i++) {
        if (alunos[i].nota > alunoMaiorNota.nota) {
            alunoMaiorNota = alunos[i];
        }
    }

    fclose(arquivo);

    printf("Aluno com a maior nota: %s\n", alunoMaiorNota.nome);
    printf("Nota: %.2f\n", alunoMaiorNota.nota);

    free(alunos);

    return 0;
}
