#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo_vendedor;
    char nome_vendedor[100];
    float valor_da_venda;
    int mes;
} Vendedor;

int exibirMenu() {
    int opcao;
    printf("\nMenu:\n");
    printf("1. Criar arquivo de dados\n");
    printf("2. Incluir registro no arquivo\n");
    printf("3. Excluir vendedor do arquivo\n");
    printf("4. Alterar valor de venda\n");
    printf("5. Imprimir registros\n");
    printf("6. Excluir arquivo de dados\n");
    printf("7. Sair do programa\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

void criarArquivo() {
    FILE *arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo de dados.\n");
    } else {
        fclose(arquivo);
        printf("Arquivo de dados criado com sucesso.\n");
    }
}

void incluirRegistro() {
    FILE *arquivo = fopen("dados.bin", "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    Vendedor vendedor;

    printf("Informe o codigo do vendedor: ");
    scanf("%d", &vendedor.codigo_vendedor);

    printf("Informe o nome do vendedor: ");
    scanf(" %[^\n]", vendedor.nome_vendedor);

    printf("Informe o valor da venda: ");
    scanf("%f", &vendedor.valor_da_venda);

    printf("Informe o mes: ");
    scanf("%d", &vendedor.mes);

    fwrite(&vendedor, sizeof(Vendedor), 1, arquivo);

    fclose(arquivo);

    printf("Registro incluido com sucesso.\n");
}

void excluirVendedor() {
    int codigo, mes;

    printf("Informe o código do vendedor: ");
    scanf("%d", &codigo);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    FILE *arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    FILE *arquivoTemp = fopen("temp.bin", "wb");
    if (arquivoTemp == NULL) {
        printf("Erro ao criar o arquivo temporario.\n");
        fclose(arquivo);
        return;
    }

    Vendedor vendedor;
    int encontrado = 0;

    while (fread(&vendedor, sizeof(Vendedor), 1, arquivo) == 1) {
        if (vendedor.codigo_vendedor != codigo || vendedor.mes != mes) {
            fwrite(&vendedor, sizeof(Vendedor), 1, arquivoTemp);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    if (encontrado) {
        remove("dados.bin");
        rename("temp.bin", "dados.bin");
        printf("Vendedor removido com sucesso.\n");
    } else {
        remove("temp.bin");
        printf("Vendedor nao encontrado.\n");
    }
}

void alterarValorVenda() {
    int codigo, mes;
    float novoValor;

    printf("Informe o codigo do vendedor: ");
    scanf("%d", &codigo);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o novo valor da venda: ");
    scanf("%f", &novoValor);

    FILE *arquivo = fopen("dados.bin", "rb+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    Vendedor vendedor;
    int encontrado = 0;

    while (fread(&vendedor, sizeof(Vendedor), 1, arquivo) == 1) {
        if (vendedor.codigo_vendedor == codigo && vendedor.mes == mes) {
            vendedor.valor_da_venda = novoValor;
            fseek(arquivo, -sizeof(Vendedor), SEEK_CUR);
            fwrite(&vendedor, sizeof(Vendedor), 1, arquivo);
            encontrado = 1;
            break;
        }
    }

    fclose(arquivo);

    if (encontrado) {
        printf("Valor de venda alterado com sucesso.\n");
    } else {
        printf("Vendedor nao encontrado.\n");
    }
}

void imprimirRegistros() {
    FILE *arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    Vendedor vendedor;

    while (fread(&vendedor, sizeof(Vendedor), 1, arquivo) == 1) {
        printf("Codigo: %d\n", vendedor.codigo_vendedor);
        printf("Nome: %s\n", vendedor.nome_vendedor);
        printf("Valor da venda: %.2f\n", vendedor.valor_da_venda);
        printf("Mes: %d\n", vendedor.mes);
        printf("-----------------------------\n");
    }

    fclose(arquivo);
}

void excluirArquivo() {
    if (remove("dados.bin") == 0) {
        printf("Arquivo de dados excluido com sucesso.\n");
    } else {
        printf("Erro ao excluir o arquivo de dados.\n");
    }
}

int main() {
    int opcao;

    do {
        opcao = exibirMenu();

        switch (opcao) {
            case 1:
                criarArquivo();
                break;
            case 2:
                incluirRegistro();
                break;
            case 3:
                excluirVendedor();
                break;
            case 4:
                alterarValorVenda();
                break;
            case 5:
                imprimirRegistros();
                break;
            case 6:
                excluirArquivo();
                break;
            case 7:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}
