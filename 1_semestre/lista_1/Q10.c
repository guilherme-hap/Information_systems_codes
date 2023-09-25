#include <stdio.h>
// Questão 10 (Lista 1 - CASA) - Algoritmo troca.

int main()
{
    int a, b, c;
    printf("Insira o primeiro valor: \n");
    scanf("%i", &a);
    printf("Insira o segundo valor: \n");
    scanf("%i", &b);

    c = a;
    a = b;
    b = c;
    
    printf("Os valores sao %i e %i", a, b);
    return 0;
}