#include <stdio.h>
// Questão 12 (Lista 1 - CASA) - Algoritmo velocidade média.

int main()
{
    float S, T, V; // S é espaço, T é tempo e V é a velocidade média.
    printf("Insira o espaço percorrido: \n");
    scanf("%f", &S);
    printf("Insira o tempo de percurso: \n");
    scanf("%f", &T);

    V = S/T;

    printf("Velocidade igual a: %f", V);
    return 0;
}