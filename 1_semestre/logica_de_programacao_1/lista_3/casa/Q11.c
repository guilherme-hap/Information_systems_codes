// Questão 11 (CASA).
#include <stdio.h>

int main()
{
    int i, n, mul;
    mul=0;
    printf("Insira o número da tabuada: \n");
    scanf("%i", &n);
    for (i=0; i<=10; i++) {
        mul=n*i;
        printf("%i X %i = %i\n", n, i, mul);
    }
}