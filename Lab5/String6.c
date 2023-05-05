#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 'a' && string[i] <= 'z') { 
            string[i] -= 32; 
        }
    }
    printf("String em maiusculas: %s\n", string);
    return 0;
}