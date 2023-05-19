#include <stdio.h>
#include <string.h>

#define MAX_NOME_DIRETOR 20
#define MAX_FILMES 10
#define MAX_NOME_FILME 30

struct Filme {
    char nome[MAX_NOME_FILME];
    int ano;
    int duracao;
};

struct Diretor {
    char nome[MAX_NOME_DIRETOR];
    int quantidadeFilmes;
    struct Filme filmes[MAX_FILMES];
};

int main() {
    struct Diretor diretores[5];
    char buscaNome[MAX_NOME_DIRETOR];
    int i, j;

    printf("Digite os dados de 5 diretores:\n");
    for (i = 0; i < 5; i++) {
        printf("\nDiretor %d:\n", i + 1);
        printf("Nome: ");
        fgets(diretores[i].nome, sizeof(diretores[i].nome), stdin);
        printf("Quantidade de filmes: ");
        scanf("%d", &diretores[i].quantidadeFilmes);
        getchar(); // Limpar o buffer do teclado

        // Remover o caractere de nova linha ('\n') do campo de nome
        diretores[i].nome[strcspn(diretores[i].nome, "\n")] = '\0';

        printf("Digite os dados dos filmes:\n");
        for (j = 0; j < diretores[i].quantidadeFilmes; j++) {
            printf("\nFilme %d:\n", j + 1);
            printf("Nome: ");
            fgets(diretores[i].filmes[j].nome, sizeof(diretores[i].filmes[j].nome), stdin);
            printf("Ano: ");
            scanf("%d", &diretores[i].filmes[j].ano);
            printf("Duração: ");
            scanf("%d", &diretores[i].filmes[j].duracao);
            getchar(); // Limpar o buffer do teclado

            // Remover o caractere de nova linha ('\n') do campo de nome do filme
            diretores[i].filmes[j].nome[strcspn(diretores[i].filmes[j].nome, "\n")] = '\0';
        }
    }

    while (1) {
        printf("\nDigite o nome do diretor para buscar os filmes (ou digite uma string vazia para sair): ");
        fgets(buscaNome, sizeof(buscaNome), stdin);

        // Remover o caractere de nova linha ('\n') do campo de buscaNome
        buscaNome[strcspn(buscaNome, "\n")] = '\0';

        if (strlen(buscaNome) == 0) {
            break;
        }

        int encontrado = 0;

        printf("\nFilmes do diretor %s:\n", buscaNome);
        for (i = 0; i < 5; i++) {
            if (strcmp(buscaNome, diretores[i].nome) == 0) {
                encontrado = 1;
                for (j = 0; j < diretores[i].quantidadeFilmes; j++) {
                    printf("Filme %d:\n", j + 1);
                    printf("Nome: %s\n", diretores[i].filmes[j].nome);
                    printf("Ano: %d\n", diretores[i].filmes[j].ano);
                    printf("Duração: %d\n", diretores[i].filmes[j].duracao);
                }
                break;
            }
        }

        if (!encontrado) {
            printf("Diretor não encontrado.\n");
        }
    }

    return 0;
}
