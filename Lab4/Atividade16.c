#include <stdio.h>

void desenha_linha(int n);
int main() {
    desenha_linha(10);
    desenha_linha(5);
    desenha_linha(20);
    return 0;
}
void desenha_linha(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("=");
    }
    printf("\n");
}
