#include <stdio.h>
// Questão 9 (Lista 1 - CASA) - Algoritmo média 2.

int main()
{
    float M, P1, P2, A;
    printf("Insira a primeira nota: \n");
    scanf("%f", &P1);
    printf("Insira a segunda nota: \n");
    scanf("%f", &P2);
    printf("Insira a nota das atividades: \n");
    scanf("%f", &A);
    
    M = (P1*4+P2*4+A*2)/10;
    printf("Sua media foi: %.2f\n", M);
    return 0;
}