// Questão 1 - SALA
#include <stdio.h>

int main()
{
    int A[5], B[5], i;
    for(i=0;i<=4;i++) {
        printf("Digite os numeros para multiplicar: \n");
        scanf("%i", &A[i]);
    }
    printf("\n");
    for (i=0;i<=4;i++) {
        B[i]=A[i]*3;
        printf("Os resultados sao: %d\n", B[i]);
    }
}