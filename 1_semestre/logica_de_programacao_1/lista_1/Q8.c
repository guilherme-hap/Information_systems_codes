#include <stdio.h>
// Questão 8 (Lista 1 - CASA) - Algoritmo média.

int main()
{
    float M, P1, P2, P3, P4;
    printf("Insira a primeira nota: \n");
    scanf("%f", &P1);
    printf("Insira a segunda nota: \n");
    scanf("%f", &P2);
    printf("Insira a terceira nota: \n");
    scanf("%f", &P3);
    printf("Insira a quarta nota: \n");
    scanf("%f", &P4);
    
    M = (P1+P2+P3+P4)/4;
    printf("Sua media foi: %.2f\n", M);
    return 0;
}