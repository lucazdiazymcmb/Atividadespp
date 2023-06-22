#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ALUNOS 50
#define NOTA_MINIMA_APROVACAO 6.0

typedef struct {
    char nome[50];
    float notas[3];
    float media;
} Aluno;

typedef struct {
    char nomeTurma[50];
    int quantidadeAlunos;
    Aluno alunos[MAX_ALUNOS];
} Turma;

void definirInformacoesTurma(Turma* turma) {
    printf("Informe o nome da turma: ");
    scanf("%s", turma->nomeTurma);
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &turma->quantidadeAlunos);
}

void inserirAlunoNotas(Turma* turma) {
    if (turma->quantidadeAlunos >= MAX_ALUNOS) {
        printf("A quantidade maxima de alunos foi atingida.\n");
        return;
    }

    Aluno aluno;
    printf("Informe o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Informe as notas do aluno (3 notas): ");
    scanf("%f %f %f", &aluno.notas[0], &aluno.notas[1], &aluno.notas[2]);
    aluno.media = (aluno.notas[0] + aluno.notas[1] + aluno.notas[2]) / 3.0;

    turma->alunos[turma->quantidadeAlunos] = aluno;
    turma->quantidadeAlunos++;
}

void exibirAlunosMedias(Turma* turma) {
    printf("Alunos e médias:\n");
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        printf("Aluno: %s\n", turma->alunos[i].nome);
        printf("Media: %.2f\n", turma->alunos[i].media);
        printf("\n");
    }
}

void exibirAlunosAprovados(Turma* turma) {
    printf("Alunos aprovados:\n");
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        if (turma->alunos[i].media >= NOTA_MINIMA_APROVACAO) {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Media: %.2f\n", turma->alunos[i].media);
            printf("\n");
        }
    }
}

void exibirAlunosReprovados(Turma* turma) {
    printf("Alunos reprovados:\n");
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        if (turma->alunos[i].media < NOTA_MINIMA_APROVACAO) {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Media: %.2f\n", turma->alunos[i].media);
            printf("\n");
        }
    }
}

void salvarDadosDisco(Turma* turma) {
    FILE* arquivo = fopen("notas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s\n", turma->nomeTurma);
    fprintf(arquivo, "%d\n", turma->quantidadeAlunos);
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        fprintf(arquivo, "%s %.2f %.2f %.2f %.2f\n", turma->alunos[i].nome, turma->alunos[i].notas[0],
                turma->alunos[i].notas[1], turma->alunos[i].notas[2], turma->alunos[i].media);
    }

    fclose(arquivo);
    printf("Dados salvos em disco.\n");
}

void carregarDadosDisco(Turma* turma) {
    FILE* arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    fscanf(arquivo, "%s", turma->nomeTurma);
    fscanf(arquivo, "%d", &turma->quantidadeAlunos);
    for (int i = 0; i < turma->quantidadeAlunos; i++) {
        fscanf(arquivo, "%s %f %f %f %f", turma->alunos[i].nome, &turma->alunos[i].notas[0],
               &turma->alunos[i].notas[1], &turma->alunos[i].notas[2], &turma->alunos[i].media);
    }

    fclose(arquivo);
    printf("Dados carregados do disco.\n");
}

int main() {
    Turma turma;
    turma.quantidadeAlunos = 0;

    int opcao;
    bool sair = false;

    while (!sair) {
        printf("\n");
        printf("MENU:\n");
        printf("1. Definir informacoes da turma\n");
        printf("2. Inserir aluno e notas\n");
        printf("3. Exibir alunos e medias\n");
        printf("4. Exibir alunos aprovados\n");
        printf("5. Exibir alunos reprovados\n");
        printf("6. Salvar dados em disco\n");
        printf("7. Carregar dados do disco\n");
        printf("8. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                definirInformacoesTurma(&turma);
                break;
            case 2:
                inserirAlunoNotas(&turma);
                break;
            case 3:
                exibirAlunosMedias(&turma);
                break;
            case 4:
                exibirAlunosAprovados(&turma);
                break;
            case 5:
                exibirAlunosReprovados(&turma);
                break;
            case 6:
                salvarDadosDisco(&turma);
                break;
            case 7:
                carregarDadosDisco(&turma);
                break;
            case 8:
                sair = true;
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    return 0;
}
