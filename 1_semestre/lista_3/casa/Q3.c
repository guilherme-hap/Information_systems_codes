// Questão 3 (CASA).
#include <stdio.h>

int main()
{
    int i;
    i=1;
    while (i<=20) {
        if (i % 2 == 0) 
            printf("\n O numero %i eh par", i);
        else 
            printf("\n O numero %i eh impar", i);
    i++;
    }
    return 0;
}