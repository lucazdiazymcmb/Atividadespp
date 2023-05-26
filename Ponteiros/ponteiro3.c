#include <stdio.h>
int main (){
    int x = 10, y = 20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    printf ("endereco de x %p\n", &p1);
    printf ("endereco de y %p\n", &p2);
    if (&p1 > &p2){
        printf ("O maior endereco eh x %p", &p1);
    }else {
        printf ("O Maior endereco eh y %p", &p2);
    }
    return 0;
}