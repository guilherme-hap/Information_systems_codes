#include <stdio.h>
// Questão 4, letra C (CASA) - Algoritmo num_meio.

int main()
{
    float A, B, C;
    printf("Insira o primeiro numero: \n");
    scanf("%f", &A);
    printf("Insira o segundo numero: \n");
    scanf("%f", &B);
    printf("Insira o terceiro numero: \n");
    scanf("%f", &C);

    if (A>B && A<C) {
        printf("%.2f", A);
    }
    else {
        if (A>C && A<B) {
        printf("%.2f", A);
        }
        else {
            if (B>A && B<C) {
            printf("%.2f", B);
            }
            else {
                if (B>C && B<A) {
                    printf("%.2f", B);
                }
                else {
                    if (C>A && C<B) {
                        printf("%.2f", C);
                    }
                    else {
                        if (C>B && C<A) {
                            printf("%.2f", C);
                        }
                    }
                }
            }
        }
        
    }
    return 0;
}