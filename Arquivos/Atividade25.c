#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_TELEFONE 20

typedef struct {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    int dia_aniversario;
    int mes_aniversario;
} Contato;

void cadastrarContato(FILE* arquivo) {
    Contato contato;

    printf("Digite o nome do contato: ");
    scanf(" %[^\n]s", contato.nome);

    printf("Digite o telefone do contato: ");
    scanf(" %[^\n]s", contato.telefone);

    printf("Digite o dia do aniversario do contato: ");
    scanf("%d", &contato.dia_aniversario);

    printf("Digite o mes do aniversario do contato: ");
    scanf("%d", &contato.mes_aniversario);

    // Escreve os dados do contato no arquivo
    fwrite(&contato, sizeof(Contato), 1, arquivo);

    printf("Contato cadastrado com sucesso!\n");
}

void removerContato(FILE* arquivo) {
    char nome[MAX_NOME];
    Contato contato;
    int encontrado = 0;

    printf("Digite o nome do contato que deseja remover: ");
    scanf(" %[^\n]s", nome);

    FILE* arquivoTemp = fopen("temp.bin", "wb");

    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (strcmp(contato.nome, nome) != 0) {
            fwrite(&contato, sizeof(Contato), 1, arquivoTemp);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    remove("contatos.bin");
    rename("temp.bin", "contatos.bin");

    if (encontrado) {
        printf("Contato removido com sucesso!\n");
    } else {
        printf("Contato nao encontrado.\n");
    }

    arquivo = fopen("contatos.bin", "rb+");
    if (arquivo == NULL) {
        arquivo = fopen("contatos.bin", "wb+");
    }
}

void pesquisarContato(FILE* arquivo) {
    char nome[MAX_NOME];
    Contato contato;
    int encontrado = 0;

    printf("Digite o nome do contato que deseja pesquisar: ");
    scanf(" %[^\n]s", nome);

    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (strcmp(contato.nome, nome) == 0) {
            encontrado = 1;
            printf("Contato encontrado!\n");
            printf("Nome: %s\n", contato.nome);
            printf("Telefone: %s\n", contato.telefone);
            printf("Aniversario: %d/%d\n", contato.dia_aniversario, contato.mes_aniversario);
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void listarContatos(FILE* arquivo) {
    Contato contato;

    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        printf("Nome: %s\n", contato.nome);
        printf("Telefone: %s\n", contato.telefone);
        printf("Aniversario: %d/%d\n\n", contato.dia_aniversario, contato.mes_aniversario);
    }
}

void listarContatosPorLetra(FILE* arquivo) {
    char letra;
    Contato contato;

    printf("Digite a letra inicial dos contatos que deseja listar: ");
    scanf(" %c", &letra);

    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.nome[0] == letra) {
            printf("Nome: %s\n", contato.nome);
            printf("Telefone: %s\n", contato.telefone);
            printf("Aniversario: %d/%d\n\n", contato.dia_aniversario, contato.mes_aniversario);
        }
    }
}

void imprimirAniversariantesMes(FILE* arquivo) {
    int mes;
    Contato contato;
    int encontrados = 0;

    printf("Digite o mes para imprimir os aniversariantes: ");
    scanf("%d", &mes);

    printf("Aniversariantes do mes %d:\n", mes);

    // Lê e verifica o mês de aniversário de cada registro do arquivo
    while (fread(&contato, sizeof(Contato), 1, arquivo) == 1) {
        if (contato.mes_aniversario == mes) {
            printf("Nome: %s\n", contato.nome);
            printf("Telefone: %s\n", contato.telefone);
            printf("Aniversario: %d/%d\n\n", contato.dia_aniversario, contato.mes_aniversario);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum aniversariante encontrado para o mes %d.\n", mes);
    }
}

int main() {
    FILE* arquivo;
    int opcao;

    arquivo = fopen("contatos.bin", "rb+");
    if (arquivo == NULL) {
        arquivo = fopen("contatos.bin", "wb+");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    }

    while (1) {
        printf("\nAgenda de Contatos\n");
        printf("1. Inserir Contato\n");
        printf("2. Remover Contato\n");
        printf("3. Pesquisar Contato\n");
        printf("4. Listar Todos os Contatos\n");
        printf("5. Listar Contatos por Letra\n");
        printf("6. Imprimir Aniversariantes do Mes\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarContato(arquivo);
                break;
            case 2:
                removerContato(arquivo);
                break;
            case 3:
                pesquisarContato(arquivo);
                break;
            case 4:
                listarContatos(arquivo);
                break;
            case 5:
                listarContatosPorLetra(arquivo);
                break;
            case 6:
                imprimirAniversariantesMes(arquivo);
                break;
            case 7:
                fclose(arquivo);
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }
}
