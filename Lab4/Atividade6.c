#include <stdio.h>

int converte(int horas, int minutos, int segundos);
int main() {
    int horas, minutos, segundos, total_segundos;
    
    printf("Digite as horas: ");
    scanf("%d", &horas);
    
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    total_segundos = converte(horas, minutos, segundos);
    
    printf("%d horas, %d minutos e %d segundos equivalem a %d segundos.\n", horas, minutos, segundos, total_segundos);
    
    return 0;
}

int converte(int horas, int minutos, int segundos) {
    int total_segundos;
    total_segundos = horas * 3600 + minutos * 60 + segundos;    
    return total_segundos;
}
