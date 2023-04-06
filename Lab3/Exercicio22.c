#include <stdio.h>

int main() {
    int palindrome = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int product = i * j;
            int r = 0, original = product;
            while (original > 0) {
                r = r * 10 + original % 10;
                original /= 10;
            }
            if (product == r && product > palindrome) {
                palindrome = product;
            }
        }
    }
    printf("O maior palindromo feito a partir do produto de dois numeros de tres digitos e: %d\n", palindrome);
    return 0;
}