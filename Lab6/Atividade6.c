#include <stdio.h>
#define NUM_ALUNOS 2


struct dados_alunos{
    char matricula[100];
    char nome[100];
    char codigo[100];
    float notas[2];
};
typedef struct dados_alunos dados_alunos;

int media_ponderada(dados_alunos *alunos, int i);
void imprimir(dados_alunos *alunos, float *media);
int main(){
    dados_alunos alunos[NUM_ALUNOS];
    float media[NUM_ALUNOS];

    for(int i = 0; i < NUM_ALUNOS; i++){
        printf("--Insira os dados do aluno--\n");
        printf("Nome: \n");
        fgets(alunos[i].nome, 100, stdin);
        setbuf(stdin, NULL);
        printf("Matricula:\n ");
        fgets(alunos[i].matricula, 100, stdin);
        setbuf(stdin, NULL);
        printf("Codigo da disciplina:\n ");
        fgets(alunos[i].codigo, 100, stdin);
        setbuf(stdin, NULL);
        printf("Digite as notas(ex. 10 7.5):\n ");
        scanf("%f %f" , &alunos[i].notas[0], &alunos[i].notas[1]);
        setbuf(stdin, NULL);
        media[i] = media_ponderada(alunos, i);
    }
    imprimir(alunos, media);

    return 0;
}
int media_ponderada(dados_alunos *alunos, int i){
    float mediaponderada;

    mediaponderada = ((alunos[i].notas[0]) + (alunos[i].notas[1] * 2))/3;

    return mediaponderada;
}
void imprimir(dados_alunos *alunos, float *media){
    printf("--Dados dos alunos--\n");
    for(int i = 0; i <NUM_ALUNOS; i++){
        
        printf("Nome: %s\n" , alunos[i].nome);
        printf("Matricula: %s\n" , alunos[i].matricula);
        printf("Codigo da disciplina: %s\n" , alunos[i].codigo);
        printf("Media ponderada: %.2f\n" ,media[i]);
        printf("\n\n");

    }
    
}