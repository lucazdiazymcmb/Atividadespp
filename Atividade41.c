#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float Horas, ValorHora, Resultado, Aumento, Salario, ValorHoras;

    printf ("\nVoce sabe quanto recebe por hora no seu trabalho, Digite 1 para SIM e 0 para NAO\n");
    scanf ("%f", &ValorHoras);

if (ValorHoras == 0){
    printf ("\nInforme o valor Atual do seu salario, sem ponto e virgula\n");
    scanf ("%f", &Salario);

    printf ("\nInforme quantas Horas trabalhadas no mes\n");
    scanf ("%f", &Horas);  
ValorHora = Salario / Horas;
    printf ("\nO valor da sua hora Trabalhada e: %0.2f Reais", ValorHora);
Resultado = ValorHora * Horas;
Aumento = Resultado + (Resultado * 10/100);
    printf ("\nO salario final sera %.2f Reais\n", Aumento);

}

if (ValorHoras == 1){
    printf ("\nInforme o valor da sua hora de trabalho\n");
    scanf ("%f", &ValorHora);

    printf ("\nInforme quantas horas trabalhadas no mes\n");
    scanf ("%f", &Horas);
Resultado = ValorHora * Horas;
Aumento = Resultado + (Resultado * 10/100);
    printf ("\nO salario final sera %.2f reais\n", Aumento);        
}

    system ("pause");

    return 0;
}