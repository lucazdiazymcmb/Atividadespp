#include <stdio.h>
#include <stdlib.h>>
#include <math.h>

int main() {
    int num;
    printf("\nDigite um numero inteiro:\n ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("\n%d eh divisivel por 3 e por 5 simultaneamente\n", num);
    }
    else if (num % 3 == 0) {
        printf("\n%d eh divisivel por 3\n", num);
    }
    else if (num % 5 == 0) {
        printf("\n%d eh divisivel por 5\n", num);
    }
    else {
        printf("\n%d nao eh divisivel por 3 nem por 5\n", num);
    }

    system ("pause");
    
    return 0;
}