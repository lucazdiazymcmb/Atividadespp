#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct
{   
    char nome[100];
}ID;

void salvardados (ID nick, int Total){
    FILE *arq = fopen("dados.txt","w");
    if (arq != NULL) {
    fprintf (arq, "Nome e Nota\n");
    fprintf(arq, " %s\n", nick.nome);
    fprintf(arq, "nota que tirou eh %d\n", Total);
    if (Total >= 7){
        fprintf(arq, "%s Foi Aprovado\n", nick.nome);/* code */
    }else if (Total >=4 && Total <7){
        fprintf(arq,"%s Foi Reprovado, mas tem direito a Sub\n", nick.nome);
    }
    else {
        fprintf(arq,"%s Foi reprovado por falta de atencao\n", nick.nome);
    }
    fclose (arq);
    }else{
        printf ("Erro ao abrir o arquivo!\n");
}
}

int main (){
    int x, y, soma, nota1, nota2,nota3, Total;
    ID nick;

    printf ("Digite um valor para X:\n");
    scanf ("%d", &x);
    printf ("Digite um valor para Y:\n");
    scanf ("%d", &y);
        soma = x + y;
    printf ("A Soma de X + Y eh: %d\n", soma);
    getchar();
    printf ("Insira seu nome:\n");
    fgets(nick.nome, sizeof(nick.nome),stdin);
    nick.nome[strcspn(nick.nome, "\n")] = '\0';

    printf("Seu Nome eh:%s \n",nick.nome );
    

    printf ("Qual foi a nota 1 do %s:\n", nick.nome);
    scanf ("%d", &nota1);
    printf ("Qual foi a nota 2 do %s:\n", nick.nome);
    scanf ("%d", &nota2);
    printf ("Qual foi a nota 3 do %s:\n", nick.nome);
    scanf ("%d", &nota3);
    soma = nota1+nota2+nota3;
    Total = soma / 3;


    salvardados (nick, Total);
    

    if (Total >= 7){
        printf ("%s Foi Aprovado\n", nick.nome);

    }else if (Total >= 4 && Total < 7){
        printf("%s Tem direito a recuperacao",nick.nome);
    }else {
        printf("%s Reprovado!",nick.nome);
    }




    return 0;
}