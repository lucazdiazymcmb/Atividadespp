#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[100];
    float nota, maiorNota = 0;
    char alunoMaiorNota[100];

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "NOME: %[^\n]s", nome) != EOF) {
        fscanf(arquivo, " NOTA: %f\n", &nota);
        if (nota > maiorNota) {
            maiorNota = nota;
            strcpy(alunoMaiorNota, nome);
        }
    }

    fclose(arquivo);

    printf("Aluno com maior nota:\n");
    printf("Nome: %s\n", alunoMaiorNota);
    printf("Nota: %.2f\n", maiorNota);

    return 0;
}
