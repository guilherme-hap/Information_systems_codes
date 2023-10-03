// Questão 9 (CASA).
#include <stdio.h>

int main()
{
    int i;
    i=1;
    do {
        if (i % 2 == 0)
            printf("\n o numoro %i eh par", i);
        else
            printf("\n o numero %i eh impar", i);
        i++;
    }
    while (i<=20);
    return 0;
}