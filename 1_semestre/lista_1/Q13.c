#include <stdio.h>
// Questão 13 (Lista 1 - CASA) - Algoritmo MUV.

int main()
{
    float s, t; // 
    printf("Insira o tempo de percurso (em segundos): \n");
    scanf("%f", &t);

    s = 2+3*t+(0.5*10*t*t);

    printf("Valor de s igual a: %.2f", s);
    return 0;
}