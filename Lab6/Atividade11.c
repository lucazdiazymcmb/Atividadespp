#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];
    int numAprovados = 0;
    int numReprovados = 0;
    
    // Leitura dos dados dos alunos
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);
        
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        } else {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }
    
    printf("---- Aprovados ----\n");
    for (int i = 0; i < numAprovados; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].mediaFinal);
    }
    
    printf("---- Reprovados ----\n");
    for (int i = 0; i < numReprovados; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].mediaFinal);
    }
    
    return 0;
}
