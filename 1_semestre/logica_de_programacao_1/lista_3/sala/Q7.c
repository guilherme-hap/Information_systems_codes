#include <stdio.h>
#include <math.h>
// Questão 7 (SALA).

int main()
{
    int i, pot;
    pot=0;
    for (i=0;i<=15;i++) {
        pot=pow(3, i);
        printf("\n 3 elevado a %d é igual a = %d", i, pot);
    }
    return 0;
}