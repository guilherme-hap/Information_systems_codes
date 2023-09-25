#include <stdio.h>
// Questão 11 (SALA).

int main()
{
    int A, B, C, D, E;
    printf("Insira um numero: \n");
    scanf("%i", &A);
    printf("Insira um numero: \n");
    scanf("%i", &B);
    printf("Insira um numero: \n");
    scanf("%i", &C);
    printf("Insira um numero: \n");
    scanf("%i", &D);
    printf("Insira um numero: \n");
    scanf("%i", &E);

    if (A>B && A>C && A>D && A>E)
        printf("O maior numero é: %i \n", A);
    else {
        if (B>A && B>C && B>D && B>E)
            printf("O maior numero é: %i \n", B);
        else {
            if (C>A && C>B && C>D && C>E)
                printf("O maior numero é: %i \n", C);
            else {
                if (D>A && D>B && D>C && D>E)
                    printf("O maior numero é: %i \n", D);
                else {
                    if (E>A && E>B && E>C && E>D)
                        printf("O maior numero é: %i \n", E);
                }
            }
        }
    }
    if (A<B && A<C && A<D && A<E)
        printf("O menor numero é: %i \n", A);
    else {
        if (B<A && B<C && B<D && B<E)
            printf("O menor numero é: %i \n", B);
        else {
            if (C<A && C<B && C<D && C<E)
                printf("O menor numero é: %i \n", C);
            else {
                if (D<A && D<B && D<C && D<E)
                    printf("O menor numero é: %i \n", D);
                else {
                    if (E<A && E<B && E<C && E<D)
                        printf("O menor numero é: %i \n", E);
                }
            }
        }
    }
    return 0;
}