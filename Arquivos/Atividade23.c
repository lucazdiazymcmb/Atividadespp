#include <stdio.h>
#include <stdlib.h>

#define MAX_PROF 50

typedef struct {
    char profissao[MAX_PROF + 1];
    int tempoServico;
} Funcionario;

int main() {
    FILE* arquivo;
    Funcionario funcionarios[5];
    int i;

    arquivo = fopen("emp.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite a profissao do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].profissao);

        printf("Digite o tempo de servico (em anos) do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].tempoServico);

        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    arquivo = fopen("emp.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nDados dos funcionarios:\n");

    for (i = 0; i < 5; i++) {
        fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempoServico);
        printf("Funcionario %d: Profissao: %s, Tempo de Servico: %d anos\n", i + 1,
               funcionarios[i].profissao, funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    return 0;
}
