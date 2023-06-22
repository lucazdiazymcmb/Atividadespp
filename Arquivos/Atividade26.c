#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

void cadastrarAluno(Aluno* alunos, int indice) {
    printf("Aluno %d:\n", indice + 1);
    printf("Matricula: ");
    scanf("%d", &alunos[indice].matricula);
    printf("Sobrenome: ");
    scanf("%s", alunos[indice].sobrenome);
    printf("Ano de Nascimento: ");
    scanf("%d", &alunos[indice].ano_nascimento);
    printf("\n");
}

void gravarArquivo(Aluno* alunos, int quantidade) {
    FILE* arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        fprintf(arquivo, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano_nascimento);
    }

    fclose(arquivo);
}

void carregarArquivo(Aluno** alunos, int* quantidade) {
    FILE* arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado.\n");
        return;
    }

    int matricula, ano_nascimento;
    char sobrenome[50];

    while (fscanf(arquivo, "%d %s %d", &matricula, sobrenome, &ano_nascimento) == 3) {
        *alunos = realloc(*alunos, (*quantidade + 1) * sizeof(Aluno));
        (*alunos)[*quantidade].matricula = matricula;
        strcpy((*alunos)[*quantidade].sobrenome, sobrenome);
        (*alunos)[*quantidade].ano_nascimento = ano_nascimento;
        (*quantidade)++;
    }

    fclose(arquivo);
}

void mostrarAlunos(Aluno* alunos, int quantidade) {
    printf("Dados dos alunos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("\n");
    }
}

void liberarMemoria(Aluno* alunos) {
    free(alunos);
}

int main() {
    Aluno* alunos = NULL;
    int quantidade = 0;
    int opcao;

    printf("Numero de alunos a serem armazenados: ");
    scanf("%d", &quantidade);

    alunos = malloc(quantidade * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("\n1. Carregar registros do arquivo\n");
    printf("2. Cadastrar novos alunos\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        carregarArquivo(&alunos, &quantidade);
        mostrarAlunos(alunos, quantidade);
    } else if (opcao == 2) {
        for (int i = 0; i < quantidade; i++) {
            cadastrarAluno(alunos, i);
        }
        gravarArquivo(alunos, quantidade);
    } else {
        printf("Opcao invalida.\n");
    }

    liberarMemoria(alunos);

    return 0;
}
