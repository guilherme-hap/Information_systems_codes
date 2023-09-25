#include <stdio.h>
// Questão 1 (Lista 1 - CASA) - Algoritmo conversão de reais em dólares.

int main()
{
    float D, R;
    printf("Insira o valor em reais: \n");
    scanf("%f", &R);
    D = 2.40*R;
    printf("Valor em dolares: %.2f\n", D);
    return 0;
}