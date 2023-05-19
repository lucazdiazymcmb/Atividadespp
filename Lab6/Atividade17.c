#include <stdio.h>
#include <string.h>

#define MAX_NOME 15
#define MAX_ELETRODOMESTICOS 5

struct Eletrodomestico {
    char nome[MAX_NOME];
    float potencia;
    float tempoAtivo;
};

int main() {
    struct Eletrodomestico eletrodomesticos[MAX_ELETRODOMESTICOS];
    float consumoTotal = 0.0;
    float consumoRelativo[MAX_ELETRODOMESTICOS];
    float tempo;
    int i;

    printf("Digite os dados de 5 eletrodomésticos:\n");
    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("Eletrodoméstico %d:\n", i + 1);
        printf("Nome: ");
        fgets(eletrodomesticos[i].nome, sizeof(eletrodomesticos[i].nome), stdin);
        printf("Potência (kW): ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Tempo ativo por dia (horas): ");
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
        getchar(); // Limpar o buffer do teclado

        // Remover o caractere de nova linha ('\n') do campo de nome
        eletrodomesticos[i].nome[strcspn(eletrodomesticos[i].nome, "\n")] = '\0';
    }

    printf("\nDigite o tempo (em dias): ");
    scanf("%f", &tempo);

    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
    }

    printf("\nConsumo total na casa: %.2f kWh\n", consumoTotal);

    printf("\nConsumo relativo de cada eletrodoméstico:\n");
    for (i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        consumoRelativo[i] = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo) / consumoTotal * 100.0;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumoRelativo[i]);
    }

    return 0;
}
