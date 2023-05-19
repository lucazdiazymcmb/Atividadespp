#include <stdio.h>

    struct aluno{
        char nome[50];
        char matricula[10];
        int nota[3];
    };

int main(){

    int i, j, maior1 = 0, media = 0, mediamaior = 0, nota1;
    struct aluno c[5];
    
    for(i = 0; i < 5; i++){
        
        
        printf("Digite o nome do aluno %i:\n ", (i+1));
        fflush(stdin);
        fgets(c[i].nome, 50, stdin);

        printf("Digite a matricula:\n ");
        fflush(stdin);
        fgets(c[i].matricula, 10, stdin);
    
        for(j = 0; j < 3; j++){
            fflush(stdin);
            printf("Digite a nota da prova %i: \n", (j+1));
            scanf("%d", &c[i].nota[j]);
        }
         

    }

    for(i = 0; i < 5; i++){
        
        if(c[i].nota[1] > maior1){
            nota1 = c[i].nota[i];
            maior1 = i;
        }
        
    }
    printf("O aluno com maior nota na prova 1 eh: Aluno %i \n", maior1);
    printf("Nota: %i \n", nota1); 

    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += c[i].nota[j];
        }
        media = media/3;
        if(media > mediamaior){
            mediamaior = media;
            maior1 = i;
        }
    }
    printf("O Aluno com maior media eh: Aluno %i \n", maior1);
    printf("Media: %i \n", mediamaior);

    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += c[i].nota[j];
        }
        media = media/3;
        if(media < mediamaior){
            mediamaior = media;
            maior1 = i;
        }
    }
    printf("O Aluno com menor media eh: Aluno %i \n", maior1);
    printf("Media: %i \n", mediamaior);

    for(i = 0; i < 5; i++){
        media = 0;
        for(j = 0; j < 3; j++){
            media += c[i].nota[j];
        }
        media = media/3;
        if(media >= 6){
           printf("O aluno %i passou \n", i);
        }else{
           printf("O aluno %i reprovou \n", i); 
        }
    }
    return 0;
}