#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, flag = 1;

    printf("Digite uma string: ");
    gets(str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("%s eh um palindromo\n", str);
    } else {
        printf("%s nao eh um palindromo\n", str);
    }

    return 0;
}
