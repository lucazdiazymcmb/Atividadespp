#include <stdio.h>
#include <math.h>

struct numero_complexo {
    float real;
    float imaginaria;
};

struct numero_complexo somar_complexos(struct numero_complexo z, struct numero_complexo w) {
    struct numero_complexo resultado;
    
    resultado.real = z.real + w.real;
    resultado.imaginaria = z.imaginaria + w.imaginaria;
    
    return resultado;
}

struct numero_complexo subtrair_complexos(struct numero_complexo z, struct numero_complexo w) {
    struct numero_complexo resultado;
    
    resultado.real = z.real - w.real;
    resultado.imaginaria = z.imaginaria - w.imaginaria;
    
    return resultado;
}

struct numero_complexo multiplicar_complexos(struct numero_complexo z, struct numero_complexo w) {
    struct numero_complexo resultado;
    
    resultado.real = (z.real * w.real) - (z.imaginaria * w.imaginaria);
    resultado.imaginaria = (z.real * w.imaginaria) + (z.imaginaria * w.real);
    
    return resultado;
}

float calcular_modulo(struct numero_complexo z) {
    return sqrt((z.real * z.real) + (z.imaginaria * z.imaginaria));
}

int main() {
    struct numero_complexo z, w, resultado_soma, resultado_subtracao, resultado_multiplicacao;
    float modulo_z, modulo_w;
    
    printf("Digite o número complexo z:\n");
    printf("Parte real: ");
    scanf("%f", &z.real);
    printf("Parte imaginária: ");
    scanf("%f", &z.imaginaria);
    
    printf("Digite o número complexo w:\n");
    printf("Parte real: ");
    scanf("%f", &w.real);
    printf("Parte imaginária: ");
    scanf("%f", &w.imaginaria);
    
    resultado_soma = somar_complexos(z, w);
    resultado_subtracao = subtrair_complexos(z, w);
    resultado_multiplicacao = multiplicar_complexos(z, w);
    
    modulo_z = calcular_modulo(z);
    modulo_w = calcular_modulo(w);
    
    printf("Soma: %.2f + %.2fi\n", resultado_soma.real, resultado_soma.imaginaria);
    printf("Subtração: %.2f + %.2fi\n", resultado_subtracao.real, resultado_subtracao.imaginaria);
    printf("Multiplicação: %.2f + %.2fi\n", resultado_multiplicacao.real, resultado_multiplicacao.imaginaria);
    printf("Módulo de z: %.2f\n", modulo_z);
    printf("Módulo de w: %.2f\n", modulo_w);
    
    return 0;
}
