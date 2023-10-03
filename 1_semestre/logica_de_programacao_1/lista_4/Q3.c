// Questão 3 - Sala
#include <stdio.h>

int main()
{
    int A[5], B[5], C[5], i;
    for(i=0; i<5; i++) {
        printf("Digite o primeiro operando: \n");
        scanf("%d", &A[i]);
        printf("Digite o segundo operando: \n");
        scanf("%d", &B[i]);
    }
    for(i=0; i<5; i++) {
        C[i] = A[i]-B[i];
        {
            printf("\n");
        }
    printf("%d", C[i]);
    }
}