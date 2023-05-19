#include <stdio.h>
typedef struct{
    int dia, mes, ano;
}dma;

int verifica_data(dma data_valida);
int verifica_anoBissexto(dma data_valida);
int verifica_diadoMes(dma data_valida);
int calcular_dias(dma data_valida, dma data_valida2);
int main(){

    dma data_valida, data_valida2;
    int numeroDias;

    do{
        printf("Insira a primeira data:\n ");
        scanf("%d/%d/%d" , &data_valida.dia, &data_valida.mes, &data_valida.ano);
        setbuf(stdin, NULL);
        printf("Insira a segunda data:\n ");
        scanf("%d/%d/%d" , &data_valida2.dia, &data_valida2.mes, &data_valida2.ano);
        setbuf(stdin, NULL);

    

    
        if(verifica_data(data_valida) && verifica_data(data_valida2)){
            printf("Data Valida 1: %d/%d/%d\n" , data_valida.dia, data_valida.mes, data_valida.ano);
            printf("Data Valida 2: %d/%d/%d\n" , data_valida2.dia, data_valida2.mes, data_valida2.ano);
            numeroDias = calcular_dias(data_valida, data_valida2);
            printf("Numero de dias entre as duas datas: %d\n", numeroDias);
        }else{
            printf("[ERRO]:Data Invalida!\n\n");
        }
    }while(!(verifica_data(data_valida)) || !(verifica_data(data_valida2)));
    
    return 0;
}

int verifica_anoBissexto(dma data_valida){
    int ano = data_valida.ano;
    return (!(ano%400)) || ((!(ano%4)) && (ano%100));
}

int verifica_diadoMes(dma data_valida){
    int qntdias[12] = {31, 28, 31, 30, 31, 30, 31, 31 , 30, 31 , 30, 31}, mes = data_valida.mes;
    if(mes == 2 && verifica_anoBissexto(data_valida)){
        return 29;
    }
    return qntdias[mes - 1];

}

int verifica_data(dma data_valida){
    
    
    if(data_valida.dia > verifica_diadoMes(data_valida) || data_valida.dia < 1){  //verifica se o dia é valido
        return 0;
    }
    if (data_valida.mes > 12){                                          //verifica se o mes é valido
        return 0;
    }
    return 1;
}

int calcular_dias(dma data_valida, dma data_valida2){
    int totaldias = 0;
    dma datames;
    dma dataano;

    for(int i = data_valida.ano + 1; i < data_valida2.ano; i++){
        dataano.dia = 1;
        dataano.mes = 1;
        dataano.ano = i;
        totaldias += verifica_anoBissexto(dataano) ? 366: 365; 
    }
    for(int i = data_valida.mes; i < 13; i++){
        datames.dia = 1;
        datames.mes = i;
        datames.ano = data_valida.ano;
        totaldias += verifica_diadoMes(datames);
    }
    totaldias -= data_valida.dia;
    for(int i = 1; i < data_valida2.mes; i++){
        datames.dia = 1;
        datames.mes = i;
        datames.ano = data_valida2.ano;
        totaldias += verifica_diadoMes(datames);
    }
    totaldias += data_valida2.dia;

    return totaldias;
    
    
    
}