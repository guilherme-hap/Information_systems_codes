#include <stdio.h>
// Questão 1 (CASA) - Algoritmo par_ou_imp.

int main()
{
    int X;
    printf("Insira um numero: \n");
    scanf("%i", &X);

    if (X % 2 == 0) {
        printf("O numero inserido eh par!");
    }
    else {
        printf("O numero inserido eh impar!");
    }
    return 0;
}