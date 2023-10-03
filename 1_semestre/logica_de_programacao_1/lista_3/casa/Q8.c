// Questão 8 (CASA).
#include <stdio.h>

int main()
{
    int i;
    i=1;
    do {
        if (i % 2 ==0)
            printf("\n %i", i);
        i++;
    }
    while (i<=20);
    return 0;
}