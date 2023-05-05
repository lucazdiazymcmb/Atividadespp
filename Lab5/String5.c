#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Digite uma string em letras maiusculas: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;
        }
    }

    printf("\nA string em letras minusculas eh: %s", str);

    return 0;
}
