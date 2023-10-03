#include <stdio.h>
// Questão 5 (Lista 1 - CASA) - Algoritmo IMC.

int main()
{
    float m, h, I;
    printf("Insira sua massa (em kg): \n");
    scanf("%f", &m);
    printf("Insira sua altura (em metros): \n");
    scanf("%f", &h);

    I = m/(h*h);
    printf("Seu IMC igual a: %.2f\n", I);
    return 0;
}