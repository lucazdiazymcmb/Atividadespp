#include <stdio.h>
#include <string.h>

int main(){

    int i, j;
    char letra;
    int count = 0;
    char string[100];
    printf("Digite a string: ");
    gets(string);
    j = strlen(string);

    for(i = 0; i < j; i++){
        if(string[i] == 'a'){
            count++;
        }
        if(string[i] == 'e'){
            count++;
        }
        if(string[i] == 'i'){
            count++;
        }
        if(string[i] == 'o'){
            count++;
        }
        if(string[i] == 'u'){
            count++;
        }
    }

    printf("A quantidade vogais: %i\n", count);

    printf("Digite a letra que deseja substituir: \n");
    scanf("%c", &letra);
    for(i = 0; i < j+1; i++){
        string[i] = letra;
    }
    printf("%s", string);

    return 0;
}