#include <stdio.h>
// Questão 10 (SALA).

int main()
{
    int i, soma;
    soma=0;
    for (i=1;i<=500;i++) {
        if (i % 2 == 1) continue;
        else {
            soma=soma+i;
            printf("\n %d", soma);
        }
    }
}