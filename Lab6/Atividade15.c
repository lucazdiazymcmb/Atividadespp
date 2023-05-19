#include <stdio.h>
#include <string.h>

#define MAX_TITULO 30
#define MAX_AUTOR 15
#define MAX_LIVROS 5

struct Livro {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
};

int main() {
    struct Livro livros[MAX_LIVROS];
    char tituloBusca[MAX_TITULO];
    int encontrados = 0;

    printf("Digite os dados de 5 livros:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        printf("Autor: ");
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        getchar(); // Limpar o buffer do teclado

        // Remover o caractere de nova linha ('\n') dos campos de título e autor
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
    }

    printf("\nDigite o título do livro que deseja buscar: ");
    fgets(tituloBusca, sizeof(tituloBusca), stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0';

    printf("\nLivros encontrados:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        if (strcmp(livros[i].titulo, tituloBusca) == 0) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título \"%s\".\n", tituloBusca);
    }

    return 0;
}
