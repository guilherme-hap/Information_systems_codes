#include <stdio.h>
// Questão 9 (SALA) - Algoritmo div.

int main ()
{
    int X,Y;
    printf("Insira o primeiro numero: \n");
    scanf("%i", &X);
    printf("Insira o segundo numero: \n");
    scanf("%i", &Y);

    if (X % 4 == 0 || X % 5 == 0) {
        printf("o seguinte numero eh divisivel por 4 ou 5: %i\n", X);
    }
    else {
        printf("o seguinte numero nao eh divisivel por 4 ou 5: %i\n", X);
    }
        if (Y % 4 == 0|| Y % 5 == 0) {
            printf("o seguinte numero eh divisivel por 4 ou 5: %i\n", Y);
        }
        else {
            printf("o seguinte numero nao eh divisivel por 4 ou 5: %i\n", Y);
        }
    return 0;
}