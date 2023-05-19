#include <stdio.h>
#include <string.h>

int validarDataNascimento(char dataNascimento[]) {
    if (strlen(dataNascimento) != 10) {
        return 0;
    }

    for (int i = 0; i < strlen(dataNascimento); i++) {
        if ((i == 2 || i == 5) && dataNascimento[i] != '/') {
            return 0;
        } else if ((i != 2 && i != 5) && (dataNascimento[i] < '0' || dataNascimento[i] > '9')) {
            return 0;
        }
    }

    return 1;
}

int validarCEP(char cep[]) {
    if (strlen(cep) != 8) {
        return 0;
    }

    for (int i = 0; i < strlen(cep); i++) {
        if (cep[i] < '0' || cep[i] > '9') {
            return 0;
        }
    }

    return 1;
}

int validarEmail(char email[]) {
    int i = 0;
    int possuiArroba = 0;
    int possuiPonto = 0;

    if (email[i] == '@' || email[i] == '.') {
        return 0;
    }

    while (email[i] != '\0') {
        if (email[i] == '@') {
            possuiArroba = 1;
            break;
        }
        i++;
    }

    if (!possuiArroba || email[i + 1] == '\0' || email[i + 1] == '.' || email[i + 2] == '\0') {
        return 0;
    }

    while (email[i] != '\0') {
        if (email[i] == '.') {
            possuiPonto = 1;
        }
        i++;
    }

    if (!possuiPonto) {
        return 0;
    }

    return 1;
}

int main() {
    char nome[100];
    char endereco[100];
    char dataNascimento[11];
    char cidade[100];
    char cep[9];
    char email[100];

    printf("Digite seus dados pessoais:\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    printf("Data de Nascimento (dd/mm/aaaa): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);
    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    printf("CEP: ");
    fgets(cep, sizeof(cep), stdin);
    printf("E-mail: ");
    fgets(email, sizeof(email), stdin);

    nome[strcspn(nome, "\n")] = '\0';
    endereco[strcspn(endereco, "\n")] = '\0';
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';
    cidade[strcspn(cidade, "\n")] = '\0';
    cep[strcspn(cep, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    int dadosValidos = 1;

    if (!validarDataNascimento(dataNascimento)) {
        printf("Data de Nascimento inválida.\n");
        dadosValidos = 0;
    }

    if (!validarCEP(cep)) {
        printf("CEP inválido.\n");
        dadosValidos = 0;
    }

    if (!validarEmail(email)) {
        printf("E-mail inválido.\n");
        dadosValidos = 0;
    }

    if (dadosValidos) {
        printf("\nDados fornecidos:\n");
        printf("Nome: %s\n", nome);
        printf("Endereço: %s\n", endereco);
        printf("Data de Nascimento: %s\n", dataNascimento);
        printf("Cidade: %s\n", cidade);
        printf("CEP: %s\n", cep);
        printf("E-mail: %s\n", email);
    } else {
        printf("\nAlgumas informações estão incorretas. Por favor, verifique seus dados.\n");
    }

    return 0;
}
