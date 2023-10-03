// Questão 6 (CASA).
#include <stdio.h>

int main()
{
    int i;
    for (i=1;i<=20;i++)
        if (i % 2 == 0)
            printf("\n o numoro %i eh par", i);
        else
            printf("\n o numero %i eh impar", i);
    return 0;
}