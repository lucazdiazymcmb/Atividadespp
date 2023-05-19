#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char texto[100];
} Compromisso;

int main() {

    Horario horario1 = {9, 30, 0};

    Data data1 = {12, 5, 2023};
    
    Compromisso compromisso1;
    compromisso1.data = data1;
    compromisso1.horario = horario1;
    strcpy(compromisso1.texto, "Reuniao de equipe");
    

    printf("Compromisso: %s\n", compromisso1.texto);
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);
    
    return 0;
}
