#include <stdio.h>
// Questão 11 (Lista 1 - CASA) - Algoritmo troca desafio.

int main()
{
    int a, b;
    printf("Insira o primeiro valor: \n");
    scanf("%i", &a);
    printf("Insira o segundo valor: \n");
    scanf("%i", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Os valores sao %i e %i", a, b);
    return 0;
}