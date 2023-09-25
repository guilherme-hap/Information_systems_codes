#include <stdio.h>
// Questão 7 (Lista 1 - CASA) - Algoritmo circunferência.

int main()
{
    float A, V, R;
    printf("Insira a medida do raio: \n");
    scanf("%f", &R);
    
    A = 4*R*R;
    V = (R*R*R)*4/3;
    printf("A area da esfera e seu volume sao, respectivamente, iguais a: %.2f e %.2f\n", A, V);
    return 0;
}