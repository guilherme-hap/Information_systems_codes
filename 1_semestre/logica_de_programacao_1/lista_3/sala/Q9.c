#include <stdio.h>
#include <math.h>
// Questão 9 (SALA).

int main()
{
    float P, M, N;
    printf("Insira a base da potência: \n");
    scanf("%f", &N);
    printf("Insira o expoente da potência: \n");
    scanf("%f", &M);

    P=pow(N, M);
    printf("O resultado é igual a: %f \n", P);
    return 0;
}