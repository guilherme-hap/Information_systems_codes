#include <stdio.h>
// Questão 4, letra B (CASA) - Algoritmo menor_num.

int main()
{
    float A, B, C;
    printf("Insira o primeiro numero: \n");
    scanf("%f", &A);
    printf("Insira o segundo numero: \n");
    scanf("%f", &B);
    printf("Insira o terceiro numero: \n");
    scanf("%f", &C);

    if (A<B && B<C) {
        printf("%.2f", A);
    }
    else {
        if (A<C && C<B) {
        printf("%.2f", A);
        }
        else {
            if (B<A && A<C) {
            printf("%.2f", B);
            }
            else {
                if (B<C && C<A) {
                    printf("%.2f", B);
                }
                else {
                    if (C<A && A<B) {
                        printf("%.2f", C);
                    }
                    else {
                        if (C<B && B<A) {
                            printf("%.2f", C);
                        }
                    }
                }
            }
        }
        
    }
    return 0;
}