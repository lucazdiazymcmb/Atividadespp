#include <stdio.h>
#include <string.h>

int main() {
    char s1[21], s2[21], c1, c2;
    int op, i, j, count, pos, len;

    do {
        printf("MENU DE OPCOES:\n");
        printf("1 - Ler uma string S1\n");
        printf("2 - Imprimir o tamanho da string S1\n");
        printf("3 - Comparar a string S1 com uma nova string S2\n");
        printf("4 - Concatenar a string S1 com uma nova string S2\n");
        printf("5 - Imprimir a string S1 de forma reversa\n");
        printf("6 - Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("7 - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
        printf("8 - Verificar se uma string S2 eh substring de S1\n");
        printf("9 - Retornar uma substring da string S1\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite uma string S1: ");
                scanf("%s", s1);
                break;

            case 2:
                printf("Tamanho da string S1: %d\n", strlen(s1));
                break;

            case 3:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                if (strcmp(s1, s2) == 0) {
                    printf("As strings sao iguais.\n");
                } else {
                    printf("As strings sao diferentes.\n");
                }
                break;

            case 4:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                strcat(s1, s2);
                printf("String concatenada: %s\n", s1);
                break;

            case 5:
                printf("String S1 em ordem reversa: ");
                for (i = strlen(s1) - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Digite um caractere: ");
                scanf(" %c", &c1);
                count = 0;
                for (i = 0; i < strlen(s1); i++) {
                    if (s1[i] == c1) {
                        count++;
                    }
                }
                printf("O caractere '%c' aparece %d vezes na string.\n", c1, count);
                break;

            case 7:
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o caractere substituto: ");
                scanf(" %c", &c2);
                for (i = 0; i < strlen(s1); i++) {
                    if (s1[i] == c1) {
                        s1[i] = c2;
                        break;
                    }
                }
                printf("Nova string: %s\n", s1);
                break;

                    case 8:
            printf("Digite uma nova string S2: ");
            scanf("%s", s2);
            if (strstr(s1, s2) != NULL) {
                printf("'%s' eh substring de '%s'.\n", s2, s1);
            } else {
                printf("'%s' nao eh substring de '%s'.\n", s2, s1);
            }
            break;

        case 9:
            printf("Digite a posicao inicial da substring: ");
            scanf("%d", &pos);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &len);
            if (pos < 0 || pos > strlen(s1) || len < 0 || len > strlen(s1) - pos) {
                printf("Posicao ou tamanho invalido.\n");
            } else {
                char substring[len+1];
                for (i = pos, j = 0; j < len; i++, j++) {
                    substring[j] = s1[i];
                }
                substring[j] = '\0';
                printf("Substring: %s\n", substring);
            }
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }
    
    } while (op != 0);

    return 0;
}
