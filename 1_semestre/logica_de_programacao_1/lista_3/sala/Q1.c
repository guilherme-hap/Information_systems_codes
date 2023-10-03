#include <stdio.h>
// Questão 1 (SALA).

int main()
{
    int i;
    for (i=0;i<=20;i++) {
        if (i % 2 == 1)
            printf("\n %d", i);
        else continue;
    }
    return 0;
}