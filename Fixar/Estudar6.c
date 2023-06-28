#include <stdio.h>

int main() {
    FILE* arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[50];
    int nota1, nota2, nota3;

    while (fscanf(arquivo, "%s %d %d %d", nome, &nota1, &nota2, &nota3) != EOF) {
        double media = (nota1 + nota2 + nota3) / 3.0;

        printf("Aluno: %s\n", nome);
        printf("Média: %.2lf\n", media);

        if (media >= 6.0) {
            printf("Status: APROVADO\n");
        } else {
            printf("Status: REPROVADO\n");
        }

        printf("\n");
    }

    fclose(arquivo);

    return 0;
}
