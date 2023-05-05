#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i;
    printf("Digite sua string: ");
    fgets(string, 100, stdin);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = ((string[i] - 'a' + 3) % 26) + 'a';
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = ((string[i] - 'A' + 3) % 26) + 'A';
        }    
    }
    printf("\nA string transformada utilizando Codigo Cesar eh: %s", string);
    return 0;
}
    
