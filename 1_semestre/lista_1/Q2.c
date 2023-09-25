#include <stdio.h>
// Questão 2 (Lista 1 - CASA) - Algoritmo conversão de dólares em reais.

int main()
{
    float D, R;
    printf("Insira o valor em dolares: \n");
    scanf("%f", &D);
    R = D/2.40;
    printf("Valor em reais: %.2f\n", R);
    return 0;
}