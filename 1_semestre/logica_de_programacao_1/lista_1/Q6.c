#include <stdio.h>
// Questão 6 (Lista 1 - CASA) - Algoritmo circunferência.

int main()
{
    float A, C, r, Pi;
    Pi = 3.14159;
    printf("Insira a medida do raio: \n");
    scanf("%f", &r);
    
    A = Pi*(r*r);
    C = 2*Pi*r;
    printf("A area do circulo e sua circunferencia sao, respectivamente, iguais a: %.2f e %.2f\n", A, C);
    return 0;
}