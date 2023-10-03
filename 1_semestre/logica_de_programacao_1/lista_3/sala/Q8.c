#include <stdio.h>
// Questão 8 (SALA).

int main()
{
    int a=0, b=1, c, i; // "a" é o primeiro termo e "b" é o segundo termo.
    i=2;
    printf("\n %i", b);
    while (i<=15) {
        c=a+b;
        a=b;
        b=c;
        printf("\n %i", c);
        i++;
    }
    return 0;
}