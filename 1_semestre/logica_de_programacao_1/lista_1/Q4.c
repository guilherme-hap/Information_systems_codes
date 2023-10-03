#include <stdio.h>
// Questão 4 (Lista 1 - CASA) - Algoritmo retângulo.

int main()
{
    float AR, a, b, P;
    printf("Insira a medida do menor lado: \n");
    scanf("%f", &a);
    printf("Insira a medida do maior lado: \n");
    scanf("%f", &b);
    
    AR = a*b;
    P = 2*a+2*b;
    printf("A area do retangulo e seu perimetro sao, respectivamente, iguais a: %.2f e %.2f\n", AR, P);
    return 0;
}