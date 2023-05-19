#include <stdio.h>


typedef struct {
    char nome[100];
    int matricula;
    char curso[100];
} Aluno;

int main() {
    int i;
    Aluno alunos[5]; 
    

    for (i = 0; i < 5; i++) {
        printf("Informe os dados do aluno %d:\n", i+1);
        
        printf("Nome: ");
        fgets(alunos[i].nome, 100, stdin);
        
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        while (getchar() != '\n');
        
        printf("Curso: ");
        fgets(alunos[i].curso, 100, stdin);
        
        printf("\n");
    }
    

    printf("Dados dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
    }
    
    return 0;
}
