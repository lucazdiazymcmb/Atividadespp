#include <stdio.h>
#include <math.h>

typedef struct {
    char nome[30];
    int x;
    int y;
} Cidade;

double calcularDistancia(Cidade cidade1, Cidade cidade2) {
    int deltaX = cidade2.x - cidade1.x;
    int deltaY = cidade2.y - cidade1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

void exibirMatrizDistancias(double matriz[][100], int n) {
    printf("Matriz de distancias:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o numero de cidades: ");
    scanf("%d", &n);

    Cidade cidades[n];

    // Entrada de dados das cidades
    for (int i = 0; i < n; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", cidades[i].nome);
        printf("Digite a coordenada X: ");
        scanf("%d", &cidades[i].x);
        printf("Digite a coordenada Y: ");
        scanf("%d", &cidades[i].y);
    }

    // Cálculo das distâncias e armazenamento na matriz
    double matrizDistancias[n][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizDistancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
        }
    }

    // Exibição da matriz de distâncias
    exibirMatrizDistancias(matrizDistancias, n);

    // Cálculo da distância entre duas cidades
    int cidade1, cidade2;
    printf("Digite o numero das duas cidades (1 a %d): ", n);
    scanf("%d %d", &cidade1, &cidade2);
    cidade1--; // Ajuste para índice do vetor
    cidade2--; // Ajuste para índice do vetor
    double distancia = matrizDistancias[cidade1][cidade2];
    printf("A distancia entre as cidades %d e %d e: %.2lf\n", cidade1 + 1, cidade2 + 1, distancia);

    return 0;
}
