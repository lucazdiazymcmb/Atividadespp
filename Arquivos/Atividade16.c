#include <stdio.h>

void decimalToBinary(int num, char *binary) {
    if (num == 0) {
        binary[0] = '0';
        binary[1] = '\0';
        return;
    }

    int i = 0;
    while (num > 0) {
        binary[i] = (num % 2) + '0';
        num /= 2;
        i++;
    }
    binary[i] = '\0';

    // Inverter a sequência de 0s e 1s
    int j = 0;
    i--;
    while (j < i) {
        char temp = binary[j];
        binary[j] = binary[i];
        binary[i] = temp;
        j++;
        i--;
    }
}

int main() {
    int numeros[10] = {5, 12, 8, 19, 33, 27, 14, 10, 25, 16};
    char nomeArquivo[] = "binario.txt";
    FILE *arquivo;

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    // Converte cada número para binário e grava no arquivo
    for (int i = 0; i < 10; i++) {
        int num = numeros[i];
        char binary[32];  // Supõe que o número terá no máximo 32 bits (inteiro de 32 bits)

        decimalToBinary(num, binary);

        fprintf(arquivo, "%s\n", binary);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Arquivo gravado com sucesso!\n");

    return 0;
}
