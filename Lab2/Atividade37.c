#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int hora_chegada, minuto_chegada, hora_partida, minuto_partida;
    int duracao_horas, duracao_minutos, preco;

    // Leitura dos dados de entrada
    printf("\nDigite a hora e o minuto de chegada (no formato hh:mm):\n ");
    scanf("%d:%d", &hora_chegada, &minuto_chegada);

    printf("\nDigite a hora e o minuto de partida (no formato hh:mm):\n ");
    scanf("%d:%d", &hora_partida, &minuto_partida);

    // Cálculo da duração do estacionamento em minutos
    if (hora_chegada <= hora_partida) {
        duracao_horas = hora_partida - hora_chegada;
    } else {
        duracao_horas = 24 - hora_chegada + hora_partida;
    }
    duracao_minutos = duracao_horas * 60 + minuto_partida - minuto_chegada;

    // Cálculo do preço a ser pago
    if (duracao_minutos <= 120) {
        preco = duracao_minutos / 60 + 1;
    } else if (duracao_minutos <= 240) {
        preco = 4;
    } else {
        preco = 4 + (duracao_minutos - 240 + 59) / 60 * 2;
    }

    // Impressão do resultado
    printf("\nPreço a pagar: R$ %d,00\n", preco);

    system ("pause");

    return 0;
}