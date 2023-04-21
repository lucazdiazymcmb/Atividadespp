#include <stdlib.h>
void estrela(int n);
int main() {
    int n = 6;
    estrela(n);
    return 0;
}

#include <stdio.h>

void estrela(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
